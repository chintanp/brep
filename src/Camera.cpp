#include "Camera.h"
#include <cmath>
#include <iostream>

Camera::Camera() : initialized(false), lastPos(Vec3(0, 0, 0)), currPos(Vec3(0, 0, 0)) {
    setProjection(-1, 1, -1, 1, 0, 1);
}

float* Camera::setupViewMatrix() {
	orientation.toMatrix(viewMatrix);
    
    viewMatrix[12] = -pos.x;
    viewMatrix[13] = -pos.y;
    viewMatrix[14] = -pos.z;

    return viewMatrix;
}

void Camera::setProjection(float l, float r, float b,
                           float t, float n, float f)
{
    frustum.left = l;
    frustum.right = r;
    frustum.bottom = b;
    frustum.near = n;
    frustum.far = f;
}

void Camera::updateRotation(int mouseX, int mouseY, 
                            int windowWidth, int windowHeight)
{
    if ( !initialized )
    {
        mapTrackball( mouseX, mouseY, windowWidth, windowHeight );
        lastPos = currPos;
        initialized = true;
    }
    else
    {
        mapTrackball( mouseX, mouseY, windowWidth, windowHeight );
        float ang = angle(currPos, lastPos);
        Vec3 axis = normalize(cross(currPos, lastPos));
        this->rotateAxis(axis, ang/2.0);
        lastPos = currPos;
    }
}

void Camera::reset() {
    initialized = false;
    lastPos = Vec3(0, 0, 0);
    currPos = Vec3(0, 0, 0);

    //setProjection(-1, 1, -1, 1, 0, 1);
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
