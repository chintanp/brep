#include "BRepPrincipalFrame.h"

BRepPrincipalFrame::BRepPrincipalFrame( wxWindow* parent )
:
PrincipalFrame( parent )
{

}

void BRepPrincipalFrame::init()
{
    canvas->init();
}

void BRepPrincipalFrame::newModel( wxCommandEvent& event )
{
	// TODO: Implement newModel
}

void BRepPrincipalFrame::quit( wxCommandEvent& event )
{
    Destroy();
}

void BRepPrincipalFrame::about( wxCommandEvent& event )
{
    wxString text = _("");
    text << _("CD BRep Model \n\n")
        << _("By Caio M Rodrigues\n")
		 << _("\t and Daniel N Teixeira\n\n");


	wxMessageDialog dialog(this, text, _("About"));
    dialog.ShowModal();
}

void BRepPrincipalFrame::openModel( wxCommandEvent& event )
{
	// TODO: Implement openModel
}

void BRepPrincipalFrame::saveModel( wxCommandEvent& event )
{
	// TODO: Implement saveModel
}

void BRepPrincipalFrame::zoomIn( wxCommandEvent& event )
{
	// TODO: Implement zoomIn
}

void BRepPrincipalFrame::zoomOut( wxCommandEvent& event )
{
	// TODO: Implement zoomOut
}

void BRepPrincipalFrame::vertexMode( wxCommandEvent& event )
{
	canvas->setVertexSelect();
}

void BRepPrincipalFrame::edgeMode( wxCommandEvent& event )
{
	canvas->setEdgeSelect();
}

void BRepPrincipalFrame::faceMode( wxCommandEvent& event )
{
	canvas->setFaceSelect();
}

void BRepPrincipalFrame::meshMode( wxCommandEvent& event )
{
	canvas->setMeshSelect();
}
