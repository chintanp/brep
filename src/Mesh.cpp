#include "Mesh.h"

Mesh::Mesh(int id) : id(id) {

}

int Mesh::getId() {
    return id;
}

void Mesh::addVertex(Vertex *v) {
    vertices.push_back(v);
}

void Mesh::addFace(Face *f) {
    faces.push_back(f);
}

void Mesh::addEdge(Edge *e) {
    edges.push_back(e);
}
