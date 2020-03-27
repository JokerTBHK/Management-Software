
#include "OPT.h"
#include "Database.h"

/*
 * OPT.cpp
 *
 * This file will show all info of a certain ID, and contains functions of editing and deleting.
 *
 * @author: Xiangdong Che
 * Revised: 3/27/20
 *
 */

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

/*
    Initialize all info
*/

Void WeAlumni::OPT::Initialize() {
    UpdateInfo();
}


/*
    This method read from OPT table.
    Then update info to according labels.
*/

Void WeAlumni::OPT::UpdateInfo() {

    String^ command_OPT = "SELECT * FROM OPT WHERE Id = " + Id + ";";
    String^ command_Else = "SELECT Name, Gender, Email, Phone, Wechat FROM Member WHERE Id = " + Id + ";";
    try
    {

        int status = database->ReadData(command_OPT);
        if (status > 0) {
            txt_OPTID->Text = database->dataReader[0]->ToString();
            txt_Status->Text = database->dataReader[1]->ToString();
            txt_MemId->Text = database->dataReader[2]->ToString();
            txt_StfId->Text = database->dataReader[3]->ToString();
            txt_StartDate->Text = database->dataReader[4]->ToString();
            txt_EndDate->Text = database->dataReader[5]->ToString();
            txt_Title->Text = database->dataReader[6]->ToString();
            txt_Position->Text = database->dataReader[7]->ToString();
            txt_CardNumber->Text = database->dataReader[8]->ToString();
            txt_CardStartDate->Text = database->dataReader[9]->ToString();
            txt_CardEndDate->Text = database->dataReader[10]->ToString();
        }

        status = database->ReadData(command_Else);
        if (status > 0) {
            txt_MemName->Text = database->dataReader[0]->ToString();
            txt_Gender->Text = database->dataReader[1]->ToString();
            txt_Email->Text = database->dataReader[2]->ToString();
            txt_Phone->Text = database->dataReader[3]->ToString();
            txt_WeChat->Text = database->dataReader[4]->ToString();
            txt_StfName->Text = database->dataReader[0]->ToString();
        }

    }
    catch (Exception^ e) {
        lbl_error->Visible = true;
    }
    finally {
        database->dataReader->Close();
    }

}

/*
    When click button "Change Info", multiple TextBoxes will be visible to collect changed info.
*/


Void WeAlumni::OPT::ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    lbl_error->Visible = false;
    btn_DeleteAll->Visible = true;
    btn_ChangeConfirm->Visible = true;
    btn_ChangeCancel->Visible = true;
    txt_OPTID->ReadOnly = false;
    txt_Status->ReadOnly = false;
    txt_MemId->ReadOnly = false;
    txt_StfId->ReadOnly = false;
    txt_StartDate->ReadOnly = false;
    txt_EndDate->ReadOnly = false;
    txt_Title->ReadOnly = false;
    txt_Position->ReadOnly = false;
    txt_CardNumber->ReadOnly = false;
    txt_CardEndDate->ReadOnly = false;
    txt_CardStartDate->ReadOnly = false;
}

/*
    When click button "Confirm", this method will trigger a Database update execution.
    If exception occurs, an error message will be shown.
    Then set all TextBoxes and two buttons to read-only.
*/

Void WeAlumni::OPT::ChangeConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ command =
        "UPDATE OPT SET " +
        "Id = " + Convert::ToInt32(txt_OPTID->Text) + ", " +
        "Status = '" + txt_Status->Text + "', " +
        "MemId = '" + txt_MemId->Text + "', "
        "StfId = '" + txt_StfId->Text + "', "
        "StartDate = '" + txt_StartDate->Text + "', " +
        "EndDate = '" + txt_EndDate->Text + "', " +
        "Title = '" + txt_Title->Text + "', " +
        "Position = '" + txt_Position->Text + "', " +
        "CardNumber = '" + txt_CardNumber->Text + "', " +
        "CardStartDate = '" + txt_CardStartDate->Text + "', " +
        "CardEndDate = '" + txt_CardEndDate->Text + "' " +
        "WHERE Id = " + Id + ";";

    int status = -1;
    try {
        status = database->UpdateData(command);
        Id = Convert::ToInt32(txt_OPTID->Text);
        btn_DeleteAll->Visible = false;
        lbl_error->Text = "Update Success";
        lbl_error->Visible = true;
    }
    catch (Exception^ e) {
        lbl_error->Text = "Update Fail";
        lbl_error->Visible = true;
    }

    if (status >= 0) {
        UpdateInfo();
        txt_OPTID->ReadOnly = true;
        txt_Status->ReadOnly = true;
        txt_MemId->ReadOnly = true;
        txt_StfId->ReadOnly = true;
        txt_StartDate->ReadOnly = true;
        txt_EndDate->ReadOnly = true;
        txt_Title->ReadOnly = true;
        txt_Position->ReadOnly = true;
        txt_CardNumber->ReadOnly = true;
        txt_CardEndDate->ReadOnly = true;
        txt_CardStartDate->ReadOnly = true;
        btn_ChangeConfirm->Visible = false;
        btn_ChangeCancel->Visible = false;
    }
}


/*
    Reset the value of TextBoxes. Set all TextBoxes and two buttons to invisible.
*/
Void WeAlumni::OPT::ChangeCancel_Click(System::Object^ sender, System::EventArgs^ e) {
    UpdateInfo();
    btn_DeleteAll->Visible = false;
    btn_ChangeConfirm->Visible = false;
    btn_ChangeCancel->Visible = false;
    txt_OPTID->ReadOnly = true;
    txt_Status->ReadOnly = true;
    txt_MemId->ReadOnly = true;
    txt_StfId->ReadOnly = true;
    txt_StartDate->ReadOnly = true;
    txt_EndDate->ReadOnly = true;
    txt_Title->ReadOnly = true;
    txt_Position->ReadOnly = true;
    txt_CardNumber->ReadOnly = true;
    txt_CardEndDate->ReadOnly = true;
    txt_CardStartDate->ReadOnly = true;
}

/*
    Set Two buttons to Visable
*/

Void WeAlumni::OPT::DeleteAllButton_Click(System::Object^ sender, System::EventArgs^ e) {
    btn_DeleteAll->Visible = false;
    btn_DeleteConfirm->Visible = true;
    btn_DeleteCancel->Visible = true;
}


/*
    Delete current Form from TABLE OPT and close the page
*/
Void WeAlumni::OPT::DeleteConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ command = "DELETE FROM OPT WHERE Id = " + Id + ";";

    try {
        int status = database->DeleteData(command);
        if (status > 0) {
            this->Close();
        }
        else if (status == 0) {
            lbl_error->Text = "Empty Table";
            lbl_error->Visible = true;
        }
    }
    catch (Exception^ e) {
        lbl_error->Text = "Delete Fail";
    }

}

/*
    Reset the buttons to ChangeInfo page
*/
Void WeAlumni::OPT::DeleteCancel_Click(System::Object^ sender, System::EventArgs^ e) {
    btn_DeleteAll->Visible = true;
    btn_DeleteConfirm->Visible = false;
    btn_DeleteCancel->Visible = false;
}