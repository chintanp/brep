#ifndef _LOOP_H_
#define _LOOP_H_

#include "HalfEdge.h"
#include "math/Vec3.h"

class Face;

class Loop {
public:
    Loop(Face *f);
    
    void setNormal();

    Vec3 normal;
    
    //void setFace(Face *f);
    HalfEdge *hed;
    Face *face;
};

#endif
