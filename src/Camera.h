#ifndef CAMERA_H_
#define CAMERA_H_

#include "math/Movable.h"
#include "BoundingBox.h"

struct Frustum {
    float left;
    float right;
    float bottom;
    float top;
    float near;
    float far;
};

class Camera : public Movable {
public:
    Camera();

    float* setupViewMatrix();
    void setProjection(float l, float r, float b,
                       float t, float n, float f);
    void updateRotation(int mouseX, int mouseY, 
                        int windowWidth, int windowHeight);
    void fit(const BoundingBox& bBox);
    void reset();
private:
    void mapTrackball(int mouseX, int mouseY, 
                      int windowWidth, int windowHeight);
    Frustum frustum;
    float viewMatrix[16];

    bool initialized;
    Vec3 lastPos;
    Vec3 currPos;
};

#endif
