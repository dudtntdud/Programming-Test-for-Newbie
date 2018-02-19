#pragma once
#include "UserDao.h"
#include "InformAll.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Information에 대한 요약입니다.
	/// </summary>
	public ref class Information : public System::Windows::Forms::Form
	{
	public:
		bool toggle;
	private: System::Windows::Forms::Button^  searchAll;
	private: System::Windows::Forms::ComboBox^  authBox;
	public:
		User ^ user;
		Information(void)
		{
			InitializeComponent();
			toggle = false;
			user = gcnew User();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Information()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  nameText;
	private: System::Windows::Forms::TextBox^  idText;
	private: System::Windows::Forms::TextBox^  telText;

	protected:




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  searchText;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  bt_update;
	private: System::Windows::Forms::Button^  bt_delete;
	private: System::Windows::Forms::Button^  bt_back;

	protected:

	protected:


	protected:






	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->idText = (gcnew System::Windows::Forms::TextBox());
			this->telText = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->searchText = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bt_update = (gcnew System::Windows::Forms::Button());
			this->bt_delete = (gcnew System::Windows::Forms::Button());
			this->bt_back = (gcnew System::Windows::Forms::Button());
			this->searchAll = (gcnew System::Windows::Forms::Button());
			this->authBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// nameText
			// 
			this->nameText->Location = System::Drawing::Point(172, 179);
			this->nameText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nameText->Name = L"nameText";
			this->nameText->ReadOnly = true;
			this->nameText->Size = System::Drawing::Size(170, 21);
			this->nameText->TabIndex = 0;
			// 
			// idText
			// 
			this->idText->Location = System::Drawing::Point(172, 223);
			this->idText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->idText->Name = L"idText";
			this->idText->ReadOnly = true;
			this->idText->Size = System::Drawing::Size(170, 21);
			this->idText->TabIndex = 1;
			// 
			// telText
			// 
			this->telText->Location = System::Drawing::Point(172, 270);
			this->telText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->telText->Name = L"telText";
			this->telText->ReadOnly = true;
			this->telText->Size = System::Drawing::Size(170, 21);
			this->telText->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(79, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"이름";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(58, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"학번/사번";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(58, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"전화번호";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(79, 317);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 21);
			this->label4->TabIndex = 7;
			this->label4->Text = L"권한";
			// 
			// searchText
			// 
			this->searchText->Location = System::Drawing::Point(172, 84);
			this->searchText->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchText->Name = L"searchText";
			this->searchText->Size = System::Drawing::Size(175, 21);
			this->searchText->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->Location = System::Drawing::Point(66, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"학번/사번";
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(360, 84);
			this->search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(80, 20);
			this->search->TabIndex = 10;
			this->search->Text = L"조회";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &Information::search_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"굴림", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(187, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"회원조회하기";
			// 
			// bt_update
			// 
			this->bt_update->Location = System::Drawing::Point(386, 219);
			this->bt_update->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_update->Name = L"bt_update";
			this->bt_update->Size = System::Drawing::Size(84, 28);
			this->bt_update->TabIndex = 12;
			this->bt_update->Text = L"수정";
			this->bt_update->UseVisualStyleBackColor = true;
			this->bt_update->Click += gcnew System::EventHandler(this, &Information::bt_update_Click);
			// 
			// bt_delete
			// 
			this->bt_delete->Location = System::Drawing::Point(386, 264);
			this->bt_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_delete->Name = L"bt_delete";
			this->bt_delete->Size = System::Drawing::Size(84, 28);
			this->bt_delete->TabIndex = 13;
			this->bt_delete->Text = L"삭제";
			this->bt_delete->UseVisualStyleBackColor = true;
			this->bt_delete->Click += gcnew System::EventHandler(this, &Information::bt_delete_Click);
			// 
			// bt_back
			// 
			this->bt_back->Location = System::Drawing::Point(386, 309);
			this->bt_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_back->Name = L"bt_back";
			this->bt_back->Size = System::Drawing::Size(84, 28);
			this->bt_back->TabIndex = 14;
			this->bt_back->Text = L"종료";
			this->bt_back->UseVisualStyleBackColor = true;
			this->bt_back->Click += gcnew System::EventHandler(this, &Information::bt_back_Click);
			// 
			// searchAll
			// 
			this->searchAll->Location = System::Drawing::Point(386, 175);
			this->searchAll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchAll->Name = L"searchAll";
			this->searchAll->Size = System::Drawing::Size(84, 28);
			this->searchAll->TabIndex = 15;
			this->searchAll->Text = L"전체조회";
			this->searchAll->UseVisualStyleBackColor = true;
			this->searchAll->Click += gcnew System::EventHandler(this, &Information::searchAll_Click);
			// 
			// authBox
			// 
			this->authBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->authBox->Enabled = false;
			this->authBox->FormattingEnabled = true;
			this->authBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"admin", L"vaild", L"unvaild" });
			this->authBox->Location = System::Drawing::Point(172, 317);
			this->authBox->Name = L"authBox";
			this->authBox->Size = System::Drawing::Size(170, 20);
			this->authBox->TabIndex = 16;
			// 
			// Information
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 410);
			this->Controls->Add(this->authBox);
			this->Controls->Add(this->searchAll);
			this->Controls->Add(this->bt_back);
			this->Controls->Add(this->bt_delete);
			this->Controls->Add(this->bt_update);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->search);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->searchText);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->telText);
			this->Controls->Add(this->idText);
			this->Controls->Add(this->nameText);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Information";
			this->Text = L"Information";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
		UserDao^ userDao = gcnew UserDao();
		

		user = userDao->get(searchText->Text);

		nameText->Text = user->getName();
		idText->Text = user->getId();
		telText->Text = user->getTelnum();
		//authBox->SelectedText = user->getAuth();
		if (!String::Compare(user->getAuth(), "admin")) {
			authBox->SelectedIndex = 0;
		}
		else if (!String::Compare(user->getAuth(), "valid")) {
			authBox->SelectedIndex = 1;
		}
		else {
			authBox->SelectedIndex = 2;
		}
		

	}
private: System::Void bt_back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void bt_update_Click(System::Object^  sender, System::EventArgs^  e) {

	/* 공백제거 해야함 */
	if (String::Compare(nameText->Text, "") && String::Compare(idText->Text, "")) {
		if (toggle == false) {
			nameText->ReadOnly = toggle;
			telText->ReadOnly = toggle;
			authBox->Enabled = !toggle;
			toggle = true;
		}
		else {
			UserDao^ userDao = gcnew UserDao();
			
			user->setName(nameText->Text);
			user->setTelnum(telText->Text);
			user->setAuth(authBox->Text);

			userDao->update(user);
			nameText->ReadOnly = toggle;
			telText->ReadOnly = toggle;
			authBox->Enabled = !toggle;
			toggle = false;
		}
	}
	
}
	private: System::Void bt_delete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!String::Compare(user->getAuth(), "admin")) {
			MessageBox::Show("You can't delete Admin account!");
		}
		else {
			UserDao^ userDao = gcnew UserDao();
			userDao->remove(user->getId());

			searchText->Text = "";
			nameText->Text = "";
			idText->Text = "";
			telText->Text = "";
			authBox->Text = "";
		}
		
	}
	private: System::Void searchAll_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		InformAll^ informAll = gcnew InformAll();
		informAll->ShowDialog();
		this->Visible = true;
	}
};
}
