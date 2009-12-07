#ifndef PRINCIPALAPP_H
#define PRINCIPALAPP_H

#include <wx/app.h>

#include "PrincipalFrame.h"
#include "BRepPrincipalFrame.h"

using namespace std;

class PrincipalApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif
