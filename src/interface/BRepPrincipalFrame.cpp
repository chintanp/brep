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





void BRepPrincipalFrame::add_Corner( wxCommandEvent& event )
{
    std::cout << "1111111111111111" << std::endl;
    canvas->_addCorner(event);
    Refresh();
}

void BRepPrincipalFrame::add_Cylinder( wxCommandEvent& event )
{
    std::cout << "222222222222222222" << std::endl;
    canvas->_addCylinder(event);
    Refresh();
}

void BRepPrincipalFrame::add_Sphere( wxCommandEvent& event )
{
    std::cout << "33333333333333333333333" << std::endl;
    canvas->_addSphere(event);
    Refresh();
}

void BRepPrincipalFrame::add_Cube( wxCommandEvent& event )
{
    std::cout << "44444444444444444444" << std::endl;
    canvas->_addCube(event);
    Refresh();
}

void BRepPrincipalFrame::add_Circle( wxCommandEvent& event )
{
    std::cout << "asddddddddd 11" << std::endl;
}

void BRepPrincipalFrame::add_Line( wxCommandEvent& event )
{
    std::cout << "asddddddddd 22" << std::endl;
}

void BRepPrincipalFrame::doneDrawMode( wxCommandEvent& event )
{
    std::cout << "asddddddddd 33" << std::endl;
}

void BRepPrincipalFrame::sweeping( wxCommandEvent& event )
{
    std::cout << "asddddddddd 44" << std::endl;
}
