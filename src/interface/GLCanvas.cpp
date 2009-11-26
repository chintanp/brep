#include "GLCanvas.h"
#include <iostream>

BEGIN_EVENT_TABLE(GLCanvas, wxGLCanvas)
  EVT_SIZE( GLCanvas::onSize )
  EVT_PAINT( GLCanvas::onPaint )
  EVT_ERASE_BACKGROUND( GLCanvas::onEraseBackground )
  EVT_ENTER_WINDOW( GLCanvas::onEnterWindow )
  EVT_LEFT_UP( GLCanvas::onMouseLeftUp )
  EVT_MOTION( GLCanvas::onMouseMove )
  EVT_MOUSEWHEEL( GLCanvas::onMouseWheel )
END_EVENT_TABLE()



GLCanvas::GLCanvas(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name, int* attribList) :
wxGLCanvas(parent, id, pos, size, style, name,  attribList)
{
   glContext = new wxGLContext(this);
}

GLCanvas::~GLCanvas()
{
    delete glContext;
    glContext = NULL;
}

void GLCanvas::init()
{
    //v0, f0, s0
    scene.mvfs(-0.5, -0.5, 0.5);
    //v1
    scene.smev(0, 0, 0, 0.5, -0.5, 0.5);
    //v2
    scene.smev(0, 0, 1, 0.5, 0.5, 0.5);
    //v3
    scene.smev(0, 0, 2, -0.5, 0.5, 0.5);
    //f1 -> front
    scene.smef(0, 0, 3, 0);
    if(!scene.smev(0, 0, 1, 0.5, -0.5, -0.5))
        std::cout << "falhou em criar vertice 4" << std::endl;
    if(!scene.smev(0, 0, 2, 0.5, 0.5, -0.5))
       std::cout << "falhou em criar vertice 5" << std::endl;
    if(!scene.smef(0, 0, 4, 5))
        std::cout << "falhou em criar a face" << std::endl;
    //scene.mef(0, 1, 1, 4, 2, 3);
    //scene.smef(0, 1, 1, 3);
    //v4
    //scene.smev(0, 1, 0, -0.5, -0.5, -0.5);
    //v5
    //scene.smev(0, 1, 1, 0.5,- 0.5, -0.5);
    //v6
    //scene.smev(0, 1, 2, 0.5, 0.5, -0.5);
    //v7
    //scene.smev(0, 1, 3, -0.5, 0.5, -0.5);
    //f2 -> bot
    //scene.smef(0, 1, 6, 5);
    //f3 -> right
    //scene.smef(0, 2, 5, 6);
    //f4 -> 
    //scene.smef(0, 3, 6, 7);
    std::cout << "numero de faces: " << Scene::numFaces << std::endl;
    
/*
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glEnable(GL_TEXTURE_2D);
    //Inicialização do viewport
    int w, h;
    GetClientSize(&w, &h);

    glViewport(0, 0, (GLint) w , (GLint) h );
    //renderer.setImgSize(w, h);

    glGenTextures(1, &texID);
    glBindTexture(GL_TEXTURE_2D, texID);
*/

    glClearColor(1.0, 1.0, 1.0, 1.0);
    glEnable( GL_DEPTH_TEST );
    glClearDepth(1.0f);
    glDepthFunc(GL_LEQUAL);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

    glEnable( GL_LINE_SMOOTH );
    glLineWidth( 2.0 );
    glEnable( GL_POLYGON_SMOOTH );
    glColor3f( 0.75, 0.75, 0.75 );
    glEnable(GL_POLYGON_OFFSET_FILL);

    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
    
    glFrontFace(GL_CW);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    //Inicialização da luz
    GLfloat lambient_model[4] = { 0.4, 0.4, 0.4, 1.0};
    GLfloat a[4] = { 0.5, 0.5, 0.5, 1.0};
    GLfloat d[4] = { 0.8, 0.8, 0.8, 0.80};
    GLfloat s[4] = { 1.0, 1.0, 1.0, 1.0};
    GLfloat p[4] = { 100.0, 100.0, 120.0, 0.0};

    glLightfv(GL_LIGHT0, GL_AMBIENT, a);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, d);
    glLightfv(GL_LIGHT0, GL_SPECULAR, s);
    glLightfv(GL_LIGHT0, GL_POSITION, p);
    glEnable(GL_LIGHT0);


    glEnable(GL_LIGHT_MODEL_AMBIENT);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lambient_model);



    //Inicialização do viewport
    int w, h;
    GetClientSize(&w, &h);

    glViewport(0, 0, (GLint) w , (GLint) h );

}

