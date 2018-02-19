#pragma once
#include "UserDao.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// MyForm2에 대한 요약입니다.
	/// </summary>

	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		UserDao^ userDao;
		Register(void)
		{
			InitializeComponent();
			userDao = gcnew UserDao();
			rg_passwordText->PasswordChar = '*';
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}


	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_exit;
	private: System::Windows::Forms::Button^  bt_confirm;
	private: System::Windows::Forms::TextBox^  rg_nameText;
	private: System::Windows::Forms::TextBox^  rg_idText;

	private: System::Windows::Forms::TextBox^  rg_passwordText;
	private: System::Windows::Forms::TextBox^  rg_telnumText;
	private: System::Windows::Forms::Label^  nameText;
	private: System::Windows::Forms::Label^  telnumText;
	private: System::Windows::Forms::Label^  passwordText;
	private: System::Windows::Forms::Label^  idText;
	private: System::Windows::Forms::Label^  label1;


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
			this->bt_exit = (gcnew System::Windows::Forms::Button());
			this->bt_confirm = (gcnew System::Windows::Forms::Button());
			this->rg_nameText = (gcnew System::Windows::Forms::TextBox());
			this->rg_idText = (gcnew System::Windows::Forms::TextBox());
			this->rg_passwordText = (gcnew System::Windows::Forms::TextBox());
			this->rg_telnumText = (gcnew System::Windows::Forms::TextBox());
			this->nameText = (gcnew System::Windows::Forms::Label());
			this->telnumText = (gcnew System::Windows::Forms::Label());
			this->passwordText = (gcnew System::Windows::Forms::Label());
			this->idText = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_exit
			// 
			this->bt_exit->Location = System::Drawing::Point(301, 311);
			this->bt_exit->Name = L"bt_exit";
			this->bt_exit->Size = System::Drawing::Size(83, 28);
			this->bt_exit->TabIndex = 0;
			this->bt_exit->Text = L"종료";
			this->bt_exit->UseVisualStyleBackColor = true;
			this->bt_exit->Click += gcnew System::EventHandler(this, &Register::rg_bt_exit);
			// 
			// bt_confirm
			// 
			this->bt_confirm->Location = System::Drawing::Point(207, 311);
			this->bt_confirm->Name = L"bt_confirm";
			this->bt_confirm->Size = System::Drawing::Size(83, 28);
			this->bt_confirm->TabIndex = 1;
			this->bt_confirm->Text = L"확인";
			this->bt_confirm->UseVisualStyleBackColor = true;
			this->bt_confirm->Click += gcnew System::EventHandler(this, &Register::bt_confirm_Click);
			// 
			// rg_nameText
			// 
			this->rg_nameText->Location = System::Drawing::Point(153, 88);
			this->rg_nameText->Name = L"rg_nameText";
			this->rg_nameText->Size = System::Drawing::Size(177, 21);
			this->rg_nameText->TabIndex = 2;
			// 
			// rg_idText
			// 
			this->rg_idText->Location = System::Drawing::Point(153, 140);
			this->rg_idText->Name = L"rg_idText";
			this->rg_idText->Size = System::Drawing::Size(177, 21);
			this->rg_idText->TabIndex = 3;
			this->rg_idText->TextChanged += gcnew System::EventHandler(this, &Register::textBox2_TextChanged);
			// 
			// rg_passwordText
			// 
			this->rg_passwordText->Location = System::Drawing::Point(153, 192);
			this->rg_passwordText->Name = L"rg_passwordText";
			this->rg_passwordText->Size = System::Drawing::Size(177, 21);
			this->rg_passwordText->TabIndex = 4;
			// 
			// rg_telnumText
			// 
			this->rg_telnumText->Location = System::Drawing::Point(153, 242);
			this->rg_telnumText->Name = L"rg_telnumText";
			this->rg_telnumText->Size = System::Drawing::Size(177, 21);
			this->rg_telnumText->TabIndex = 5;
			// 
			// nameText
			// 
			this->nameText->AutoSize = true;
			this->nameText->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->nameText->Location = System::Drawing::Point(70, 85);
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(47, 19);
			this->nameText->TabIndex = 6;
			this->nameText->Text = L"이름";
			this->nameText->Click += gcnew System::EventHandler(this, &Register::nameText_Click);
			// 
			// telnumText
			// 
			this->telnumText->AutoSize = true;
			this->telnumText->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->telnumText->Location = System::Drawing::Point(52, 239);
			this->telnumText->Name = L"telnumText";
			this->telnumText->Size = System::Drawing::Size(85, 19);
			this->telnumText->TabIndex = 7;
			this->telnumText->Text = L"전화번호";
			// 
			// passwordText
			// 
			this->passwordText->AutoSize = true;
			this->passwordText->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->passwordText->Location = System::Drawing::Point(52, 189);
			this->passwordText->Name = L"passwordText";
			this->passwordText->Size = System::Drawing::Size(85, 19);
			this->passwordText->TabIndex = 8;
			this->passwordText->Text = L"비밀번호";
			// 
			// idText
			// 
			this->idText->AutoSize = true;
			this->idText->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->idText->Location = System::Drawing::Point(52, 137);
			this->idText->Name = L"idText";
			this->idText->Size = System::Drawing::Size(93, 19);
			this->idText->TabIndex = 9;
			this->idText->Text = L"학번/사번";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"굴림", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(158, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"회원가입";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 372);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->idText);
			this->Controls->Add(this->passwordText);
			this->Controls->Add(this->telnumText);
			this->Controls->Add(this->nameText);
			this->Controls->Add(this->rg_telnumText);
			this->Controls->Add(this->rg_passwordText);
			this->Controls->Add(this->rg_idText);
			this->Controls->Add(this->rg_nameText);
			this->Controls->Add(this->bt_confirm);
			this->Controls->Add(this->bt_exit);
			this->Name = L"Register";
			this->Text = L"회원가입";
			this->Load += gcnew System::EventHandler(this, &Register::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bt_confirm_Click(System::Object^  sender, System::EventArgs^  e) {
		
		User^ user = gcnew User();
		user->setName(rg_nameText->Text);
		user->setId(rg_idText->Text);
		user->setPassword(rg_passwordText->Text);
		user->setTelnum(rg_telnumText->Text);
		user->setAuth("unvalid");
		
		userDao->add(user);
		
		/* 공백 처리가 안되어있음 */

		if(String::Compare(user->getId(),"")){
			MessageBox::Show("Welcome " + user->getName() + "!");
			this->Close();
		}
		else {
			MessageBox::Show("error");
		}
		

	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void rg_bt_exit(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void nameText_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
