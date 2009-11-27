#include "PrincipalApp.h"

IMPLEMENT_APP(PrincipalApp);

bool PrincipalApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	BRepPrincipalFrame* Frame = new BRepPrincipalFrame(0);
    	Frame->Show();
        Frame->init();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
