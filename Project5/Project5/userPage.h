#pragma once
#include "regVehicle.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// userPage에 대한 요약입니다.
	/// </summary>
	public ref class userPage : public System::Windows::Forms::Form
	{
	public:
		userPage(void)
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
		~userPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_regVehicle;
	private: System::Windows::Forms::Button^  bt_logout;
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
			this->bt_regVehicle = (gcnew System::Windows::Forms::Button());
			this->bt_logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_regVehicle
			// 
			this->bt_regVehicle->Location = System::Drawing::Point(55, 125);
			this->bt_regVehicle->Name = L"bt_regVehicle";
			this->bt_regVehicle->Size = System::Drawing::Size(123, 42);
			this->bt_regVehicle->TabIndex = 0;
			this->bt_regVehicle->Text = L"차량등록";
			this->bt_regVehicle->UseVisualStyleBackColor = true;
			this->bt_regVehicle->Click += gcnew System::EventHandler(this, &userPage::bt_regVehicle_Click);
			// 
			// bt_logout
			// 
			this->bt_logout->Location = System::Drawing::Point(138, 340);
			this->bt_logout->Name = L"bt_logout";
			this->bt_logout->Size = System::Drawing::Size(141, 32);
			this->bt_logout->TabIndex = 5;
			this->bt_logout->Text = L"로그아웃";
			this->bt_logout->UseVisualStyleBackColor = true;
			this->bt_logout->Click += gcnew System::EventHandler(this, &userPage::bt_logout_Click);
			// 
			// userPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 422);
			this->Controls->Add(this->bt_logout);
			this->Controls->Add(this->bt_regVehicle);
			this->Name = L"userPage";
			this->Text = L"userPage";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_regVehicle_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		regVehicle^ regV = gcnew regVehicle();
		regV->ShowDialog();
		this->Visible = true;
	}
	private: System::Void bt_logout_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
