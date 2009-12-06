///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 29 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __PrincipalFrame__
#define __PrincipalFrame__

#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/gbsizer.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/statbmp.h>
#include <wx/frame.h>



#include "GLCanvas.h"
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class PrincipalFrame
///////////////////////////////////////////////////////////////////////////////
class PrincipalFrame : public wxFrame
{
	DECLARE_EVENT_TABLE()
	private:

		// Private event handlers
		void _wxFB_newModel( wxCommandEvent& event ){ newModel( event ); }
		void _wxFB_quit( wxCommandEvent& event ){ quit( event ); }
		void _wxFB_about( wxCommandEvent& event ){ about( event ); }
		void _wxFB_openModel( wxCommandEvent& event ){ openModel( event ); }
		void _wxFB_saveModel( wxCommandEvent& event ){ saveModel( event ); }
		void _wxFB_zoomIn( wxCommandEvent& event ){ zoomIn( event ); }
		void _wxFB_zoomOut( wxCommandEvent& event ){ zoomOut( event ); }
		void _wxFB_fit( wxCommandEvent& event ){ fit( event ); }
		void _wxFB_vertexMode( wxCommandEvent& event ){ vertexMode( event ); }
		void _wxFB_edgeMode( wxCommandEvent& event ){ edgeMode( event ); }
		void _wxFB_faceMode( wxCommandEvent& event ){ faceMode( event ); }
		void _wxFB_meshMode( wxCommandEvent& event ){ meshMode( event ); }
        void _wxFB_onSelectMode( wxNotebookEvent& event ){ onSelectMode( event ); }
		void _wxFB_add_Corner( wxCommandEvent& event ){ add_Corner( event ); }
		void _wxFB_add_Cylinder( wxCommandEvent& event ){ add_Cylinder( event ); }
		void _wxFB_add_Sphere( wxCommandEvent& event ){ add_Sphere( event ); }
		void _wxFB_sweeping( wxCommandEvent& event ){ sweeping( event ); }
		void _wxFB_add_Cube( wxCommandEvent& event ){ add_Cube( event ); }
		void _wxFB_add_Circle( wxCommandEvent& event ){ add_Circle( event ); }
		void _wxFB_add_Line( wxCommandEvent& event ){ add_Line( event ); }
		void _wxFB_doneDrawMode( wxCommandEvent& event ){ doneDrawMode( event ); }


	protected:
		enum
		{
			ID_NEW_MODEL = 1000,
			ID_QUIT,
			ID_ABOUT,
			ID_NEW_MODEL_TB,
			ID_OPEN_MODEL_TB,
			ID_SAVE_MODEL_TB,
			ID_ZOOM_IN_TB,
			ID_ZOOM_OUT_TB,
			ID_VERTEX_MODE_TB,
			ID_EDGE_MODE_TB,
			ID_FACE_MODE_TB,
			ID_MESH_MODE_TB,
            ID_SELECT_MODE,
			wxID_CORNER,
			wxID_CYLINDER,
			wxID_SPHERE,
			wxID_SWEEPING,
			wxID_CUBE,
			wxID_CIRCLE,
			wxID_LINE,
			wxID_DONE,
			ID_BITMAP,
		};

		wxStatusBar* statusBar;
		wxMenuBar* menubar;
		wxMenu* file_menu;
		wxMenu* help_menu;
		wxToolBar* toolBar;
		wxNotebook* editMode_notebook;
		wxPanel* edit_panel;
		wxBitmapButton* corner_bpButton;
		wxBitmapButton* cylinder_bpButton;
		wxBitmapButton* sphere_bpButton;
		wxButton* sweeping_button;
		wxBitmapButton* cube_bpButton;
		wxStaticText* cube_staticText;
		wxStaticText* corner_staticText;
		wxStaticText* cylinder_staticText;
		wxStaticText* sphere_staticText;
		wxPanel* drawMode_panel;
		wxBitmapButton* circle_bpButton;
		wxBitmapButton* line_bpButton;
		wxButton* done_button;
		wxStaticText* line_staticText;
		wxStaticText* line_staticText2;

		// Virtual event handlers, overide them in your derived class
		virtual void newModel( wxCommandEvent& event ){ event.Skip(); }
		virtual void quit( wxCommandEvent& event ){ event.Skip(); }
		virtual void about( wxCommandEvent& event ){ event.Skip(); }
		virtual void openModel( wxCommandEvent& event ){ event.Skip(); }
		virtual void saveModel( wxCommandEvent& event ){ event.Skip(); }
		virtual void zoomIn( wxCommandEvent& event ){ event.Skip(); }
		virtual void zoomOut( wxCommandEvent& event ){ event.Skip(); }
		virtual void fit( wxCommandEvent& event ){ event.Skip(); }
		virtual void vertexMode( wxCommandEvent& event ){ event.Skip(); }
		virtual void edgeMode( wxCommandEvent& event ){ event.Skip(); }
		virtual void faceMode( wxCommandEvent& event ){ event.Skip(); }
		virtual void meshMode( wxCommandEvent& event ){ event.Skip(); }
        virtual void onSelectMode( wxNotebookEvent& event ){ event.Skip(); }
		virtual void add_Corner( wxCommandEvent& event ){ event.Skip(); }
		virtual void add_Cylinder( wxCommandEvent& event ){ event.Skip(); }
		virtual void add_Sphere( wxCommandEvent& event ){ event.Skip(); }
		virtual void sweeping( wxCommandEvent& event ){ event.Skip(); }
		virtual void add_Cube( wxCommandEvent& event ){ event.Skip(); }
		virtual void add_Circle( wxCommandEvent& event ){ event.Skip(); }
		virtual void add_Line( wxCommandEvent& event ){ event.Skip(); }
		virtual void doneDrawMode( wxCommandEvent& event ){ event.Skip(); }

        GLCanvas* canvas;

	public:
		PrincipalFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("CD BREP Modeler"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,730 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~PrincipalFrame();

};

#endif //__PrincipalFrame__
