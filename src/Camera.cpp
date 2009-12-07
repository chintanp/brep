#include "Camera.h"
#include <cmath>
#include <iostream>

Camera::Camera() : initialized(false), lastPos(0, 0, 0), 
                   currPos(0, 0, 0), orientation(0, 0, 0, 1) 
{
    pos = Vec3(0.0, 0.0, 2.0);
    setProjection(-10, 10, -7.5, 7.5, pos.z + 1, pos.z + 50);
}

void Camera::setupViewMatrix(float *m) {
    orientation.toMatrix(m);
    m[12] = -pos.x;
    m[13] = -pos.y;
    m[14] = -pos.z;
}

void Camera::setProjection(float l, float r, float b,
                           float t, float n, float f)
{
    frustum.left = l;
    frustum.right = r;
    frustum.bottom = b;
    frustum.top = t;
    frustum.near = n;
    frustum.far = f;
}

void Camera::updateRotation(int mouseX, int mouseY, 
                            int windowWidth, int windowHeight)
{
    if (!initialized)
    {
        mapTrackball(mouseX, mouseY, windowWidth, windowHeight);
        lastPos = currPos;
        initialized = true;
    }
    else
    {
        mapTrackball(mouseX, mouseY, windowWidth, windowHeight);
        float ang = angle(currPos, lastPos);
        Vec3 axis = normalize(cross(currPos, lastPos));
        rotate(axis, ang);
        lastPos = currPos;
    }
}

void Camera::rotate(const Vec3 &axis, float angle) {
    Quat q;
    q.fromAxisAngle(axis, angle);
    orientation = orientation*q;
}

void Camera::zoom(float zoomFactor) {
    frustum.left *= zoomFactor;
    frustum.right*= zoomFactor;
    frustum.bottom *= zoomFactor;
    frustum.top *= zoomFactor;
}

void Camera::reset() {
    initialized = false;
    lastPos = Vec3(0, 0, 0);
    currPos = Vec3(0, 0, 0);
    //setProjection(-1, 1, -1, 1, 0, 1);
}

void Camera::fit(const BoundingBox& bBox) {
    float width2 = (bBox.pMax.x - bBox.pMin.x) * 0.5;
    float height2 = (bBox.pMax.y - bBox.pMin.y) * 0.5;
    float near, far;

    (width2 >= height2) ? height2 = width2 * 0.75 : width2 = height2 * 1.333;

    near = height2;
    far = 2*(bBox.pMax.z - bBox.pMin.z);
    if (far < 1000)
        far = 1000.0;

    pos = Vec3(0.0, 0.0, bBox.pMax.z + 2 * width2);
    setProjection(-width2, width2, -height2, height2, near, far);
}

void Camera::mapTrackball(int mouseX, int mouseY, 
                          int windowWidth, int windowHeight)
{
    //( PI / 2 )
    static const float PI_2 = 1.570796327;

    //map from viewport to a window with corners (-1,-1) and (1,1).
    //This window has width and height = 2.0.
    //Note the need to subtract windowWidth and windowHeight, that is because
    //( 2 * mouse ) / window would map to a window with corners (0,0) and (1,1).
    //What we do is subtract 1 from the expression above giving the expression
    currPos.x = ( 2.0 * mouseX - windowWidth ) / windowWidth;
    currPos.y = ( windowHeight - 2.0 * mouseY ) / windowHeight;
    currPos.z = 0.0;

    float d = currPos.length();

    //the point lies outside the sphere z = 0.
    if ( d > 1.0 )
        d = 1.0;
    currPos.z = cos( PI_2 * d );
    normalize(currPos);
}
