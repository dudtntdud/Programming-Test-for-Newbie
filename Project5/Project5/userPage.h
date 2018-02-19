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
	/// userPage�� ���� ����Դϴ�.
	/// </summary>
	public ref class userPage : public System::Windows::Forms::Form
	{
	public:
		userPage(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
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
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
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
			this->bt_regVehicle->Text = L"�������";
			this->bt_regVehicle->UseVisualStyleBackColor = true;
			this->bt_regVehicle->Click += gcnew System::EventHandler(this, &userPage::bt_regVehicle_Click);
			// 
			// bt_logout
			// 
			this->bt_logout->Location = System::Drawing::Point(138, 340);
			this->bt_logout->Name = L"bt_logout";
			this->bt_logout->Size = System::Drawing::Size(141, 32);
			this->bt_logout->TabIndex = 5;
			this->bt_logout->Text = L"�α׾ƿ�";
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
