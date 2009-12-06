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

void BRepPrincipalFrame::onSelectMode( wxNotebookEvent& event) {
    std::cout << "mudando de modo de seleção" << std::endl;
    canvas->switchMode();
    Refresh();
}



void BRepPrincipalFrame::add_Corner( wxCommandEvent& event )
{
    canvas->_addCorner(event);
    Refresh();
}

void BRepPrincipalFrame::add_Cylinder( wxCommandEvent& event )
{
    canvas->_addCylinder(event);
    Refresh();
}

void BRepPrincipalFrame::add_Sphere( wxCommandEvent& event )
{
    canvas->_addSphere(event);
    Refresh();
}

void BRepPrincipalFrame::add_Cube( wxCommandEvent& event )
{
    canvas->_addCube(event);
    Refresh();
}

void BRepPrincipalFrame::add_Circle( wxCommandEvent& event )
{
}

void BRepPrincipalFrame::add_Line( wxCommandEvent& event )
{
    canvas->setStartLineLoop();
}

void BRepPrincipalFrame::doneDrawMode( wxCommandEvent& event )
{
    canvas->doneDrawing();
}

void BRepPrincipalFrame::sweeping( wxCommandEvent& event )
{
    BRepSweeping_Dialog sweep(this);
    if(sweep.ShowModal() == wxID_OK)
        canvas->sweep(sweep.getX(), sweep.getY(), sweep.getZ());
}
