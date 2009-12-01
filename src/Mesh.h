#ifndef _MESH_H_
#define _MESH_H_

#include <list>
#include "Vertex.h"
#include "Face.h"
#include "Edge.h"
#include "BoundingBox.h"

class Mesh {
public:
//TODO: destrutor desalocando a memória
    Mesh(int id);

    int getId();

    void addVertex(Vertex *v);
    void addFace(Face *f);
    void addEdge(Edge *e);

    int numFaces;

//TODO: encapsulamento
    std::list<Vertex*> vertices;
    std::list<Face*> faces;
    std::list<Edge*> edges;

    int id;
    BoundingBox bb;
    bool initialized;

    float r, g, b;
};

#endif
