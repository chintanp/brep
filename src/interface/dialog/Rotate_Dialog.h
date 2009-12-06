///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 29 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __Rotate_Dialog__
#define __Rotate_Dialog__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/gbsizer.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class Rotate_Dialog
///////////////////////////////////////////////////////////////////////////////
class Rotate_Dialog : public wxDialog
{
	DECLARE_EVENT_TABLE()
	private:

		// Private event handlers
		void _wxFB_sendData( wxCommandEvent& event ){ sendData( event ); }


	protected:
		wxPanel* sweeping_panel;
		wxStaticText* editX_staticText;
		wxTextCtrl* editX_textCtrl;
		wxStaticText* editY_staticText;
		wxTextCtrl* editY_textCtrl;
		wxStaticText* editZ_staticText;
		wxTextCtrl* editZ_textCtrl;
		wxStaticText* angle_staticText;
		wxTextCtrl* angle_textCtrl;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;

		// Virtual event handlers, overide them in your derived class
		virtual void sendData( wxCommandEvent& event ){ event.Skip(); }


	public:
		Rotate_Dialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Edit"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 370,120 ), long style = wxDEFAULT_DIALOG_STYLE );
		~Rotate_Dialog();

};

#endif //__Rotate_Dialog__

