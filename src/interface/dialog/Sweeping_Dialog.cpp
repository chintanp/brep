///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 29 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "../PrincipalFrame.h"
#include "Sweeping_Dialog.h"

///////////////////////////////////////////////////////////////////////////

BEGIN_EVENT_TABLE( Sweeping_Dialog, wxDialog )
	EVT_BUTTON( wxID_OK, Sweeping_Dialog::_wxFB_sweeping )
END_EVENT_TABLE()

Sweeping_Dialog::Sweeping_Dialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
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

	sweepingX_staticText = new wxStaticText( sweeping_panel, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	sweepingX_staticText->Wrap( -1 );
	gbSizer3->Add( sweepingX_staticText, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	sweepingX_textCtrl = new wxTextCtrl( sweeping_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( sweepingX_textCtrl, wxGBPosition( 0, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	sweepingY_staticText = new wxStaticText( sweeping_panel, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	sweepingY_staticText->Wrap( -1 );
	gbSizer3->Add( sweepingY_staticText, wxGBPosition( 0, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	sweepingY_textCtrl = new wxTextCtrl( sweeping_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( sweepingY_textCtrl, wxGBPosition( 0, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	sweepingZ_staticText = new wxStaticText( sweeping_panel, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	sweepingZ_staticText->Wrap( -1 );
	gbSizer3->Add( sweepingZ_staticText, wxGBPosition( 0, 4 ), wxGBSpan( 1, 1 ), wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	sweepingZ_textCtrl = new wxTextCtrl( sweeping_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer3->Add( sweepingZ_textCtrl, wxGBPosition( 0, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	bSizer7->Add( gbSizer3, 1, wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( sweeping_panel, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( sweeping_panel, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	bSizer7->Add( m_sdbSizer1, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	sweeping_panel->SetSizer( bSizer7 );
	sweeping_panel->Layout();
	bSizer7->Fit( sweeping_panel );
	bSizer->Add( sweeping_panel, 1, wxEXPAND | wxALL, 5 );

	this->SetSizer( bSizer );
	this->Layout();
}

Sweeping_Dialog::~Sweeping_Dialog()
{
}

