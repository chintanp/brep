#ifndef _SCENE_H_
#define _SCENE_H_

#include <list>
#include "Mesh.h"
#include "BoundingBox.h"

enum RenderMode { MESHES, FACES, POINTS, LINES };

class Scene {
public:
    //TODO função pra limpar a cena
    Scene();
    void render(RenderMode mode);

    bool isEmpty();

    Mesh* getSolid(int idSolid);
    Face* getFace(Mesh *m, int idFace);
    HalfEdge* getHEd(Face *f, int idVertex1, int idVertex2);
    HalfEdge* getHEd(Face *f, int idVertex1);
    Loop* getLoop(int idSolid, int id);
    Vertex* getVertex(int idSolid, int id);
    Edge* getEdge(int idSolid, int id);

    void mvfs(float x, float y, float z);
    void lmev(HalfEdge *h1, HalfEdge *he2, float x,
             float y, float z);
    void lmef(HalfEdge *h1, HalfEdge *h2);

    bool mev(int idSolid, int idFace1, int idFace2, int idVertex1,
             int idVertex2, int idVertex3, float x,
             float y, float z);
    bool smev(int idSolid, int idFace, int idVertex1, float x,
              float y, float z);
    bool mef(int idSolid, int idFace, int idVertex1, int idVertex2,
             int idVertex3, int idVertex4);
    bool smef(int idSolid, int idFace, int idVertex1, int idVertex2);
   

    void removeSolid(int idSolid);

    void sweep(int idSolid, int idFace, float dx, float dy, float dz);
    //Sweeping no eixo x
    void rsweep(int idSolid, int idFace, int disc);

    void updateBoundingBox();

    std::list<Mesh*> meshes;

    static int numMeshes;

    BoundingBox bbox;
};


#endif
