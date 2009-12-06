#include "BRepEdit_Dialog.h"

BRepEdit_Dialog::BRepEdit_Dialog( wxWindow* parent )
:
Edit_Dialog( parent )
{

}

void BRepEdit_Dialog::sendData( wxCommandEvent& event )
{
    bool error=0;

    if(!editX_textCtrl->GetLineText(0).ToDouble(&posX)) { editX_textCtrl->Clear(); error=1; }
    if(!editY_textCtrl->GetLineText(0).ToDouble(&posY)) { editY_textCtrl->Clear(); error=1; }
    if(!editZ_textCtrl->GetLineText(0).ToDouble(&posZ)) { editZ_textCtrl->Clear(); error=1; }

    if(!error) {
        editX_textCtrl->Clear();
        editY_textCtrl->Clear();
        editZ_textCtrl->Clear();
        event.Skip();
    }
    else
        wxMessageBox( _("Invalid Parameters!"), _("Error"), wxOK | wxICON_EXCLAMATION);
}

float BRepEdit_Dialog::getX()
{
    return posX;
}

float BRepEdit_Dialog::getY()
{
    return posY;
}

float BRepEdit_Dialog::getZ()
{
    return posZ;
}
