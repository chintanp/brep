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
	EVT_TOOL( ID_VERTEX_MODE_TB, PrincipalFrame::_wxFB_vertexMode )
	EVT_TOOL( ID_EDGE_MODE_TB, PrincipalFrame::_wxFB_edgeMode )
	EVT_TOOL( ID_FACE_MODE_TB, PrincipalFrame::_wxFB_faceMode )
	EVT_TOOL( ID_MESH_MODE_TB, PrincipalFrame::_wxFB_meshMode )
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
	toolBar->AddSeparator();
	toolBar->AddTool( ID_VERTEX_MODE_TB, wxT("Vertex Mode"), wxBitmap( wxT("data/icon/vertex.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Vertex Mode") );
	toolBar->AddTool( ID_EDGE_MODE_TB, wxT("Edge Mode"), wxBitmap( wxT("data/icon/edge.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Edge Mode") );
	toolBar->AddTool( ID_FACE_MODE_TB, wxT("Face Mode"), wxBitmap( wxT("data/icon/face.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Face Mode") );
	toolBar->AddTool( ID_MESH_MODE_TB, wxT("Mesh Model "), wxBitmap( wxT("data/icon/mesh.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_RADIO, wxEmptyString, wxT("Mesh Mode") );
	toolBar->Realize();

	wxBoxSizer* bSizer_Global;
	bSizer_Global = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* sizer_Options;
	sizer_Options = new wxBoxSizer( wxVERTICAL );

	bSizer_Global->Add( sizer_Options, 0, wxEXPAND, 5 );

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
