#include "BRepRotate_Dialog.h"

BRepRotate_Dialog::BRepRotate_Dialog( wxWindow* parent )
:
Rotate_Dialog( parent )
{

}

void BRepRotate_Dialog::sendData( wxCommandEvent& event )
{
    bool error=0;

    if(!editX_textCtrl->GetLineText(0).ToDouble(&posX)) { editX_textCtrl->Clear(); error=1; }
    if(!editY_textCtrl->GetLineText(0).ToDouble(&posY)) { editY_textCtrl->Clear(); error=1; }
    if(!editZ_textCtrl->GetLineText(0).ToDouble(&posZ)) { editZ_textCtrl->Clear(); error=1; }
    if(!angle_textCtrl->GetLineText(0).ToDouble(&angle)) { angle_textCtrl->Clear(); error=1; }

    if(!error) {
        editX_textCtrl->Clear();
        editY_textCtrl->Clear();
        editZ_textCtrl->Clear();
        angle_textCtrl->Clear();
        event.Skip();
    }
    else
        wxMessageBox( _("Invalid Parameters!"), _("Error"), wxOK | wxICON_EXCLAMATION);
}

float BRepRotate_Dialog::getX()
{
    return posX;
}

float BRepRotate_Dialog::getY()
{
    return posY;
}

float BRepRotate_Dialog::getZ()
{
    return posZ;
}

float BRepRotate_Dialog::getAngle()
{
    return angle;
}
