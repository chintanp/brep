#include "Scene.h"
#include <GL/gl.h>
#include <iostream>
int Scene::numMeshes = 0;
int Scene::numVertices = 0;

Scene::Scene() {
}

void Scene::render() {
    std::list<Mesh*>::iterator mIter;
    int i = 0;
    for(mIter = meshes.begin(); mIter != meshes.end(); mIter++){
        std::list<Face*>::iterator fIter;
        //int i = 0;
        for(fIter = (*mIter)->faces.begin(); fIter != (*mIter)->faces.end(); fIter++) {
            std::cout << "face: " << (*fIter)->getId();
            /*if (i == 0) {
                glColor3f(0.0, 0.0, 0.0);
                //i++;
                //continue;
            }
            else if (i == 1)
                glColor3f(1.0, 0.0, 0.0);
            else if (i == 2)
                glColor3f(0.0, 1.0, 0.0);
            else if (i == 3)
                glColor3f(0.0, 0.0, 1.0);
            else if (i  == 4)
                glColor3f(1.0, 1.0, 0.0);
            else if (i  == 5)
                glColor3f(0.5, 1.0, 0.0);
            else
                glColor3f(1.0, 0.5, 0.0);
            i++;*/
            std::list<Loop*>::iterator lIter;
            
            for (lIter = (*fIter)->loops.begin(); lIter != (*fIter)->loops.end(); lIter++) {
                std::cout << "  loop: " << std::endl;
                HalfEdge *he = (*lIter)->hed;

                (*lIter)->id = i;
                glLoadName(i);
                glColor3f((*lIter)->r, (*lIter)->g, (*lIter)->b);
                glNormal3f((*lIter)->normal.x, (*lIter)->normal.y, (*lIter)->normal.z);
                glBegin(GL_POLYGON);
                do {
                    Vertex *vert = he->origin;
                    std::cout << "\t vertice " << vert->getId() << ": " << vert->x << ", " << vert->y << ", " << vert->z << std::endl;
                    glVertex3f(vert->x, vert->y, vert->z);
                }while((he = he->next) != (*lIter)->hed);
                glEnd();
                std::cout << std::endl;
                i++;
            }
        }
    }
}

bool Scene::isEmpty() {
    return meshes.empty();
}

Mesh* Scene::getSolid(int idSolid) {
    Mesh *m;
    std::list<Mesh*>::iterator iter;
    for(iter = meshes.begin(); iter != meshes.end(); iter++)
        if ((*iter)->getId() == idSolid) {
            m = *iter;
            return m;
        }
    return NULL;
}

Face* Scene::getFace(Mesh *m, int idFace) {
    Face *f;
    std::list<Face*>::iterator iter;
    for(iter = m->faces.begin(); iter != m->faces.end(); iter++)
        if((*iter)->getId() == idFace) {
            f = *iter;
            return f;
        }
    return NULL;
}

HalfEdge* Scene::getHEd(Face *f, int idVertex1, int idVertex2) {
    HalfEdge *h;
    std::list<Loop*>::iterator iter;
    for(iter = f->loops.begin(); iter != f->loops.end(); iter++)
    {
        h = (*iter)->hed;
        do {
            if(h->origin->getId() == idVertex1 &&
               h->next->origin->getId() == idVertex2)
                return h;
        }while((h = h->next) != (*iter)->hed);
    }
    return NULL;
}

Loop* Scene::getLoop(int id) {
    std::list<Mesh*>::iterator mIter;
    for(mIter = meshes.begin(); mIter != meshes.end(); mIter++){
        std::list<Face*>::iterator fIter;
        for(fIter = (*mIter)->faces.begin(); fIter != (*mIter)->faces.end(); fIter++) {
            std::list<Loop*>::iterator lIter;
            for (lIter = (*fIter)->loops.begin(); lIter != (*fIter)->loops.end(); lIter++) 
                if((*lIter)->id == id) 
                    return *lIter;
        }
    }
}

HalfEdge* Scene::getHEd(Face *f, int idVertex1) {
    HalfEdge *h;
    std::list<Loop*>::iterator iter;
    for(iter = f->loops.begin(); iter != f->loops.end(); iter++)
    {
        h = (*iter)->hed;
        do {
            if(h->origin->getId() == idVertex1)
                return h;
        }while((h = h->next) != (*iter)->hed);
    }
    return NULL;
}

void Scene::mvfs(float x, float y, float z) {
    Mesh *m;
    Face *f;
    Loop *l;
    Vertex *v;
    HalfEdge *he;


    m = new Mesh(Scene::numMeshes++);
    std::cout << "criado mesh: " << m->id << std::endl;
    f = new Face(m);
    std::cout << "criada face: " << f->id << std::endl;
    l = new Loop(f);
    v = new Vertex(x, y, z, m, Scene::numVertices++);
    std::cout << "criado vertex: " << v->id << std::endl;
    he = new HalfEdge;

    f->outter = l;
    l->hed = he;
    he->loop = l;
    he->next = he->prev = he;
    he->origin = v;
    he->edge = NULL;
    //v->hed = he;
    meshes.push_back(m);
    updateBoundingBox();
}

