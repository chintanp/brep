#include "Loop.h"
#include "Face.h"

Loop::Loop(Face *f) {
    face = f;
    
    face->addLoop(this);
}

