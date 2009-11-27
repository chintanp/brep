#ifndef BOUNDINGBOX_H_
#define BOUNDINGBOX_H_

#include "math/Vec3.h"
#include <GL/gl.h>

class BoundingBox {
  public:
    BoundingBox(float l = -1.0, float r = 1.0, float t = 1.0, float bot= -1.0,
                float f = 1.0, float back = -1.0) 
          : left(l), right(r), top(t), bottom(bot), front(f), back(back) {
      center.x = (left + right)*0.5;
      center.y = (top + bottom)*0.5;
      center.x = (front + back)*0.5;
    }

    void setCenter() {
      vertex[0] = Vec3(left, bottom, back);
      vertex[1] = Vec3(left, bottom, front);
      vertex[2] = Vec3(left, top, back);
      vertex[3] = Vec3(left, top, front);
      vertex[4] = Vec3(right, bottom, back);
      vertex[5] = Vec3(right, bottom, front);
      vertex[6] = Vec3(right, top, back);
      vertex[7] = Vec3(right, top, front);

      pMin = Vec3(left, bottom, back);
      pMax = Vec3(right, top, front);

      center.x = (left + right)*0.5;
      center.y = (top + bottom)*0.5;
      center.x = (front + back)*0.5;
    }

    void render() {
      //Front
      glBegin(GL_LINE_LOOP);
        glVertex3f(vertex[3].x, vertex[3].y, vertex[3].z);
        glVertex3f(vertex[1].x, vertex[1].y, vertex[1].z);
        glVertex3f(vertex[5].x, vertex[5].y, vertex[5].z);
        glVertex3f(vertex[7].x, vertex[7].y, vertex[7].z);
      glEnd();
      
      //Back
      glBegin(GL_LINE_LOOP);
        glVertex3f(vertex[0].x, vertex[0].y, vertex[0].z);
        glVertex3f(vertex[4].x, vertex[4].y, vertex[4].z);
        glVertex3f(vertex[6].x, vertex[6].y, vertex[6].z);
        glVertex3f(vertex[2].x, vertex[2].y, vertex[2].z);
      glEnd();

      //Right
      glBegin(GL_LINE_LOOP);
        glVertex3f(vertex[4].x, vertex[5].y, vertex[4].z);
        glVertex3f(vertex[5].x, vertex[4].y, vertex[5].z);
        glVertex3f(vertex[7].x, vertex[7].y, vertex[7].z);
        glVertex3f(vertex[6].x, vertex[6].y, vertex[6].z);
      glEnd();
      
      //Left
      glBegin(GL_LINE_LOOP);
        glVertex3f(vertex[0].x, vertex[0].y, vertex[0].z);
        glVertex3f(vertex[1].x, vertex[1].y, vertex[1].z);
        glVertex3f(vertex[3].x, vertex[3].y, vertex[3].z);
        glVertex3f(vertex[2].x, vertex[2].y, vertex[2].z);
      glEnd();

      //Top
      glBegin(GL_LINE_LOOP);
        glVertex3f(vertex[3].x, vertex[3].y, vertex[3].z);
        glVertex3f(vertex[7].x, vertex[7].y, vertex[7].z);
        glVertex3f(vertex[6].x, vertex[6].y, vertex[6].z);
        glVertex3f(vertex[2].x, vertex[2].y, vertex[2].z);
      glEnd();
      
      //Bottom
      glBegin(GL_LINE_LOOP);
        glVertex3f(vertex[0].x, vertex[0].y, vertex[0].z);
        glVertex3f(vertex[1].x, vertex[1].y, vertex[1].z);
        glVertex3f(vertex[5].x, vertex[5].y, vertex[5].z);
        glVertex3f(vertex[4].x, vertex[4].y, vertex[4].z);
      glEnd();
    }
        
    
    float left;
    float right;
    float top;
    float bottom;
    float front;
    float back;

    Vec3 center;
    Vec3 vertex[8];

    Vec3 pMin;
    Vec3 pMax;
};

#endif