void GLCanvas::render()
{
    SetCurrent(*glContext);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    renderBackground(); 
    
    glTranslatef(-0.5, 0, 0);
    if(!scene.isEmpty()) {
        glRotatef(-45, 0, 1, 0);
        scene.render();
    }

    //glFlush();
    SwapBuffers();
    Refresh();
}

void GLCanvas::renderBackground()
{
    // Save color, shading, fill mode, culling, matrixe mode, so it can be restored later
    glPushAttrib( GL_CURRENT_BIT | GL_LIGHTING_BIT | GL_POLYGON_BIT | GL_TRANSFORM_BIT | GL_DEPTH_BUFFER_BIT );

    // To guarantee we can fill a polygon
    glPolygonMode( GL_FRONT, GL_FILL );
    glDisable( GL_LIGHTING );
    glDisable( GL_CULL_FACE );

    // To guarantee we can do gradient color
    glShadeModel( GL_SMOOTH );

    // Make it be rendered always below objects
    glDisable( GL_DEPTH_TEST );

    // Save modelview matrix and reset current to identity
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    // Save projection matrix and reset current to identity
    glMatrixMode( GL_PROJECTION );
    glPushMatrix();
    glLoadIdentity();

    // Draw the gradient background ( degradê )
    glBegin(GL_QUADS);
        glColor3f(0.6431,0.5843,0.8705);
        glVertex2f(-1.0,-1.0);
        glVertex2f(1.0,-1.0);
        glColor3f(0.0862,0.0,0.4039);
        glVertex2f(1.0,1.0);
        glVertex2f(-1.0,1.0);
    glEnd();

    // Restore projection matrix
    glPopMatrix();

    // Restore modelview matrix
    glMatrixMode( GL_MODELVIEW );
    glPopMatrix();

    // Restore states changed
    glPopAttrib();
}

void GLCanvas::clear() {

    Refresh();
}

void GLCanvas::onMouseLeftUp(wxMouseEvent &event) {
    int w, h;
    GetClientSize(&w, &h);
    wxPoint mouse;
    event.GetPosition(&mouse.x, &mouse.y);
}

void GLCanvas::onMouseMove(wxMouseEvent &event)
{
    wxPoint mouse;
    event.GetPosition( &mouse.x, &mouse.y );

    wxPoint windowSize;
    GetClientSize( &windowSize.x, &windowSize.y );
    //static wxString msg;

    //if ( event.Dragging() )
    //{
        //camera.updateRotatation(mouse.x,mouse.y, windowSize.x, windowSize.y);
        //static std::string temp;
        //temp = manipulator->update( mouse.x, mouse.y, windowSize.x, windowSize.y );
        //msg = wxString::FromAscii( temp.c_str() );
        //parent->SetStatusText( msg, 1 );
    //}
    //else
    //{
    //    msg.Printf(_("Mouse Position: ( %d, %d )"), mouse.x, mouse.y );
    //    parent->SetStatusText( msg, 1 );
    //}

    Refresh();
    event.Skip();
}

void GLCanvas::onMouseWheel(wxMouseEvent& event)
{
    //if ( event.ControlDown() )
    //{
    //    int wheel = event.GetWheelRotation();
    //    if ( wheel > 0 )
    //        camera.zoom( 0.8 );
    //    else
    //        camera.zoom( 1.2 );
    //}
}

void GLCanvas::onEnterWindow(wxMouseEvent& event)
{
    SetFocus();
}

void GLCanvas::onPaint( wxPaintEvent& event )
{
    wxPaintDC dc(this);
    render();
}

void GLCanvas::onSize(wxSizeEvent& event)
{
    // Necessary to update the context in some plataforms
    wxGLCanvas::OnSize(event);

    // Reset the viewport
    int w, h;
    GetClientSize(&w, &h);

    glViewport(0, 0, (GLint) w , (GLint) h );
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    //FIXME passando na ordem inversa, funcionou então
    //não foi modificado
    //renderer.setImgSize(h, w);
    // Redraw window
    Refresh();
}

void GLCanvas::onEraseBackground(wxEraseEvent& event)
{
  // Just to get rid of flickering.
}
