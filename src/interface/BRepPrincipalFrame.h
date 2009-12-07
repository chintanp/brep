#ifndef __BRepPrincipalFrame__
#define __BRepPrincipalFrame__

/**
@file
Subclass of PrincipalFrame, which is generated by wxFormBuilder.
*/

#include "PrincipalFrame.h"
#include "dialog/BRepSweeping_Dialog.h"
#include "wx/wx.h"

/** Implementing PrincipalFrame */
class BRepPrincipalFrame : public PrincipalFrame
{
protected:
	// Handlers for PrincipalFrame events.
	void newModel( wxCommandEvent& event );
	void quit( wxCommandEvent& event );
	void about( wxCommandEvent& event );
	void openModel( wxCommandEvent& event );
	void saveModel( wxCommandEvent& event );
	void zoomIn( wxCommandEvent& event );
	void zoomOut( wxCommandEvent& event );
    void vertexMode( wxCommandEvent& event );
    void edgeMode( wxCommandEvent& event );
    void faceMode( wxCommandEvent& event );
    void meshMode( wxCommandEvent& event );
    void onSelectMode( wxNotebookEvent& event );
    void add_Corner( wxCommandEvent& event );
    void add_Cylinder( wxCommandEvent& event );
    void add_Sphere( wxCommandEvent& event );
    void add_Cube( wxCommandEvent& event );
    void add_Circle( wxCommandEvent& event );
    void add_Line( wxCommandEvent& event );
    void doneDrawMode( wxCommandEvent& event );
    void sweeping( wxCommandEvent& event );
    void fit( wxCommandEvent& event );
    void drawR2D2( wxCommandEvent& event );
public:
	/** Constructor */
	BRepPrincipalFrame( wxWindow* parent );

    void init();
};

#endif // __BRepPrincipalFrame__
