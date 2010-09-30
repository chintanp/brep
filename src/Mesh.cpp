#include "Mesh.h"

Mesh::Mesh(int id) : id(id), initialized(false) {
    r = g = b = 0.6;
    numFaces = 0;
    numVertices = 0;
    numLoops = 0;
    numEdges = 0;

    tx = ty = tz = 0;
    //Identidade para a escala
    sx = sy = sz = 1;
    
    //Quaternion identidade
    orientation = Quat(0.0, 0.0, 0.0, 1.0);

    //FIXME manifold está aqui somente para
    //que a face do mundo não seja desenhada para
    //modelos 2d
    manifold = true;
}

Mesh::~Mesh() {
    //apaga os vertices
    std::list<Vertex*>::iterator vIter;
    for(vIter = vertices.begin(); vIter != vertices.end(); vIter++) {
        delete *vIter;
    }
    vertices.clear();

    //apaga as arestas
    std::list<Edge*>::iterator eIter;
    for(eIter = edges.begin(); eIter != edges.end(); eIter++) {
        delete *eIter;
    }
    edges.clear();
    
    //apaga as faces
    std::list<Face*>::iterator fIter;
    for(fIter = faces.begin(); fIter != faces.end(); fIter++) {
        delete *fIter;
    }
    faces.clear();
}

int Mesh::getId() {
    return id;
}

void Mesh::addVertex(Vertex *v) {
    vertices.push_back(v);
    if(!initialized) {
        bb.pMax.x = bb.pMin.x = v->x;
        bb.pMax.y = bb.pMin.y = v->y;
        bb.pMax.z = bb.pMin.z = v->z;
        initialized = true;
    }
    else {
        if (bb.pMax.x < v->x)
            bb.pMax.x = v->x;
        if (bb.pMin.x > v->x)
            bb.pMin.x = v->x;

        if (bb.pMax.y < v->y)
            bb.pMax.y = v->y;
        if (bb.pMin.y > v->y)
            bb.pMin.y = v->y;

        if (bb.pMax.z < v->z)
            bb.pMax.z = v->z;
        if (bb.pMin.z > v->z)
            bb.pMin.z = v->z;
    }
    numVertices++;
}

void Mesh::addFace(Face *f) {
    faces.push_back(f);
    numFaces++;
}

void Mesh::addEdge(Edge *e) {
    edges.push_back(e);
    numEdges++;
}

void Mesh::translate(float dx, float dy, float dz) {
    tx += dx;
    ty += dy;
    tz += dz;
}

void Mesh::scale(float dx, float dy, float dz) {
    sx = dx;
    sy = dy;
    sz = dz;
}

void Mesh::rotate(float angle, float x, float y, float z) {
    Quat q;
    q.fromAxisAngle(Vec3(x, y, z), angle);
    orientation = orientation*q;
}

/*void Mesh::initFFDGrid() {
    //Estima o deslocamento para o ponto inicial e final do grid
    std::list<Edge*>::iterator it = edges.begin();
    Vec3 displacement = Vec3(((*it)->hed1->origin->x - (*it)->hed2->origin->x)*0.1,
                             ((*it)->hed1->origin->y - (*it)->hed2->origin->y)*0.1,
                             ((*it)->hed1->origin->z - (*it)->hed2->origin->z)*0.1);

    //Estima o ponto p0 do grid como sendo o ponto mínimo da bounding box
    //menos um  fração do tamanho de uma aresta qualquer
    grid.p0 = Vec3(bb.pMin.x - displacement.length()*0.1, bb.pMin.y - displacement.length()*0.1
                   bb.pMin.z - displacement.length()*0.1);
    
    grid.s = Vec3(1.0, 0.0, 0.0)*((bb.pMax.x - bb.pMin.x) + displacement.length()*0.1);
    grid.t = Vec3(0.0, 1.0, 0.0)*((bb.pMax.y - bb.pMin.y) + displacement.length()*0.1);
    grid.u = Vec3(0.0, 0.0, 1.0)*((bb.pMax.z - bb.pMin.z) + displacement.length()*0.1);

    //criar pontos no grid
    
}*/
