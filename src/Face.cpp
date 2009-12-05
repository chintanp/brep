#include "Face.h"
#include "Mesh.h"

Face::Face(Mesh *m) : solid(m), id(m->numFaces)  {
    solid->addFace(this);
}

void Face::addLoop(Loop *l) {
    loops.push_back(l);
}

int Face::getId() {
    return id;
}
