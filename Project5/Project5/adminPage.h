#pragma once
#include "Information.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// adminPage에 대한 요약입니다.
	/// </summary>
	public ref class adminPage : public System::Windows::Forms::Form
	{
	public:
		adminPage(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~adminPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(79, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"회원 정보 관리";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminPage::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(79, 218);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"차량 정보 관리";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(285, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"차량 승인 요청";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(186, 330);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 32);
			this->button5->TabIndex = 4;
			this->button5->Text = L"로그아웃";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &adminPage::logout);
			// 
			// adminPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 404);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"adminPage";
			this->Text = L"adminPage";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Information^ inform = gcnew Information();
		inform->ShowDialog();
		this->Visible = true;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void logout(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
