#pragma once
#include "Database.h"

/*
 * RecInfoPage.h
 *
 * This file shows a RecordInfo page for a unique Record Id.
 *
 * @author: Sen Ma
 * Revised: 3/28/20
 *
 */

namespace WeAlumni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// RecInfoPage 摘要
	/// </summary>
	public ref class RecInfoPage : public System::Windows::Forms::Form
	{
	public:
		RecInfoPage(String^ input)
		{
			InitializeComponent();
			//
			//
			recId = input;
			
			try {
				database = gcnew Database(Database::DatabaseType::Data);
				UpdateInfo();
			}
			catch (Exception^) {
				lbl_DBError->Text = "pa";
				btn_Update->Enabled = false;
				btn_DeleteId->Enabled = false;
			}

		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RecInfoPage()
		{
			if (components)
			{
				delete components;
			}
			if (database)
			{
				delete database;
			}
		}
	private: System::Windows::Forms::Label^ lbl_Prompt_RcdId;
	private: System::Windows::Forms::Label^ lbl_Prompt_Time;
	private: System::Windows::Forms::Label^ lbl_Prompt_StfId;
	private: System::Windows::Forms::Label^ lbl_Prompt_StfName;
	private: System::Windows::Forms::Label^ lbl_prompt_department;
	private: System::Windows::Forms::Label^ lbl_Prompt_Duty;
	private: System::Windows::Forms::Label^ lbl_Prompt_Content;
	private: System::Windows::Forms::TextBox^ txt_Content;
	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::Button^ btn_DeleteId;
	private: System::Windows::Forms::Label^ lbl_RcdId;
	private: System::Windows::Forms::Label^ lbl_Time;
	private: System::Windows::Forms::Label^ lbl_StfId;
	private: System::Windows::Forms::Label^ lbl_StfName;
	private: System::Windows::Forms::Label^ lbl_Dep;
	private: System::Windows::Forms::Label^ lbl_Duty;
	private: System::Windows::Forms::Label^ lbl_Content;
	private: System::Windows::Forms::Label^ lbl_DBError;
	private: System::Windows::Forms::Button^ btn_Confirm;
	private: System::Windows::Forms::Button^ btn_Cancel;
	private: System::Windows::Forms::Button^ btn_DelConfirm;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_Prompt_RcdId = (gcnew System::Windows::Forms::Label());
			this->lbl_Prompt_Time = (gcnew System::Windows::Forms::Label());
			this->lbl_Prompt_StfId = (gcnew System::Windows::Forms::Label());
			this->lbl_Prompt_StfName = (gcnew System::Windows::Forms::Label());
			this->lbl_prompt_department = (gcnew System::Windows::Forms::Label());
			this->lbl_Prompt_Duty = (gcnew System::Windows::Forms::Label());
			this->lbl_Prompt_Content = (gcnew System::Windows::Forms::Label());
			this->txt_Content = (gcnew System::Windows::Forms::TextBox());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->btn_DeleteId = (gcnew System::Windows::Forms::Button());
			this->lbl_RcdId = (gcnew System::Windows::Forms::Label());
			this->lbl_Time = (gcnew System::Windows::Forms::Label());
			this->lbl_StfId = (gcnew System::Windows::Forms::Label());
			this->lbl_StfName = (gcnew System::Windows::Forms::Label());
			this->lbl_Dep = (gcnew System::Windows::Forms::Label());
			this->lbl_Duty = (gcnew System::Windows::Forms::Label());
			this->lbl_Content = (gcnew System::Windows::Forms::Label());
			this->lbl_DBError = (gcnew System::Windows::Forms::Label());
			this->btn_Confirm = (gcnew System::Windows::Forms::Button());
			this->btn_Cancel = (gcnew System::Windows::Forms::Button());
			this->btn_DelConfirm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_Prompt_RcdId
			// 
			this->lbl_Prompt_RcdId->AutoSize = true;
			this->lbl_Prompt_RcdId->Location = System::Drawing::Point(42, 55);
			this->lbl_Prompt_RcdId->Name = L"lbl_Prompt_RcdId";
			this->lbl_Prompt_RcdId->Size = System::Drawing::Size(65, 17);
			this->lbl_Prompt_RcdId->TabIndex = 0;
			this->lbl_Prompt_RcdId->Text = L"RecordId";
			// 
			// lbl_Prompt_Time
			// 
			this->lbl_Prompt_Time->AutoSize = true;
			this->lbl_Prompt_Time->Location = System::Drawing::Point(42, 116);
			this->lbl_Prompt_Time->Name = L"lbl_Prompt_Time";
			this->lbl_Prompt_Time->Size = System::Drawing::Size(92, 17);
			this->lbl_Prompt_Time->TabIndex = 1;
			this->lbl_Prompt_Time->Text = L"RegisterTime";
			// 
			// lbl_Prompt_StfId
			// 
			this->lbl_Prompt_StfId->AutoSize = true;
			this->lbl_Prompt_StfId->Location = System::Drawing::Point(267, 55);
			this->lbl_Prompt_StfId->Name = L"lbl_Prompt_StfId";
			this->lbl_Prompt_StfId->Size = System::Drawing::Size(36, 17);
			this->lbl_Prompt_StfId->TabIndex = 2;
			this->lbl_Prompt_StfId->Text = L"EeId";
			// 
			// lbl_Prompt_StfName
			// 
			this->lbl_Prompt_StfName->AutoSize = true;
			this->lbl_Prompt_StfName->Location = System::Drawing::Point(267, 116);
			this->lbl_Prompt_StfName->Name = L"lbl_Prompt_StfName";
			this->lbl_Prompt_StfName->Size = System::Drawing::Size(62, 17);
			this->lbl_Prompt_StfName->TabIndex = 3;
			this->lbl_Prompt_StfName->Text = L"EeName";
			// 
			// lbl_prompt_department
			// 
			this->lbl_prompt_department->AutoSize = true;
			this->lbl_prompt_department->Location = System::Drawing::Point(479, 55);
			this->lbl_prompt_department->Name = L"lbl_prompt_department";
			this->lbl_prompt_department->Size = System::Drawing::Size(82, 17);
			this->lbl_prompt_department->TabIndex = 4;
			this->lbl_prompt_department->Text = L"Department";
			// 
			// lbl_Prompt_Duty
			// 
			this->lbl_Prompt_Duty->AutoSize = true;
			this->lbl_Prompt_Duty->Location = System::Drawing::Point(479, 116);
			this->lbl_Prompt_Duty->Name = L"lbl_Prompt_Duty";
			this->lbl_Prompt_Duty->Size = System::Drawing::Size(37, 17);
			this->lbl_Prompt_Duty->TabIndex = 5;
			this->lbl_Prompt_Duty->Text = L"Duty";
			// 
			// lbl_Prompt_Content
			// 
			this->lbl_Prompt_Content->AutoSize = true;
			this->lbl_Prompt_Content->Location = System::Drawing::Point(42, 175);
			this->lbl_Prompt_Content->Name = L"lbl_Prompt_Content";
			this->lbl_Prompt_Content->Size = System::Drawing::Size(57, 17);
			this->lbl_Prompt_Content->TabIndex = 6;
			this->lbl_Prompt_Content->Text = L"Content";
			// 
			// txt_Content
			// 
			this->txt_Content->Location = System::Drawing::Point(45, 209);
			this->txt_Content->Multiline = true;
			this->txt_Content->Name = L"txt_Content";
			this->txt_Content->Size = System::Drawing::Size(408, 26);
			this->txt_Content->TabIndex = 13;
			this->txt_Content->Visible = false;
			// 
			// btn_Update
			// 
			this->btn_Update->Location = System::Drawing::Point(471, 352);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(100, 31);
			this->btn_Update->TabIndex = 14;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = true;
			this->btn_Update->Click += gcnew System::EventHandler(this, &RecInfoPage::btn_Update_Click);
			// 
			// btn_DeleteId
			// 
			this->btn_DeleteId->Location = System::Drawing::Point(254, 352);
			this->btn_DeleteId->Name = L"btn_DeleteId";
			this->btn_DeleteId->Size = System::Drawing::Size(100, 31);
			this->btn_DeleteId->TabIndex = 15;
			this->btn_DeleteId->Text = L"Delete ID";
			this->btn_DeleteId->UseVisualStyleBackColor = true;
			this->btn_DeleteId->Click += gcnew System::EventHandler(this, &RecInfoPage::btn_DeleteId_Click);
			// 
			// lbl_RcdId
			// 
			this->lbl_RcdId->AutoSize = true;
			this->lbl_RcdId->Location = System::Drawing::Point(144, 59);
			this->lbl_RcdId->Name = L"lbl_RcdId";
			this->lbl_RcdId->Size = System::Drawing::Size(0, 17);
			this->lbl_RcdId->TabIndex = 16;
			// 
			// lbl_Time
			// 
			this->lbl_Time->AutoSize = true;
			this->lbl_Time->Location = System::Drawing::Point(144, 119);
			this->lbl_Time->Name = L"lbl_Time";
			this->lbl_Time->Size = System::Drawing::Size(0, 17);
			this->lbl_Time->TabIndex = 17;
			// 
			// lbl_StfId
			// 
			this->lbl_StfId->AutoSize = true;
			this->lbl_StfId->Location = System::Drawing::Point(342, 58);
			this->lbl_StfId->Name = L"lbl_StfId";
			this->lbl_StfId->Size = System::Drawing::Size(0, 17);
			this->lbl_StfId->TabIndex = 18;
			// 
			// lbl_StfName
			// 
			this->lbl_StfName->AutoSize = true;
			this->lbl_StfName->Location = System::Drawing::Point(342, 119);
			this->lbl_StfName->Name = L"lbl_StfName";
			this->lbl_StfName->Size = System::Drawing::Size(0, 17);
			this->lbl_StfName->TabIndex = 19;
			// 
			// lbl_Dep
			// 
			this->lbl_Dep->AutoSize = true;
			this->lbl_Dep->Location = System::Drawing::Point(568, 59);
			this->lbl_Dep->Name = L"lbl_Dep";
			this->lbl_Dep->Size = System::Drawing::Size(0, 17);
			this->lbl_Dep->TabIndex = 20;
			// 
			// lbl_Duty
			// 
			this->lbl_Duty->AutoSize = true;
			this->lbl_Duty->Location = System::Drawing::Point(571, 118);
			this->lbl_Duty->Name = L"lbl_Duty";
			this->lbl_Duty->Size = System::Drawing::Size(0, 17);
			this->lbl_Duty->TabIndex = 21;
			// 
			// lbl_Content
			// 
			this->lbl_Content->AutoSize = true;
			this->lbl_Content->Location = System::Drawing::Point(45, 209);
			this->lbl_Content->Name = L"lbl_Content";
			this->lbl_Content->Size = System::Drawing::Size(0, 17);
			this->lbl_Content->TabIndex = 22;
			// 
			// lbl_DBError
			// 
			this->lbl_DBError->AutoSize = true;
			this->lbl_DBError->Location = System::Drawing::Point(568, 175);
			this->lbl_DBError->Name = L"lbl_DBError";
			this->lbl_DBError->Size = System::Drawing::Size(0, 17);
			this->lbl_DBError->TabIndex = 23;
			this->lbl_DBError->Visible = false;
			// 
			// btn_Confirm
			// 
			this->btn_Confirm->Location = System::Drawing::Point(270, 317);
			this->btn_Confirm->Name = L"btn_Confirm";
			this->btn_Confirm->Size = System::Drawing::Size(75, 23);
			this->btn_Confirm->TabIndex = 24;
			this->btn_Confirm->Text = L"Confirm";
			this->btn_Confirm->UseVisualStyleBackColor = true;
			this->btn_Confirm->Visible = false;
			this->btn_Confirm->Click += gcnew System::EventHandler(this, &RecInfoPage::btn_Confirm_Click);
			// 
			// btn_Cancel
			// 
			this->btn_Cancel->Location = System::Drawing::Point(389, 316);
			this->btn_Cancel->Name = L"btn_Cancel";
			this->btn_Cancel->Size = System::Drawing::Size(75, 23);
			this->btn_Cancel->TabIndex = 25;
			this->btn_Cancel->Text = L"Cancel";
			this->btn_Cancel->UseVisualStyleBackColor = true;
			this->btn_Cancel->Visible = false;
			this->btn_Cancel->Click += gcnew System::EventHandler(this, &RecInfoPage::btn_Cancel_Click);
			// 
			// btn_DelConfirm
			// 
			this->btn_DelConfirm->Location = System::Drawing::Point(270, 316);
			this->btn_DelConfirm->Name = L"btn_DelConfirm";
			this->btn_DelConfirm->Size = System::Drawing::Size(75, 23);
			this->btn_DelConfirm->TabIndex = 26;
			this->btn_DelConfirm->Text = L"Confirm";
			this->btn_DelConfirm->UseVisualStyleBackColor = true;
			this->btn_DelConfirm->Visible = false;
			this->btn_DelConfirm->Click += gcnew System::EventHandler(this, &RecInfoPage::btn_DelConfirm_Click);
			// 
			// RecInfoPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 424);
			this->Controls->Add(this->btn_DelConfirm);
			this->Controls->Add(this->txt_Content);
			this->Controls->Add(this->btn_Cancel);
			this->Controls->Add(this->btn_Confirm);
			this->Controls->Add(this->lbl_DBError);
			this->Controls->Add(this->lbl_Content);
			this->Controls->Add(this->lbl_Duty);
			this->Controls->Add(this->lbl_Dep);
			this->Controls->Add(this->lbl_StfName);
			this->Controls->Add(this->lbl_StfId);
			this->Controls->Add(this->lbl_Time);
			this->Controls->Add(this->lbl_RcdId);
			this->Controls->Add(this->btn_DeleteId);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->lbl_Prompt_Content);
			this->Controls->Add(this->lbl_Prompt_Duty);
			this->Controls->Add(this->lbl_prompt_department);
			this->Controls->Add(this->lbl_Prompt_StfName);
			this->Controls->Add(this->lbl_Prompt_StfId);
			this->Controls->Add(this->lbl_Prompt_Time);
			this->Controls->Add(this->lbl_Prompt_RcdId);
			this->Name = L"RecInfoPage";
			this->Text = L"RecInfoPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		bool DBHasRecord;
		Database^ database;
		String^ recId;
	private:
		Void UpdateInfo();
		Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e);
		Void btn_Confirm_Click(System::Object^ sender, System::EventArgs^ e);
		Void btn_Cancel_Click(System::Object^ sender, System::EventArgs^ e);
		Void btn_DeleteId_Click(System::Object^ sender, System::EventArgs^ e);
		Void btn_DelConfirm_Click(System::Object^ sender, System::EventArgs^ e);
};
}
