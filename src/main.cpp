#include <iostream>
#include "Scene.h"

#include "Vertex.h"
#include "HalfEdge.h"
#include "Loop.h"
#include "Face.h"
#include "Mesh.h"
#include "Edge.h"

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
/*
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    //glTranslatef(0.0, -15.0, -16.0);

    Vertex v1(-0.5, -0.5, 0), v2(0.5, -0.5, 0), v3(0.5, 0.5, 0), v4(-0.5, 0.5, 0);
    HalfEdge hed1(v1), hed2(v2), hed3(v3), hed4(v4);
    Edge ed1(&hed1, NULL), ed2(&hed2, NULL), ed3(&hed3, NULL), ed4(&hed4, NULL);
    Face f;
    Loop l1(&hed1, &f);
    f.outter = &l1;
    //Termina inicialização dos vértices
    v1.hed = &hed1;
    v2.hed = &hed2;
    v3.hed = &hed3;
    v4.hed = &hed4;


    //Termina inicialização das halfedges
    hed1.next = &hed2;
    hed1.prev = &hed4;
    hed2.next = &hed3;
    hed2.prev = &hed1;
    hed3.next = &hed4;
    hed3.prev = &hed2;
    hed4.next = &hed1;
    hed4.prev = &hed3;
    hed1.edge = &ed1;
    hed2.edge = &ed2;
    hed3.edge = &ed3;
    hed4.edge = &ed4;

    //TODO MESH
    Mesh m;
    m.vertices.push_back(&v1);
    m.vertices.push_back(&v2);
    m.vertices.push_back(&v3);
    m.vertices.push_back(&v4);

    m.faces.push_back(&f);

    m.edges.push_back(&ed1);
    m.edges.push_back(&ed2);
    m.edges.push_back(&ed3);
    m.edges.push_back(&ed4);

    HalfEdge *h = m.faces.front()->outter->hed;
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    do {
        glVertex3f(h->origin->x, h->origin->y, h->origin->z);
    } while((h = h->next) != m.faces.front()->outter->hed);
    glEnd();

    glutSwapBuffers();
}

void init () {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glShadeModel(GL_SMOOTH);
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);

    glViewport(0, 0, (GLint) w , (GLint) h );
}

int main(int argc, char** argv){


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Brep");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}*/
/*
int main() {
    return 0;
}
*/
