///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 29 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "PrincipalFrame.h"

///////////////////////////////////////////////////////////////////////////

BEGIN_EVENT_TABLE( PrincipalFrame, wxFrame )
	EVT_MENU( ID_NEW_MODEL, PrincipalFrame::_wxFB_newModel )
	EVT_MENU( ID_QUIT, PrincipalFrame::_wxFB_quit )
	EVT_MENU( ID_ABOUT, PrincipalFrame::_wxFB_about )
	EVT_TOOL( ID_NEW_MODEL_TB, PrincipalFrame::_wxFB_newModel )
	EVT_TOOL( ID_OPEN_MODEL_TB, PrincipalFrame::_wxFB_openModel )
	EVT_TOOL( ID_SAVE_MODEL_TB, PrincipalFrame::_wxFB_saveModel )
	EVT_TOOL( ID_ZOOM_IN_TB, PrincipalFrame::_wxFB_zoomIn )
	EVT_TOOL( ID_ZOOM_OUT_TB, PrincipalFrame::_wxFB_zoomOut )
	EVT_TOOL( ID_ZOOM_OUT_TB, PrincipalFrame::_wxFB_fit )
	EVT_TOOL( ID_VERTEX_MODE_TB, PrincipalFrame::_wxFB_vertexMode )
	EVT_TOOL( ID_EDGE_MODE_TB, PrincipalFrame::_wxFB_edgeMode )
	EVT_TOOL( ID_FACE_MODE_TB, PrincipalFrame::_wxFB_faceMode )
	EVT_TOOL( ID_MESH_MODE_TB, PrincipalFrame::_wxFB_meshMode )
	EVT_BUTTON( wxID_CORNER, PrincipalFrame::_wxFB_add_Corner )
	EVT_BUTTON( wxID_CYLINDER, PrincipalFrame::_wxFB_add_Cylinder )
	EVT_BUTTON( wxID_SPHERE, PrincipalFrame::_wxFB_add_Sphere )
	EVT_BUTTON( wxID_SWEEPING, PrincipalFrame::_wxFB_sweeping )
	EVT_BUTTON( wxID_CUBE, PrincipalFrame::_wxFB_add_Cube )
	EVT_BUTTON( wxID_CIRCLE, PrincipalFrame::_wxFB_add_Circle )
	EVT_BUTTON( wxID_LINE, PrincipalFrame::_wxFB_add_Line )
	EVT_BUTTON( wxID_DONE, PrincipalFrame::_wxFB_doneDrawMode )
END_EVENT_TABLE()

