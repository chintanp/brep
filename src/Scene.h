#ifndef _SCENE_H_
#define _SCENE_H_

#include <list>
#include "Mesh.h"

class Scene {
public:
    //TODO função pra limpar a cena

    void render();

    bool isEmpty();

    Mesh* getSolid(int idSolid);
    Face* getFace(Mesh *m, int idFace);
    HalfEdge* getHEd(Face *f, int idVertex1, int idVertex2);
    HalfEdge* getHEd(Face *f, int idVertex1);
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

    std::list<Mesh*> meshes;

    static int numMeshes;
    static int numFaces;
    static int numVertices;
};


#endif
