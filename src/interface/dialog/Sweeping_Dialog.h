///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 29 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __Sweeping_Dialog__
#define __Sweeping_Dialog__

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
/// Class Sweeping_Dialog
///////////////////////////////////////////////////////////////////////////////
class Sweeping_Dialog : public wxDialog
{
	DECLARE_EVENT_TABLE()
	private:

		// Private event handlers
		void _wxFB_sweeping( wxCommandEvent& event ){ sweeping( event ); }


	protected:
		wxPanel* sweeping_panel;
		wxStaticText* sweepingX_staticText;
		wxTextCtrl* sweepingX_textCtrl;
		wxStaticText* sweepingY_staticText;
		wxTextCtrl* sweepingY_textCtrl;
		wxStaticText* sweepingZ_staticText;
		wxTextCtrl* sweepingZ_textCtrl;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;

		// Virtual event handlers, overide them in your derived class
		virtual void sweeping( wxCommandEvent& event ){ event.Skip(); }


	public:
		Sweeping_Dialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Sweeping"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 370,100 ), long style = wxDEFAULT_DIALOG_STYLE );
		~Sweeping_Dialog();

};

#endif //__Sweeping_Dialog__
