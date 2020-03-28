
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

/*
 * SetLableInvisible
 * This method will set All labels to invisible
 * @param None
 * @return None
 */
Void WeAlumni::OPT::SetLableInvisible() {
    lbl_Status->Visible = false;
    lbl_MemId->Visible = false;
    lbl_StfId->Visible = false;
    lbl_StartDate->Visible = false;
    lbl_EndDate->Visible = false;
    lbl_Title->Visible = false;
    lbl_Position->Visible = false;
    lbl_CardNumber->Visible = false;
    lbl_CardStartDate->Visible = false;
    lbl_CardEndDate->Visible = false;
}

/*
 * SetLableVisible
 * This method will set all labels to visible
 * @param None
 * @return None
 */
Void WeAlumni::OPT::SetLableVisible() {
    lbl_Status->Visible = true;
    lbl_MemId->Visible = true;
    lbl_StfId->Visible = true;
    lbl_StartDate->Visible = true;
    lbl_EndDate->Visible = true;
    lbl_Title->Visible = true;
    lbl_Position->Visible = true;
    lbl_CardNumber->Visible = true;
    lbl_CardStartDate->Visible = true;
    lbl_CardEndDate->Visible = true;
}

/*
 * SetBoxInvisible
 * This method will set all boxes to invisible
 * @param None
 * @return None
 */
Void WeAlumni::OPT::SetBoxInvisible() {
    txt_Status->Visible = false;
    txt_MemId->Visible = false;
    txt_StfId->Visible = false;
    txt_StartDate->Visible = false;
    txt_EndDate->Visible = false;
    txt_Title->Visible = false;
    txt_Position->Visible = false;
    txt_CardNumber->Visible = false;
    txt_CardEndDate->Visible = false;
    txt_CardStartDate->Visible = false;
}

/*
 * SetBoxVisible
 * This method will set all Boxes to visible
 * @param None
 * @return None
 */
Void WeAlumni::OPT::SetBoxVisible() {
    txt_Status->Visible = true;
    txt_MemId->Visible = true;
    txt_StfId->Visible = true;
    txt_StartDate->Visible = true;
    txt_EndDate->Visible = true;
    txt_Title->Visible = true;
    txt_Position->Visible = true;
    txt_CardNumber->Visible = true;
    txt_CardEndDate->Visible = true;
    txt_CardStartDate->Visible = true;
}

/*
 * Initialize
 * This method will initialize all data
 * @param None
 * @return None
 */
Void WeAlumni::OPT::Initialize() {
    UpdateInfo();
}

/*
 * UpdateInfo
 * This method read from OPT table. Then update info to according labels.
 * @param None
 * @return None
 */
Void WeAlumni::OPT::UpdateInfo() {
    String^ command_OPT = "SELECT * FROM OPT WHERE Id = " + _id + ";";
    String^ command_Member = "SELECT Name," +
                                    "Gender, " +
                                    "Email, " +
                                    "Phone, " +
                                    "Wechat " +
                             "FROM Member " + 
                             "WHERE Id = " + _id + ";";
    String^ command_Staff = "SELECT Name From Staff WHERE Id = " + _id + ";";
    try
    {
        int status = database->ReadData(command_OPT);
        if (status > 0) {
            lbl_OPTID->Text = database->dataReader[0]->ToString();
            lbl_Status->Text = database->dataReader[1]->ToString();
            txt_Status->Text = lbl_Status->Text;
            lbl_MemId->Text = database->dataReader[2]->ToString();
            txt_MemId->Text = lbl_MemId->Text;
            lbl_StfId->Text = database->dataReader[3]->ToString();
            txt_StfId->Text = lbl_StfId->Text;
            lbl_StartDate->Text = database->dataReader[4]->ToString();
            txt_StartDate->Text = lbl_StartDate->Text;
            lbl_EndDate->Text = database->dataReader[5]->ToString();
            txt_EndDate->Text = lbl_EndDate->Text;
            lbl_Title->Text = database->dataReader[6]->ToString();
            txt_Title->Text = lbl_Title->Text;
            lbl_Position->Text = database->dataReader[7]->ToString();
            txt_Position->Text = lbl_Position->Text;
            lbl_CardNumber->Text = database->dataReader[8]->ToString();
            txt_CardNumber->Text = lbl_CardNumber->Text;
            lbl_CardStartDate->Text = database->dataReader[9]->ToString();
            txt_CardStartDate->Text = lbl_CardStartDate->Text;
            lbl_CardEndDate->Text = database->dataReader[10]->ToString();
            txt_CardEndDate->Text = lbl_CardEndDate->Text;
        }

        status = database->ReadData(command_Member);
        if (status > 0) {
            lbl_MemName->Text = database->dataReader[0]->ToString();
            lbl_Gender->Text = database->dataReader[1]->ToString();
            lbl_Email->Text = database->dataReader[2]->ToString();
            lbl_Phone->Text = database->dataReader[3]->ToString();
            lbl_WeChat->Text = database->dataReader[4]->ToString();
        }

        status = database->ReadData(command_Staff);
        if (status > 0) {
            lbl_StfName->Text = database->dataReader[0]->ToString();
        }
    }
    catch (Exception^ e) {
        lbl_error->Text = e->Message;
        lbl_error->ForeColor = Color::Red;
        lbl_error->Visible = true;
    }
}

