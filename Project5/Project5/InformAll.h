#pragma once
#include "UserDao.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// InformAll에 대한 요약입니다.
	/// </summary>
	public ref class InformAll : public System::Windows::Forms::Form
	{
	public:
		UserDao ^ userDao;
		InformAll(void)
		{
			InitializeComponent();
			userDao = gcnew UserDao();
			userDao->getAll(dataGridView1);
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~InformAll()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Button^  bt_exit;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bt_exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(69, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(606, 465);
			this->dataGridView1->TabIndex = 0;
			// 
			// bt_exit
			// 
			this->bt_exit->Location = System::Drawing::Point(654, 496);
			this->bt_exit->Name = L"bt_exit";
			this->bt_exit->Size = System::Drawing::Size(85, 37);
			this->bt_exit->TabIndex = 1;
			this->bt_exit->Text = L"종료";
			this->bt_exit->UseVisualStyleBackColor = true;
			this->bt_exit->Click += gcnew System::EventHandler(this, &InformAll::bt_exit_Click);
			// 
			// InformAll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 545);
			this->Controls->Add(this->bt_exit);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"InformAll";
			this->Text = L"InformAll";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void bt_exit_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
	};
}
