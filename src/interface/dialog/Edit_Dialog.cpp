///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 29 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Edit_Dialog.h"

///////////////////////////////////////////////////////////////////////////

BEGIN_EVENT_TABLE( Edit_Dialog, wxDialog )
	EVT_BUTTON( wxID_OK, Edit_Dialog::_wxFB_sendData )
END_EVENT_TABLE()

Edit_Dialog::Edit_Dialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	sweeping_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxGridBagSizer* gbSizer3;
	gbSizer3 = new wxGridBagSizer( 0, 0 );
	gbSizer3->SetFlexibleDirection( wxBOTH );
	gbSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	editX_staticText = new wxStaticText( sweeping_panel, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	editX_staticText->Wrap( -1 );
	gbSizer3->Add( editX_staticText, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	editX_textCtrl = new wxTextCtrl( sweeping_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( editX_textCtrl, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	editY_staticText = new wxStaticText( sweeping_panel, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	editY_staticText->Wrap( -1 );
	gbSizer3->Add( editY_staticText, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	editY_textCtrl = new wxTextCtrl( sweeping_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( editY_textCtrl, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	editZ_staticText = new wxStaticText( sweeping_panel, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	editZ_staticText->Wrap( -1 );
	gbSizer3->Add( editZ_staticText, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	editZ_textCtrl = new wxTextCtrl( sweeping_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( editZ_textCtrl, wxGBPosition( 0, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	bSizer7->Add( gbSizer3, 1, wxEXPAND, 5 );

	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( sweeping_panel, wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( sweeping_panel, wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();
	bSizer7->Add( m_sdbSizer, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	sweeping_panel->SetSizer( bSizer7 );
	sweeping_panel->Layout();
	bSizer7->Fit( sweeping_panel );
	bSizer->Add( sweeping_panel, 1, wxEXPAND | wxALL, 5 );

	this->SetSizer( bSizer );
	this->Layout();
}

Edit_Dialog::~Edit_Dialog()
{
}

