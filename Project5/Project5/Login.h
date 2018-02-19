#pragma once
#include <iostream>
#include <mysql.h>
#include "Register.h"
#include "adminPage.h"
#include "userPage.h"
#include "UserDao.h"
#pragma comment(lib, "libmysql.lib")

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>

	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		UserDao ^ userDao;
		Login(void)
		{
			InitializeComponent();
			userDao = gcnew UserDao();
			passwordText->PasswordChar = '*';
			//passwordText->MaxLength = 10;
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  idText;
	private: System::Windows::Forms::TextBox^  passwordText;
	private: System::Windows::Forms::Button^  confirm;
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::Button^  button1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->idText = (gcnew System::Windows::Forms::TextBox());
			this->passwordText = (gcnew System::Windows::Forms::TextBox());
			this->confirm = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"굴림", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(174, 51);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"로그인";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(29, 160);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"아이디";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"굴림", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(13, 231);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"비밀번호";
			this->label3->Click += gcnew System::EventHandler(this, &Login::label3_Click);
			// 
			// idText
			// 
			this->idText->Location = System::Drawing::Point(116, 157);
			this->idText->Name = L"idText";
			this->idText->Size = System::Drawing::Size(173, 26);
			this->idText->TabIndex = 3;
			// 
			// passwordText
			// 
			this->passwordText->Location = System::Drawing::Point(116, 228);
			this->passwordText->Name = L"passwordText";
			this->passwordText->Size = System::Drawing::Size(173, 26);
			this->passwordText->TabIndex = 4;
			this->passwordText->TextChanged += gcnew System::EventHandler(this, &Login::passwordText_TextChanged);
			// 
			// confirm
			// 
			this->confirm->Location = System::Drawing::Point(315, 155);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(111, 31);
			this->confirm->TabIndex = 5;
			this->confirm->Text = L"확인";
			this->confirm->UseVisualStyleBackColor = true;
			this->confirm->Click += gcnew System::EventHandler(this, &Login::bt_Confirm);
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(315, 224);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(111, 30);
			this->exit->TabIndex = 6;
			this->exit->Text = L"종료";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &Login::bt_exit);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 30);
			this->button1->TabIndex = 7;
			this->button1->Text = L"회원가입";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::bt_signup);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 467);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->confirm);
			this->Controls->Add(this->passwordText);
			this->Controls->Add(this->idText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(129)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->Text = L"로그인 페이지";
			this->Load += gcnew System::EventHandler(this, &Login::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 /* 기능 전부 cpp 파일에 분리 */
			 /* 종료시에 커넥션 종료 필요 */
	private: System::Void bt_Confirm(System::Object^  sender, System::EventArgs^  e) {	
		User^ user = gcnew User();
		user = userDao->get(idText->Text);

		if (!String::Compare(user->getPassword(),passwordText->Text)) {
			
			MessageBox::Show("Log in!");
			user = userDao->get(idText->Text);

			if (!String::Compare(user->getAuth(), "admin")) {
				MessageBox::Show("admin");
				this->Visible = false;
				adminPage^ ap = gcnew adminPage();
				ap->ShowDialog();
				this->Visible = true;
			}
			else if(!String::Compare(user->getAuth(), "valid")){
				this->Visible = false;
				userPage^ up = gcnew userPage();
				up->ShowDialog();
				this->Visible = true;
			}
			else {
				MessageBox::Show("not valid yet");
			}
		}
		else {
			MessageBox::Show("Wrong Account");
		}
	}
	private: System::Void bt_exit(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void passwordText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void bt_signup(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Register^ f2 = gcnew Register();
		f2->ShowDialog();
		this->Visible = true;
	}
};
}
