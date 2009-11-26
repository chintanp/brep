#include "Edge.h"
#include "Mesh.h"

Edge::Edge(Mesh *m)  
{
    m->addEdge(this);
}
