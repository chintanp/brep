#ifndef _LOOP_H_
#define _LOOP_H_

#include "HalfEdge.h"

class Face;

class Loop {
public:
    Loop(Face *f);
    
    //void setFace(Face *f);
    HalfEdge *hed;
    Face *face;
};

#endif
