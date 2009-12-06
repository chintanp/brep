#include "Vertex.h"
#include "Mesh.h"
#include "HalfEdge.h"

Vertex::Vertex(float x, float y, float z, Mesh *m)
        : x(x), y(y), z(z), id(m->numVertices)
{
    m->addVertex(this);
    r = g = b = 0.0;
}

int Vertex::getId() {
    return id;
}
