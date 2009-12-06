#include "BRepSweeping_Dialog.h"

BRepSweeping_Dialog::BRepSweeping_Dialog( wxWindow* parent )
:
Sweeping_Dialog( parent )
{

}

void BRepSweeping_Dialog::sweeping( wxCommandEvent& event )
{
    bool error=0;

    if(!sweepingX_textCtrl->GetLineText(0).ToDouble(&posX)) { sweepingX_textCtrl->Clear(); error=1; }
    if(!sweepingY_textCtrl->GetLineText(0).ToDouble(&posY)) { sweepingY_textCtrl->Clear(); error=1; }
    if(!sweepingZ_textCtrl->GetLineText(0).ToDouble(&posZ)) { sweepingZ_textCtrl->Clear(); error=1; }

    if(!error) {
        sweepingX_textCtrl->Clear();
        sweepingY_textCtrl->Clear();
        sweepingZ_textCtrl->Clear();
        event.Skip();
    }
    else
        wxMessageBox( _("Invalid Parameters!"), _("Error"), wxOK | wxICON_EXCLAMATION);
}

float BRepSweeping_Dialog::getX()
{
    return posX;
}

float BRepSweeping_Dialog::getY()
{
    return posY;
}

float BRepSweeping_Dialog::getZ()
{
    return posZ;
}