/*
 * btn_ChangeInfo_Click
 * When click button "Change Info", multiple TextBoxes will be visible to collect changed info.
 * @param None
 * @return None
 */
Void WeAlumni::OPT::btn_ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    SetLableInvisible();
    SetBoxVisible();
    lbl_error->Visible = false;
    btn_DeleteAll->Visible = true;
    btn_ChangeConfirm->Visible = true;
    btn_ChangeCancel->Visible = true;
}

/*
 * btn_ChangeConfirm_Click
 * When click button "Confirm", this method will trigger a Database update execution.
 * If exception occurs, an error message will be shown.
 * Then set all TextBoxes and two buttons to invisable.
 * @param None
 * @return None
 */
Void WeAlumni::OPT::btn_ChangeConfirm_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ command = "UPDATE OPT " +
                      "SET Status = '" + txt_Status->Text + "', " +
                          "MemId = '" + txt_MemId->Text + "', "
                          "StfId = '" + txt_StfId->Text + "', "
                          "StartDate = '" + txt_StartDate->Text + "', " +
                          "EndDate = '" + txt_EndDate->Text + "', " +
                          "Title = '" + txt_Title->Text + "', " +
                          "Position = '" + txt_Position->Text + "', " +
                          "CardNumber = '" + txt_CardNumber->Text + "', " +
                          "CardStartDate = '" + txt_CardStartDate->Text + "', " +
                          "CardEndDate = '" + txt_CardEndDate->Text + "' " +
                      "WHERE Id = " + _id + ";";

    int status = -1;
    try {
        status = database->UpdateData(command);
    }
    catch (Exception^ e) {
        lbl_error->Text = e->Message;
        lbl_error->ForeColor = Color::Red;
        lbl_error->Visible = true;
    }

    if (status != -1) {
        lbl_error->Text = "Update Success";
        lbl_error->ForeColor = Color::Green;
        lbl_error->Visible = true;
        UpdateInfo();
        SetBoxInvisible();
        SetLableVisible();
        btn_DeleteAll->Visible = false;
        btn_ChangeConfirm->Visible = false;
        btn_ChangeCancel->Visible = false;
    }
}

/*
 * btn_ChangeCancel_Click
 * This method reset the value of TextBoxes, and set all TextBoxes and two buttons to invisible.
 * @param None
 * @return None
 */
Void WeAlumni::OPT::btn_ChangeCancel_Click(System::Object^ sender, System::EventArgs^ e) {
    UpdateInfo();
    btn_DeleteAll->Visible = false;
    btn_ChangeConfirm->Visible = false;
    btn_ChangeCancel->Visible = false;

    SetBoxInvisible();
    SetLableVisible();
}

/*
 * btn_DeleteAllButton_Click
 * Set Two buttons to Visable
 * @param None
 * @return None
 */
Void WeAlumni::OPT::btn_DeleteAllButton_Click(System::Object^ sender, System::EventArgs^ e) {
    btn_DeleteAll->Visible = false;
    btn_DeleteConfirm->Visible = true;
    btn_DeleteCancel->Visible = true;
    SetBoxInvisible();
    SetLableVisible();
}

/*
 * btn_DeleteConfirm_Click
 * Delete current Form from TABLE OPT and close the page
 * @param None
 * @return None
 */
Void WeAlumni::OPT::btn_DeleteConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "DELETE FROM OPT WHERE Id = " + _id + ";";
    try {
        int status = database->DeleteData(command);
        if (status > 0) {
            this->Close();
        }
    }
    catch (Exception^ e) {
        lbl_error->Text = e->Message;
        lbl_error->ForeColor = Color::Red;
        lbl_error->Visible = true;
    }
}

/*
 * btn_DeleteCancel_Click
 * Reset the buttons to ChangeInfo page
 * @param None
 * @return None
 */
Void WeAlumni::OPT::btn_DeleteCancel_Click(System::Object^ sender, System::EventArgs^ e) {
    btn_DeleteAll->Visible = true;
    btn_DeleteConfirm->Visible = false;
    btn_DeleteCancel->Visible = false;
}