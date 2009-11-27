#include "Face.h"
#include "Mesh.h"

Face::Face(Mesh *m, int id) : solid(m), id(id)  {
    solid->addFace(this);
}

void Face::addLoop(Loop *l) {
    loops.push_back(l);
}

int Face::getId() {
    return id;
}
