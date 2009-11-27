#include "Vertex.h"
#include "Mesh.h"
#include "HalfEdge.h"

Vertex::Vertex(float x, float y, float z, Mesh *m, int id) 
        : x(x), y(y), z(z), id(id)
{
    m->addVertex(this);
}

int Vertex::getId() {
    return id;    
}
