#ifndef _VERTEX_H_
#define _VERTEX_H_


class HalfEdge;
class Mesh;

class Vertex {
public:
    Vertex(float x, float y, float z, Mesh *m);

    int getId();

    int id;
    float x, y, z;
    //Ponteiro para a half edge que sai desse vértice
    HalfEdge *hed;
};

#endif