void Scene::lmev(HalfEdge *he1, HalfEdge *he2, float x,
                float y, float z)
{
    HalfEdge *he;
    Vertex *v = new Vertex(x, y, z, he1->loop->face->solid, Scene::numVertices++);
    Edge *e = new Edge(he1->loop->face->solid);

    he = he1;
    while (he1 != he2) {
        he->origin = v;
        he = he->mate()->next;
    }
    addhe(e, he2->origin, he1, PLUS);
    addhe(e, v, he2, MINUS);

    v->hed = he2->prev;
    he2->origin->hed = he2;
    
    updateBoundingBox();
}

void Scene::lmef(HalfEdge *h1, HalfEdge *h2) {
    Face *f;
    Loop *l;
    Edge *e;
    HalfEdge *he, *nhe1, *nhe2, *temp;

    f = new Face(h1->loop->face->solid);
    l = new Loop(f);
    e = new Edge(h1->loop->face->solid);
    f->outter = l;

    he = h1;
    while(he != h2) {
        he->loop = l;
        he = he->next;
    }

    nhe1 = addhe(e, h2->origin, h1, PLUS);
    nhe2 = addhe(e, h1->origin, h2, MINUS);

    nhe1->prev->next = nhe2;
    nhe2->prev->next = nhe1;
    temp = nhe1->prev;
    nhe1->prev = nhe2->prev;
    nhe2->prev = temp;

    l->hed = nhe1;
    h2->loop->hed = nhe2;

    l->setNormal();
}

bool Scene::mev(int idSolid, int idFace1, int idFace2, int idVertex1,
                int idVertex2, int idVertex3, float x,
                float y, float z)
{
    Mesh *s;
    Face *f1, *f2;
    HalfEdge *he1, *he2;

    if((s = getSolid(idSolid)) == NULL)
        return false;
    if((f1 = getFace(s, idFace1)) == NULL)
        return false;
    if((f2 = getFace(s, idFace2)) == NULL)
        return false;
    if((he1 = getHEd(f1, idVertex1, idVertex2)) == NULL)
        return false;
    if((he2 = getHEd(f2, idVertex1, idVertex3)) == NULL)
        return false;
    lmev(he1, he2, x, y, z);
    return true;
}

bool Scene::smev(int idSolid, int idFace, int idVertex1, float x, float y, float z) {
    Mesh *s;
    Face *f;
    HalfEdge *he;

    if((s = getSolid(idSolid)) == NULL)
        return false;
    if((f = getFace(s, idFace)) == NULL)
        return false;
    if((he = getHEd(f, idVertex1)) == NULL)
        return false;

    lmev(he, he, x, y, z);
    return true;
}

bool Scene::mef(int idSolid, int idFace, int idVertex1, int idVertex2, int idVertex3, int idVertex4) {
    Mesh *s;
    Face *f;
    HalfEdge *he1, *he2;

    if((s = getSolid(idSolid)) == NULL)
        return false;
    if((f = getFace(s, idFace)) == NULL)
        return false;
    if((he1 = getHEd(f, idVertex1, idVertex2)) == NULL)
        return false;
    if((he2 = getHEd(f, idVertex3, idVertex4)) == NULL)
        return false;

    lmef(he1, he2);
    return true;
}

bool Scene::smef(int idSolid, int idFace, int idVertex1, int idVertex2) {
    Mesh *s;
    Face *f;
    HalfEdge *he1, *he2;

    if((s = getSolid(idSolid)) == NULL)
        return false;
    if((f = getFace(s, idFace)) == NULL)
        return false;
    if((he1 = getHEd(f, idVertex1)) == NULL)
        return false;

    //if((he2 = getHEd(f, idVertex3, idVertex2)) == NULL)
    //    return false;
    he2 = he1;
    if(he2->origin->getId() != idVertex2)
        do {
            he2 = he2->next;
            if (he2 == he1)
                return false;
        } while(he2->origin->getId() != idVertex2);

    lmef(he1, he2);
    return true;
}

void Scene::updateBoundingBox() {
    std::list<Mesh*>::iterator mIter = meshes.begin();
    this->bbox = (*mIter)->bb;
    mIter++;
    for(; mIter != meshes.end(); mIter++) {
        if((*mIter)->bb.pMin.x < this->bbox.pMin.x)
            this->bbox.pMin.x = (*mIter)->bb.pMin.x;
        if((*mIter)->bb.pMax.x > this->bbox.pMax.x)
            this->bbox.pMax.x = (*mIter)->bb.pMax.x;

        if((*mIter)->bb.pMin.y < this->bbox.pMin.y)
            this->bbox.pMin.y = (*mIter)->bb.pMin.y;
        if((*mIter)->bb.pMax.y > this->bbox.pMax.y)
            this->bbox.pMax.y = (*mIter)->bb.pMax.y;

        if((*mIter)->bb.pMin.y < this->bbox.pMin.y)
            this->bbox.pMin.y = (*mIter)->bb.pMin.y;
        if((*mIter)->bb.pMax.y > this->bbox.pMax.y)
            this->bbox.pMax.y = (*mIter)->bb.pMax.y;
    }
}
