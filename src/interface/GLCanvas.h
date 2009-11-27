#ifndef _glcanvas_
#define _glcanvas_

#include "wx/wx.h"
#include "wx/glcanvas.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include "../Scene.h"
#include "../Camera.h"

class GLCanvas : public wxGLCanvas
{
    friend class CSGFrame;
public:
	GLCanvas(wxWindow* parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style=0, const wxString& name=_T("GLCanvas"), int* attribList = 0);
    ~GLCanvas();

    void init();
    void render();
    void renderBackground();

    void setRenderSolid();
    void setRenderWireframe();

    void clear();

    int select1, select2;

private:
    void onPaint(wxPaintEvent& event);
    void onSize(wxSizeEvent& event);
    void onEraseBackground(wxEraseEvent& event);
    void onEnterWindow(wxMouseEvent& event);
    void onMouseLeftUp(wxMouseEvent& event);
    void onMouseMove(wxMouseEvent& event);
    void onMouseWheel(wxMouseEvent& event);

    DECLARE_EVENT_TABLE()


private:
    wxGLContext *glContext;
    Scene scene;
    Camera camera;
    //Textura usada para desenhar a cena
    unsigned int texID;
};

#endif
