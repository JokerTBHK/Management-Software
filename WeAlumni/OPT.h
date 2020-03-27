
#pragma once
#include "Database.h"


namespace WeAlumni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OPT
	/// </summary>
	public ref class OPT : public System::Windows::Forms::Form
	{
	public:
		OPT(int^ InputId)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			database = gcnew Database(Database::DatabaseType::Data);
			Id = InputId;
			Initialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OPT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_OPTID;
	private: System::Windows::Forms::TextBox^ txt_OPTID;
	private: System::Windows::Forms::Label^ lbl_Status;
	private: System::Windows::Forms::TextBox^ txt_Status;
	private: System::Windows::Forms::Label^ lbl_MemId;
	private: System::Windows::Forms::TextBox^ txt_MemId;
	private: System::Windows::Forms::Label^ lbl_Title;
	private: System::Windows::Forms::Label^ lbl_EndDate;
	private: System::Windows::Forms::Label^ lbl_StartDate;
	private: System::Windows::Forms::Label^ lbl_StfId;
	private: System::Windows::Forms::TextBox^ txt_StfId;
	private: System::Windows::Forms::TextBox^ txt_StartDate;
	private: System::Windows::Forms::TextBox^ txt_CardNumber;
	private: System::Windows::Forms::TextBox^ txt_Position;
	private: System::Windows::Forms::TextBox^ txt_Title;
	private: System::Windows::Forms::TextBox^ txt_EndDate;
	private: System::Windows::Forms::Label^ lbl_CardNumber;
	private: System::Windows::Forms::Label^ lbl_Position;
	private: System::Windows::Forms::Label^ lbl_CardEndDate;
	private: System::Windows::Forms::Label^ lbl_CardStartDate;
	private: System::Windows::Forms::TextBox^ txt_CardEndDate;
	private: System::Windows::Forms::TextBox^ txt_CardStartDate;
	private: System::Windows::Forms::Button^ btn_ChangeInfo;
	private: System::Windows::Forms::Button^ btn_ChangeConfirm;
	private: System::Windows::Forms::Button^ btn_ChangeCancel;
	private: System::Windows::Forms::Label^ lbl_PageName;
	private: System::Windows::Forms::Label^ lbl_MemName;
	private: System::Windows::Forms::TextBox^ txt_MemName;
	private: System::Windows::Forms::Label^ lbl_Gender;
	private: System::Windows::Forms::TextBox^ txt_Gender;
	private: System::Windows::Forms::Label^ lbl_Email;
	private: System::Windows::Forms::TextBox^ txt_Email;
	private: System::Windows::Forms::TextBox^ txt_Phone;
	private: System::Windows::Forms::Label^ lbl_Phone;
	private: System::Windows::Forms::TextBox^ txt_WeChat;
	private: System::Windows::Forms::Label^ lbl_WeChat;
	private: System::Windows::Forms::TextBox^ txt_StfName;
	private: System::Windows::Forms::Label^ lbl_StfName;
	private: System::Windows::Forms::Label^ lbl_error;
	private: System::Windows::Forms::Button^ btn_DeleteAll;
	private: System::Windows::Forms::Button^ btn_DeleteConfirm;
	private: System::Windows::Forms::Button^ btn_DeleteCancel;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_OPTID = (gcnew System::Windows::Forms::Label());
			this->txt_OPTID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Status = (gcnew System::Windows::Forms::Label());
			this->txt_Status = (gcnew System::Windows::Forms::TextBox());
			this->lbl_MemId = (gcnew System::Windows::Forms::Label());
			this->txt_MemId = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Title = (gcnew System::Windows::Forms::Label());
			this->lbl_EndDate = (gcnew System::Windows::Forms::Label());
			this->lbl_StartDate = (gcnew System::Windows::Forms::Label());
			this->lbl_StfId = (gcnew System::Windows::Forms::Label());
			this->txt_StfId = (gcnew System::Windows::Forms::TextBox());
			this->txt_StartDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_CardNumber = (gcnew System::Windows::Forms::TextBox());
			this->txt_Position = (gcnew System::Windows::Forms::TextBox());
			this->txt_Title = (gcnew System::Windows::Forms::TextBox());
			this->txt_EndDate = (gcnew System::Windows::Forms::TextBox());
			this->lbl_CardNumber = (gcnew System::Windows::Forms::Label());
			this->lbl_Position = (gcnew System::Windows::Forms::Label());
			this->lbl_CardEndDate = (gcnew System::Windows::Forms::Label());
			this->lbl_CardStartDate = (gcnew System::Windows::Forms::Label());
			this->txt_CardEndDate = (gcnew System::Windows::Forms::TextBox());
			this->txt_CardStartDate = (gcnew System::Windows::Forms::TextBox());
			this->btn_ChangeInfo = (gcnew System::Windows::Forms::Button());
			this->btn_ChangeConfirm = (gcnew System::Windows::Forms::Button());
			this->btn_ChangeCancel = (gcnew System::Windows::Forms::Button());
			this->lbl_PageName = (gcnew System::Windows::Forms::Label());
			this->lbl_MemName = (gcnew System::Windows::Forms::Label());
			this->txt_MemName = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Gender = (gcnew System::Windows::Forms::Label());
			this->txt_Gender = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Email = (gcnew System::Windows::Forms::Label());
			this->txt_Email = (gcnew System::Windows::Forms::TextBox());
			this->txt_Phone = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Phone = (gcnew System::Windows::Forms::Label());
			this->txt_WeChat = (gcnew System::Windows::Forms::TextBox());
			this->lbl_WeChat = (gcnew System::Windows::Forms::Label());
			this->txt_StfName = (gcnew System::Windows::Forms::TextBox());
			this->lbl_StfName = (gcnew System::Windows::Forms::Label());
			this->lbl_error = (gcnew System::Windows::Forms::Label());
			this->btn_DeleteAll = (gcnew System::Windows::Forms::Button());
			this->btn_DeleteConfirm = (gcnew System::Windows::Forms::Button());
			this->btn_DeleteCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_OPTID
			// 
			this->lbl_OPTID->AutoSize = true;
			this->lbl_OPTID->Location = System::Drawing::Point(22, 68);
			this->lbl_OPTID->Name = L"lbl_OPTID";
			this->lbl_OPTID->Size = System::Drawing::Size(18, 13);
			this->lbl_OPTID->TabIndex = 0;
			this->lbl_OPTID->Text = L"ID";
			// 
			// txt_OPTID
			// 
			this->txt_OPTID->BackColor = System::Drawing::Color::White;
			this->txt_OPTID->Location = System::Drawing::Point(96, 64);
			this->txt_OPTID->Name = L"txt_OPTID";
			this->txt_OPTID->ReadOnly = true;
			this->txt_OPTID->Size = System::Drawing::Size(120, 20);
			this->txt_OPTID->TabIndex = 1;
			// 
			// lbl_Status
			// 
			this->lbl_Status->AutoSize = true;
			this->lbl_Status->Location = System::Drawing::Point(248, 68);
			this->lbl_Status->Name = L"lbl_Status";
			this->lbl_Status->Size = System::Drawing::Size(37, 13);
			this->lbl_Status->TabIndex = 2;
			this->lbl_Status->Text = L"Status";
			// 
			// txt_Status
			// 
			this->txt_Status->BackColor = System::Drawing::Color::White;
			this->txt_Status->Location = System::Drawing::Point(333, 64);
			this->txt_Status->Name = L"txt_Status";
			this->txt_Status->ReadOnly = true;
			this->txt_Status->Size = System::Drawing::Size(120, 20);
			this->txt_Status->TabIndex = 3;
			// 
			// lbl_MemId
			// 
			this->lbl_MemId->AutoSize = true;
			this->lbl_MemId->Location = System::Drawing::Point(22, 117);
			this->lbl_MemId->Name = L"lbl_MemId";
			this->lbl_MemId->Size = System::Drawing::Size(59, 13);
			this->lbl_MemId->TabIndex = 4;
			this->lbl_MemId->Text = L"Member ID";
			// 
			// txt_MemId
			// 
			this->txt_MemId->BackColor = System::Drawing::Color::White;
			this->txt_MemId->Location = System::Drawing::Point(96, 113);
			this->txt_MemId->Name = L"txt_MemId";
			this->txt_MemId->ReadOnly = true;
			this->txt_MemId->Size = System::Drawing::Size(120, 20);
			this->txt_MemId->TabIndex = 5;
			// 
			// lbl_Title
			// 
			this->lbl_Title->AutoSize = true;
			this->lbl_Title->Location = System::Drawing::Point(22, 312);
			this->lbl_Title->Name = L"lbl_Title";
			this->lbl_Title->Size = System::Drawing::Size(27, 13);
			this->lbl_Title->TabIndex = 6;
			this->lbl_Title->Text = L"Title";
			// 
			// lbl_EndDate
			// 
			this->lbl_EndDate->AutoSize = true;
			this->lbl_EndDate->Location = System::Drawing::Point(248, 272);
			this->lbl_EndDate->Name = L"lbl_EndDate";
			this->lbl_EndDate->Size = System::Drawing::Size(49, 13);
			this->lbl_EndDate->TabIndex = 7;
			this->lbl_EndDate->Text = L"EndDate";
			// 
			// lbl_StartDate
			// 
			this->lbl_StartDate->AutoSize = true;
			this->lbl_StartDate->Location = System::Drawing::Point(22, 268);
			this->lbl_StartDate->Name = L"lbl_StartDate";
			this->lbl_StartDate->Size = System::Drawing::Size(52, 13);
			this->lbl_StartDate->TabIndex = 8;
			this->lbl_StartDate->Text = L"StartDate";
			// 
			// lbl_StfId
			// 
			this->lbl_StfId->AutoSize = true;
			this->lbl_StfId->Location = System::Drawing::Point(22, 225);
			this->lbl_StfId->Name = L"lbl_StfId";
			this->lbl_StfId->Size = System::Drawing::Size(40, 13);
			this->lbl_StfId->TabIndex = 9;
			this->lbl_StfId->Text = L"StaffID";
			// 
			// txt_StfId
			// 
			this->txt_StfId->BackColor = System::Drawing::Color::White;
			this->txt_StfId->Location = System::Drawing::Point(96, 221);
			this->txt_StfId->Name = L"txt_StfId";
			this->txt_StfId->ReadOnly = true;
			this->txt_StfId->Size = System::Drawing::Size(120, 20);
			this->txt_StfId->TabIndex = 10;
			// 
			// txt_StartDate
			// 
			this->txt_StartDate->BackColor = System::Drawing::Color::White;
			this->txt_StartDate->Location = System::Drawing::Point(96, 265);
			this->txt_StartDate->Name = L"txt_StartDate";
			this->txt_StartDate->ReadOnly = true;
			this->txt_StartDate->Size = System::Drawing::Size(120, 20);
			this->txt_StartDate->TabIndex = 11;
			// 
			// txt_CardNumber
			// 
			this->txt_CardNumber->BackColor = System::Drawing::Color::White;
			this->txt_CardNumber->Location = System::Drawing::Point(96, 349);
			this->txt_CardNumber->Name = L"txt_CardNumber";
			this->txt_CardNumber->ReadOnly = true;
			this->txt_CardNumber->Size = System::Drawing::Size(120, 20);
			this->txt_CardNumber->TabIndex = 12;
			// 
			// txt_Position
			// 
			this->txt_Position->BackColor = System::Drawing::Color::White;
			this->txt_Position->Location = System::Drawing::Point(333, 305);
			this->txt_Position->Name = L"txt_Position";
			this->txt_Position->ReadOnly = true;
			this->txt_Position->Size = System::Drawing::Size(120, 20);
			this->txt_Position->TabIndex = 13;
			// 
			// txt_Title
			// 
			this->txt_Title->BackColor = System::Drawing::Color::White;
			this->txt_Title->Location = System::Drawing::Point(96, 308);
			this->txt_Title->Name = L"txt_Title";
			this->txt_Title->ReadOnly = true;
			this->txt_Title->Size = System::Drawing::Size(120, 20);
			this->txt_Title->TabIndex = 14;
			// 
			// txt_EndDate
			// 
			this->txt_EndDate->BackColor = System::Drawing::Color::White;
			this->txt_EndDate->Location = System::Drawing::Point(333, 268);
			this->txt_EndDate->Name = L"txt_EndDate";
			this->txt_EndDate->ReadOnly = true;
			this->txt_EndDate->Size = System::Drawing::Size(120, 20);
			this->txt_EndDate->TabIndex = 15;
			// 
			// lbl_CardNumber
			// 
			this->lbl_CardNumber->AutoSize = true;
			this->lbl_CardNumber->Location = System::Drawing::Point(22, 353);
			this->lbl_CardNumber->Name = L"lbl_CardNumber";
			this->lbl_CardNumber->Size = System::Drawing::Size(66, 13);
			this->lbl_CardNumber->TabIndex = 16;
			this->lbl_CardNumber->Text = L"CardNumber";
			// 
			// lbl_Position
			// 
			this->lbl_Position->AutoSize = true;
			this->lbl_Position->Location = System::Drawing::Point(248, 309);
			this->lbl_Position->Name = L"lbl_Position";
			this->lbl_Position->Size = System::Drawing::Size(44, 13);
			this->lbl_Position->TabIndex = 17;
			this->lbl_Position->Text = L"Position";
			// 
			// lbl_CardEndDate
			// 
			this->lbl_CardEndDate->AutoSize = true;
			this->lbl_CardEndDate->Location = System::Drawing::Point(466, 353);
			this->lbl_CardEndDate->Name = L"lbl_CardEndDate";
			this->lbl_CardEndDate->Size = System::Drawing::Size(71, 13);
			this->lbl_CardEndDate->TabIndex = 18;
			this->lbl_CardEndDate->Text = L"CardEndDate";
			// 
			// lbl_CardStartDate
			// 
			this->lbl_CardStartDate->AutoSize = true;
			this->lbl_CardStartDate->Location = System::Drawing::Point(248, 353);
			this->lbl_CardStartDate->Name = L"lbl_CardStartDate";
			this->lbl_CardStartDate->Size = System::Drawing::Size(74, 13);
			this->lbl_CardStartDate->TabIndex = 19;
			this->lbl_CardStartDate->Text = L"CardStartDate";
			// 
			// txt_CardEndDate
			// 
			this->txt_CardEndDate->BackColor = System::Drawing::Color::White;
			this->txt_CardEndDate->Location = System::Drawing::Point(564, 349);
			this->txt_CardEndDate->Name = L"txt_CardEndDate";
			this->txt_CardEndDate->ReadOnly = true;
			this->txt_CardEndDate->Size = System::Drawing::Size(116, 20);
			this->txt_CardEndDate->TabIndex = 20;
			// 
			// txt_CardStartDate
			// 
			this->txt_CardStartDate->BackColor = System::Drawing::Color::White;
			this->txt_CardStartDate->Location = System::Drawing::Point(333, 349);
			this->txt_CardStartDate->Name = L"txt_CardStartDate";
			this->txt_CardStartDate->ReadOnly = true;
			this->txt_CardStartDate->Size = System::Drawing::Size(120, 20);
			this->txt_CardStartDate->TabIndex = 21;
			// 
			// btn_ChangeInfo
			// 
			this->btn_ChangeInfo->Location = System::Drawing::Point(25, 429);
			this->btn_ChangeInfo->Name = L"btn_ChangeInfo";
			this->btn_ChangeInfo->Size = System::Drawing::Size(118, 48);
			this->btn_ChangeInfo->TabIndex = 22;
			this->btn_ChangeInfo->Text = L"Change Info";
			this->btn_ChangeInfo->UseVisualStyleBackColor = true;
			this->btn_ChangeInfo->Click += gcnew System::EventHandler(this, &OPT::ChangeInfo_Click);
			// 
			// btn_ChangeConfirm
			// 
			this->btn_ChangeConfirm->Location = System::Drawing::Point(25, 429);
			this->btn_ChangeConfirm->Name = L"btn_ChangeConfirm";
			this->btn_ChangeConfirm->Size = System::Drawing::Size(118, 48);
			this->btn_ChangeConfirm->TabIndex = 23;
			this->btn_ChangeConfirm->Text = L"Confirm";
			this->btn_ChangeConfirm->UseVisualStyleBackColor = true;
			this->btn_ChangeConfirm->Visible = false;
			this->btn_ChangeConfirm->Click += gcnew System::EventHandler(this, &OPT::ChangeConfirm_Click);
			// 
			// btn_ChangeCancel
			// 
			this->btn_ChangeCancel->Location = System::Drawing::Point(332, 429);
			this->btn_ChangeCancel->Name = L"btn_ChangeCancel";
			this->btn_ChangeCancel->Size = System::Drawing::Size(118, 48);
			this->btn_ChangeCancel->TabIndex = 24;
			this->btn_ChangeCancel->Text = L"Cancel";
			this->btn_ChangeCancel->UseVisualStyleBackColor = true;
			this->btn_ChangeCancel->Visible = false;
			this->btn_ChangeCancel->Click += gcnew System::EventHandler(this, &OPT::ChangeCancel_Click);
			// 
			// lbl_PageName
			// 
			this->lbl_PageName->AutoSize = true;
			this->lbl_PageName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_PageName->Location = System::Drawing::Point(233, 6);
			this->lbl_PageName->Name = L"lbl_PageName";
			this->lbl_PageName->Size = System::Drawing::Size(206, 33);
			this->lbl_PageName->TabIndex = 25;
			this->lbl_PageName->Text = L"OPT Info Page";
			// 
			// lbl_MemName
			// 
			this->lbl_MemName->AutoSize = true;
			this->lbl_MemName->Location = System::Drawing::Point(248, 117);
			this->lbl_MemName->Name = L"lbl_MemName";
			this->lbl_MemName->Size = System::Drawing::Size(76, 13);
			this->lbl_MemName->TabIndex = 26;
			this->lbl_MemName->Text = L"Member Name";
			// 
			// txt_MemName
			// 
			this->txt_MemName->BackColor = System::Drawing::Color::White;
			this->txt_MemName->Location = System::Drawing::Point(333, 113);
			this->txt_MemName->Name = L"txt_MemName";
			this->txt_MemName->ReadOnly = true;
			this->txt_MemName->Size = System::Drawing::Size(120, 20);
			this->txt_MemName->TabIndex = 27;
			// 
			// lbl_Gender
			// 
			this->lbl_Gender->AutoSize = true;
			this->lbl_Gender->Location = System::Drawing::Point(480, 68);
			this->lbl_Gender->Name = L"lbl_Gender";
			this->lbl_Gender->Size = System::Drawing::Size(42, 13);
			this->lbl_Gender->TabIndex = 28;
			this->lbl_Gender->Text = L"Gender";
			// 
			// txt_Gender
			// 
			this->txt_Gender->BackColor = System::Drawing::Color::White;
			this->txt_Gender->Location = System::Drawing::Point(564, 65);
			this->txt_Gender->Name = L"txt_Gender";
			this->txt_Gender->ReadOnly = true;
			this->txt_Gender->Size = System::Drawing::Size(116, 20);
			this->txt_Gender->TabIndex = 29;
			// 
			// lbl_Email
			// 
			this->lbl_Email->AutoSize = true;
			this->lbl_Email->Location = System::Drawing::Point(22, 168);
			this->lbl_Email->Name = L"lbl_Email";
			this->lbl_Email->Size = System::Drawing::Size(32, 13);
			this->lbl_Email->TabIndex = 30;
			this->lbl_Email->Text = L"Email";
			// 
			// txt_Email
			// 
			this->txt_Email->BackColor = System::Drawing::Color::White;
			this->txt_Email->Location = System::Drawing::Point(96, 164);
			this->txt_Email->Name = L"txt_Email";
			this->txt_Email->ReadOnly = true;
			this->txt_Email->Size = System::Drawing::Size(120, 20);
			this->txt_Email->TabIndex = 31;
			// 
			// txt_Phone
			// 
			this->txt_Phone->BackColor = System::Drawing::Color::White;
			this->txt_Phone->Location = System::Drawing::Point(333, 164);
			this->txt_Phone->Name = L"txt_Phone";
			this->txt_Phone->ReadOnly = true;
			this->txt_Phone->Size = System::Drawing::Size(120, 20);
			this->txt_Phone->TabIndex = 33;
			// 
			// lbl_Phone
			// 
			this->lbl_Phone->AutoSize = true;
			this->lbl_Phone->Location = System::Drawing::Point(248, 168);
			this->lbl_Phone->Name = L"lbl_Phone";
			this->lbl_Phone->Size = System::Drawing::Size(38, 13);
			this->lbl_Phone->TabIndex = 32;
			this->lbl_Phone->Text = L"Phone";
			// 
			// txt_WeChat
			// 
			this->txt_WeChat->BackColor = System::Drawing::Color::White;
			this->txt_WeChat->Location = System::Drawing::Point(564, 116);
			this->txt_WeChat->Name = L"txt_WeChat";
			this->txt_WeChat->ReadOnly = true;
			this->txt_WeChat->Size = System::Drawing::Size(116, 20);
			this->txt_WeChat->TabIndex = 35;
			// 
			// lbl_WeChat
			// 
			this->lbl_WeChat->AutoSize = true;
			this->lbl_WeChat->Location = System::Drawing::Point(478, 119);
			this->lbl_WeChat->Name = L"lbl_WeChat";
			this->lbl_WeChat->Size = System::Drawing::Size(46, 13);
			this->lbl_WeChat->TabIndex = 34;
			this->lbl_WeChat->Text = L"WeChat";
			// 
			// txt_StfName
			// 
			this->txt_StfName->BackColor = System::Drawing::Color::White;
			this->txt_StfName->Location = System::Drawing::Point(333, 221);
			this->txt_StfName->Name = L"txt_StfName";
			this->txt_StfName->ReadOnly = true;
			this->txt_StfName->Size = System::Drawing::Size(120, 20);
			this->txt_StfName->TabIndex = 37;
			// 
			// lbl_StfName
			// 
			this->lbl_StfName->AutoSize = true;
			this->lbl_StfName->Location = System::Drawing::Point(248, 225);
			this->lbl_StfName->Name = L"lbl_StfName";
			this->lbl_StfName->Size = System::Drawing::Size(60, 13);
			this->lbl_StfName->TabIndex = 36;
			this->lbl_StfName->Text = L"Staff Name";
			// 
			// lbl_error
			// 
			this->lbl_error->AutoSize = true;
			this->lbl_error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_error->ForeColor = System::Drawing::Color::Red;
			this->lbl_error->Location = System::Drawing::Point(477, 438);
			this->lbl_error->Name = L"lbl_error";
			this->lbl_error->Size = System::Drawing::Size(169, 31);
			this->lbl_error->TabIndex = 38;
			this->lbl_error->Text = L"System error";
			this->lbl_error->Visible = false;
			// 
			// btn_DeleteAll
			// 
			this->btn_DeleteAll->ForeColor = System::Drawing::Color::Red;
			this->btn_DeleteAll->Location = System::Drawing::Point(181, 429);
			this->btn_DeleteAll->Name = L"btn_DeleteAll";
			this->btn_DeleteAll->Size = System::Drawing::Size(118, 48);
			this->btn_DeleteAll->TabIndex = 39;
			this->btn_DeleteAll->Text = L"Delete All";
			this->btn_DeleteAll->UseVisualStyleBackColor = true;
			this->btn_DeleteAll->Visible = false;
			this->btn_DeleteAll->Click += gcnew System::EventHandler(this, &OPT::DeleteAllButton_Click);
			// 
			// btn_DeleteConfirm
			// 
			this->btn_DeleteConfirm->ForeColor = System::Drawing::Color::Red;
			this->btn_DeleteConfirm->Location = System::Drawing::Point(25, 429);
			this->btn_DeleteConfirm->Name = L"btn_DeleteConfirm";
			this->btn_DeleteConfirm->Size = System::Drawing::Size(118, 48);
			this->btn_DeleteConfirm->TabIndex = 40;
			this->btn_DeleteConfirm->Text = L"Confirm";
			this->btn_DeleteConfirm->UseVisualStyleBackColor = true;
			this->btn_DeleteConfirm->Visible = false;
			this->btn_DeleteConfirm->Click += gcnew System::EventHandler(this, &OPT::DeleteConfirm_Click);
			// 
			// btn_DeleteCancel
			// 
			this->btn_DeleteCancel->ForeColor = System::Drawing::Color::Red;
			this->btn_DeleteCancel->Location = System::Drawing::Point(332, 429);
			this->btn_DeleteCancel->Name = L"btn_DeleteCancel";
			this->btn_DeleteCancel->Size = System::Drawing::Size(118, 48);
			this->btn_DeleteCancel->TabIndex = 41;
			this->btn_DeleteCancel->Text = L"Cancel";
			this->btn_DeleteCancel->UseVisualStyleBackColor = true;
			this->btn_DeleteCancel->Visible = false;
			this->btn_DeleteCancel->Click += gcnew System::EventHandler(this, &OPT::DeleteCancel_Click);
			// 
			// OPT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 518);
			this->Controls->Add(this->btn_DeleteCancel);
			this->Controls->Add(this->btn_DeleteConfirm);
			this->Controls->Add(this->btn_DeleteAll);
			this->Controls->Add(this->lbl_error);
			this->Controls->Add(this->txt_StfName);
			this->Controls->Add(this->lbl_StfName);
			this->Controls->Add(this->txt_WeChat);
			this->Controls->Add(this->lbl_WeChat);
			this->Controls->Add(this->txt_Phone);
			this->Controls->Add(this->lbl_Phone);
			this->Controls->Add(this->txt_Email);
			this->Controls->Add(this->lbl_Email);
			this->Controls->Add(this->txt_Gender);
			this->Controls->Add(this->lbl_Gender);
			this->Controls->Add(this->txt_MemName);
			this->Controls->Add(this->lbl_MemName);
			this->Controls->Add(this->lbl_PageName);
			this->Controls->Add(this->btn_ChangeCancel);
			this->Controls->Add(this->btn_ChangeConfirm);
			this->Controls->Add(this->btn_ChangeInfo);
			this->Controls->Add(this->txt_CardStartDate);
			this->Controls->Add(this->txt_CardEndDate);
			this->Controls->Add(this->lbl_CardStartDate);
			this->Controls->Add(this->lbl_CardEndDate);
			this->Controls->Add(this->lbl_Position);
			this->Controls->Add(this->lbl_CardNumber);
			this->Controls->Add(this->txt_EndDate);
			this->Controls->Add(this->txt_Title);
			this->Controls->Add(this->txt_Position);
			this->Controls->Add(this->txt_CardNumber);
			this->Controls->Add(this->txt_StartDate);
			this->Controls->Add(this->txt_StfId);
			this->Controls->Add(this->lbl_StfId);
			this->Controls->Add(this->lbl_StartDate);
			this->Controls->Add(this->lbl_EndDate);
			this->Controls->Add(this->lbl_Title);
			this->Controls->Add(this->txt_MemId);
			this->Controls->Add(this->lbl_MemId);
			this->Controls->Add(this->txt_Status);
			this->Controls->Add(this->lbl_Status);
			this->Controls->Add(this->txt_OPTID);
			this->Controls->Add(this->lbl_OPTID);
			this->Name = L"OPT";
			this->Text = L"OPT Info Page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Database^ database;
		int^ Id;
		Void UpdateInfo();
		Void Initialize();
		Void ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void ChangeConfirm_Click(System::Object^ sender, System::EventArgs^ e);
		Void ChangeCancel_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteConfirm_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteCancel_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteAllButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