PrincipalFrame::PrincipalFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 900,730 ), wxDefaultSize );

	statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	menubar = new wxMenuBar( 0 );
	file_menu = new wxMenu();
	wxMenuItem* new_menuItem;
	new_menuItem = new wxMenuItem( file_menu, ID_NEW_MODEL, wxString( wxT("New") ) + wxT('\t') + wxT("Ctrl+N"), wxT("New Model"), wxITEM_NORMAL );
	file_menu->Append( new_menuItem );

	wxMenuItem* quit_menuItem;
	quit_menuItem = new wxMenuItem( file_menu, ID_QUIT, wxString( wxT("Quit") ) + wxT('\t') + wxT("Ctrl+Q"), wxT("Quit program"), wxITEM_NORMAL );
	file_menu->Append( quit_menuItem );

	menubar->Append( file_menu, wxT("File") );

	help_menu = new wxMenu();
	wxMenuItem* about_menuItem;
	about_menuItem = new wxMenuItem( help_menu, ID_ABOUT, wxString( wxT("About") ) + wxT('\t') + wxT("F1"), wxT("Show about dialog"), wxITEM_NORMAL );
	help_menu->Append( about_menuItem );

	menubar->Append( help_menu, wxT("Help") );

	this->SetMenuBar( menubar );

	toolBar = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY );
	toolBar->AddTool( ID_NEW_MODEL_TB, wxT("New Model"), wxBitmap( wxT("data/icon/new.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("New Model") );
	toolBar->AddTool( ID_OPEN_MODEL_TB, wxT("Open Model"), wxBitmap( wxT("data/icon/open.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("Open Model") );
	toolBar->AddTool( ID_SAVE_MODEL_TB, wxT("Save Model"), wxBitmap( wxT("data/icon/save.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("Save model") );
	toolBar->AddSeparator();
	toolBar->AddTool( ID_ZOOM_IN_TB, wxT("Zoom In"), wxBitmap( wxT("data/icon/zoom_in.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("Zoom In") );
	toolBar->AddTool( ID_ZOOM_OUT_TB, wxT("Zoom Out"), wxBitmap( wxT("data/icon/zoom_out.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("Zoom Out") );
	toolBar->AddTool( ID_ZOOM_OUT_TB, wxT("Fit"), wxBitmap( wxT("data/icon/zoom.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("Fit") );
	toolBar->AddSeparator();
	toolBar->AddTool( ID_VERTEX_MODE_TB, wxT("Vertex Mode"), wxBitmap( wxT("data/icon/vertex.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Vertex Mode") );
	toolBar->AddTool( ID_EDGE_MODE_TB, wxT("Edge Mode"), wxBitmap( wxT("data/icon/edge.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Edge Mode") );
	toolBar->AddTool( ID_FACE_MODE_TB, wxT("Face Mode"), wxBitmap( wxT("data/icon/face.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Face Mode") );
	toolBar->AddTool( ID_MESH_MODE_TB, wxT("Mesh Model "), wxBitmap( wxT("data/icon/mesh.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Mesh Mode") );
	toolBar->AddSeparator();
	toolBar->Realize();

	wxBoxSizer* bSizer_Global;
	bSizer_Global = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	editMode_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize( 170,-1 ), 0 );
	edit_panel = new wxPanel( editMode_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	corner_bpButton = new wxBitmapButton( edit_panel, wxID_CORNER, wxBitmap( wxT("data/icon/corner.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	gbSizer1->Add( corner_bpButton, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	cylinder_bpButton = new wxBitmapButton( edit_panel, wxID_CYLINDER, wxBitmap( wxT("data/icon/cylinder.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	gbSizer1->Add( cylinder_bpButton, wxGBPosition( 2, 1 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	sphere_bpButton = new wxBitmapButton( edit_panel, wxID_SPHERE, wxBitmap( wxT("data/icon/sphere.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	gbSizer1->Add( sphere_bpButton, wxGBPosition( 3, 1 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	sweeping_button = new wxButton( edit_panel, wxID_SWEEPING, wxT("Sweeping"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( sweeping_button, wxGBPosition( 5, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	cube_bpButton = new wxBitmapButton( edit_panel, wxID_CUBE, wxBitmap( wxT("data/icon/cube.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	gbSizer1->Add( cube_bpButton, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	cube_staticText = new wxStaticText( edit_panel, wxID_ANY, wxT("Cube:"), wxDefaultPosition, wxDefaultSize, 0 );
	cube_staticText->Wrap( -1 );
	gbSizer1->Add( cube_staticText, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	corner_staticText = new wxStaticText( edit_panel, wxID_ANY, wxT("Corner:"), wxDefaultPosition, wxDefaultSize, 0 );
	corner_staticText->Wrap( -1 );
	gbSizer1->Add( corner_staticText, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	cylinder_staticText = new wxStaticText( edit_panel, wxID_ANY, wxT("Cylinder:"), wxDefaultPosition, wxDefaultSize, 0 );
	cylinder_staticText->Wrap( -1 );
	gbSizer1->Add( cylinder_staticText, wxGBPosition( 2, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	sphere_staticText = new wxStaticText( edit_panel, wxID_ANY, wxT("Sphere:"), wxDefaultPosition, wxDefaultSize, 0 );
	sphere_staticText->Wrap( -1 );
	gbSizer1->Add( sphere_staticText, wxGBPosition( 3, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	bSizer4->Add( gbSizer1, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	edit_panel->SetSizer( bSizer4 );
	edit_panel->Layout();
	bSizer4->Fit( edit_panel );
	editMode_notebook->AddPage( edit_panel, wxT("Edit Mode"), true );
	drawMode_panel = new wxPanel( editMode_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	wxGridBagSizer* gbSizer11;
	gbSizer11 = new wxGridBagSizer( 0, 0 );
	gbSizer11->SetFlexibleDirection( wxBOTH );
	gbSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	circle_bpButton = new wxBitmapButton( drawMode_panel, wxID_CIRCLE, wxBitmap( wxT("data/icon/face.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	gbSizer11->Add( circle_bpButton, wxGBPosition( 1, 1 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	line_bpButton = new wxBitmapButton( drawMode_panel, wxID_LINE, wxBitmap( wxT("data/icon/edge.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	gbSizer11->Add( line_bpButton, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	done_button = new wxButton( drawMode_panel, wxID_DONE, wxT("Done"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer11->Add( done_button, wxGBPosition( 5, 1 ), wxGBSpan( 1, 1 ), wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	line_staticText = new wxStaticText( drawMode_panel, wxID_ANY, wxT("Line:"), wxDefaultPosition, wxDefaultSize, 0 );
	line_staticText->Wrap( -1 );
	gbSizer11->Add( line_staticText, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	line_staticText2 = new wxStaticText( drawMode_panel, wxID_ANY, wxT("Circle:"), wxDefaultPosition, wxDefaultSize, 0 );
	line_staticText2->Wrap( -1 );
	gbSizer11->Add( line_staticText2, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	bSizer41->Add( gbSizer11, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	drawMode_panel->SetSizer( bSizer41 );
	drawMode_panel->Layout();
	bSizer41->Fit( drawMode_panel );
	editMode_notebook->AddPage( drawMode_panel, wxT("Draw Mode"), false );

	bSizer5->Add( editMode_notebook, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	bSizer_Global->Add( bSizer5, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_Canvas;
	bSizer_Canvas = new wxBoxSizer( wxVERTICAL );

    int args[] = {WX_GL_RGBA, WX_GL_DOUBLEBUFFER, WX_GL_DEPTH_SIZE, 16, 0};
	canvas = new GLCanvas(this,wxID_ANY,wxDefaultPosition,wxDefaultSize,wxFULL_REPAINT_ON_RESIZE | wxSUNKEN_BORDER,_T("ID_CUSTOM1"), args);
	bSizer_Global->Add(canvas, 1, wxEXPAND | wxALL, 5 );

	//bSizer_Canvas->Add( canvas, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	bSizer_Global->Add( bSizer_Canvas, 0, 0, 5 );

	this->SetSizer( bSizer_Global );
	this->Layout();
}

PrincipalFrame::~PrincipalFrame()
{
}
