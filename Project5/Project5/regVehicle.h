#pragma once
#include<mysql.h>

using namespace MySql::Data::MySqlClient;

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// regVehicle에 대한 요약입니다.
	/// </summary>
	public ref class regVehicle : public System::Windows::Forms::Form
	{
	public:
		regVehicle(void)
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
		~regVehicle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_exit;
	private: System::Windows::Forms::ComboBox^  comboBox;
	private: System::Windows::Forms::Label^  lb_carNum;
	private: System::Windows::Forms::Label^  lb_comName;
	private: System::Windows::Forms::Label^  lb_contDate;



	private: System::Windows::Forms::Label^  lb_repName;

	private: System::Windows::Forms::Label^  lb_comTel;
	private: System::Windows::Forms::TextBox^  carNum;
	private: System::Windows::Forms::TextBox^  s_comName;
	private: System::Windows::Forms::TextBox^  s_reName;
	private: System::Windows::Forms::TextBox^  s_comTel;





	private: System::Windows::Forms::Label^  lb_dept;
	private: System::Windows::Forms::TextBox^  r_dept;
	private: System::Windows::Forms::Button^  bt_apply;
	private: System::Windows::Forms::DateTimePicker^  s_contDate;





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
			this->bt_exit = (gcnew System::Windows::Forms::Button());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->lb_carNum = (gcnew System::Windows::Forms::Label());
			this->lb_comName = (gcnew System::Windows::Forms::Label());
			this->lb_contDate = (gcnew System::Windows::Forms::Label());
			this->lb_repName = (gcnew System::Windows::Forms::Label());
			this->lb_comTel = (gcnew System::Windows::Forms::Label());
			this->carNum = (gcnew System::Windows::Forms::TextBox());
			this->s_comName = (gcnew System::Windows::Forms::TextBox());
			this->s_reName = (gcnew System::Windows::Forms::TextBox());
			this->s_comTel = (gcnew System::Windows::Forms::TextBox());
			this->lb_dept = (gcnew System::Windows::Forms::Label());
			this->r_dept = (gcnew System::Windows::Forms::TextBox());
			this->bt_apply = (gcnew System::Windows::Forms::Button());
			this->s_contDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// bt_exit
			// 
			this->bt_exit->Location = System::Drawing::Point(280, 390);
			this->bt_exit->Name = L"bt_exit";
			this->bt_exit->Size = System::Drawing::Size(123, 35);
			this->bt_exit->TabIndex = 0;
			this->bt_exit->Text = L"취소";
			this->bt_exit->UseVisualStyleBackColor = true;
			this->bt_exit->Click += gcnew System::EventHandler(this, &regVehicle::bt_exit_Click);
			// 
			// comboBox
			// 
			this->comboBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox->FormattingEnabled = true;
			this->comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"영업차량", L"정기차량" });
			this->comboBox->Location = System::Drawing::Point(23, 23);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(124, 20);
			this->comboBox->TabIndex = 1;
			this->comboBox->TabStop = false;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &regVehicle::comboBox1_SelectedIndexChanged);
			// 
			// lb_carNum
			// 
			this->lb_carNum->AutoSize = true;
			this->lb_carNum->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lb_carNum->Location = System::Drawing::Point(76, 84);
			this->lb_carNum->Name = L"lb_carNum";
			this->lb_carNum->Size = System::Drawing::Size(72, 16);
			this->lb_carNum->TabIndex = 2;
			this->lb_carNum->Text = L"차량번호";
			// 
			// lb_comName
			// 
			this->lb_comName->AutoSize = true;
			this->lb_comName->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lb_comName->Location = System::Drawing::Point(76, 134);
			this->lb_comName->Name = L"lb_comName";
			this->lb_comName->Size = System::Drawing::Size(72, 16);
			this->lb_comName->TabIndex = 3;
			this->lb_comName->Text = L"회사이름";
			// 
			// lb_contDate
			// 
			this->lb_contDate->AutoSize = true;
			this->lb_contDate->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lb_contDate->Location = System::Drawing::Point(76, 186);
			this->lb_contDate->Name = L"lb_contDate";
			this->lb_contDate->Size = System::Drawing::Size(72, 16);
			this->lb_contDate->TabIndex = 4;
			this->lb_contDate->Text = L"계약기간";
			// 
			// lb_repName
			// 
			this->lb_repName->AutoSize = true;
			this->lb_repName->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lb_repName->Location = System::Drawing::Point(76, 235);
			this->lb_repName->Name = L"lb_repName";
			this->lb_repName->Size = System::Drawing::Size(72, 16);
			this->lb_repName->TabIndex = 5;
			this->lb_repName->Text = L"대표이름";
			// 
			// lb_comTel
			// 
			this->lb_comTel->AutoSize = true;
			this->lb_comTel->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lb_comTel->Location = System::Drawing::Point(76, 284);
			this->lb_comTel->Name = L"lb_comTel";
			this->lb_comTel->Size = System::Drawing::Size(72, 16);
			this->lb_comTel->TabIndex = 6;
			this->lb_comTel->Text = L"전화번호";
			// 
			// carNum
			// 
			this->carNum->Location = System::Drawing::Point(179, 81);
			this->carNum->Name = L"carNum";
			this->carNum->Size = System::Drawing::Size(224, 21);
			this->carNum->TabIndex = 7;
			// 
			// s_comName
			// 
			this->s_comName->Location = System::Drawing::Point(180, 129);
			this->s_comName->Name = L"s_comName";
			this->s_comName->Size = System::Drawing::Size(224, 21);
			this->s_comName->TabIndex = 8;
			// 
			// s_reName
			// 
			this->s_reName->Location = System::Drawing::Point(179, 236);
			this->s_reName->Name = L"s_reName";
			this->s_reName->Size = System::Drawing::Size(224, 21);
			this->s_reName->TabIndex = 10;
			// 
			// s_comTel
			// 
			this->s_comTel->Location = System::Drawing::Point(179, 285);
			this->s_comTel->Name = L"s_comTel";
			this->s_comTel->Size = System::Drawing::Size(224, 21);
			this->s_comTel->TabIndex = 11;
			// 
			// lb_dept
			// 
			this->lb_dept->AutoSize = true;
			this->lb_dept->Font = (gcnew System::Drawing::Font(L"굴림", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->lb_dept->Location = System::Drawing::Point(107, 331);
			this->lb_dept->Name = L"lb_dept";
			this->lb_dept->Size = System::Drawing::Size(40, 16);
			this->lb_dept->TabIndex = 13;
			this->lb_dept->Text = L"소속";
			this->lb_dept->Visible = false;
			// 
			// r_dept
			// 
			this->r_dept->Location = System::Drawing::Point(180, 326);
			this->r_dept->Name = L"r_dept";
			this->r_dept->Size = System::Drawing::Size(224, 21);
			this->r_dept->TabIndex = 14;
			this->r_dept->Visible = false;
			// 
			// bt_apply
			// 
			this->bt_apply->Location = System::Drawing::Point(124, 390);
			this->bt_apply->Name = L"bt_apply";
			this->bt_apply->Size = System::Drawing::Size(123, 35);
			this->bt_apply->TabIndex = 15;
			this->bt_apply->Text = L"신청";
			this->bt_apply->UseVisualStyleBackColor = true;
			this->bt_apply->Click += gcnew System::EventHandler(this, &regVehicle::bt_apply_Click);
			// 
			// s_contDate
			// 
			this->s_contDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->s_contDate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->s_contDate->Location = System::Drawing::Point(180, 184);
			this->s_contDate->Name = L"s_contDate";
			this->s_contDate->Size = System::Drawing::Size(222, 21);
			this->s_contDate->TabIndex = 16;
			// 
			// regVehicle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 454);
			this->Controls->Add(this->s_contDate);
			this->Controls->Add(this->bt_apply);
			this->Controls->Add(this->r_dept);
			this->Controls->Add(this->lb_dept);
			this->Controls->Add(this->s_comTel);
			this->Controls->Add(this->s_reName);
			this->Controls->Add(this->s_comName);
			this->Controls->Add(this->carNum);
			this->Controls->Add(this->lb_comTel);
			this->Controls->Add(this->lb_repName);
			this->Controls->Add(this->lb_contDate);
			this->Controls->Add(this->lb_comName);
			this->Controls->Add(this->lb_carNum);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->bt_exit);
			this->Name = L"regVehicle";
			this->Text = L"regVehicle";
			this->Load += gcnew System::EventHandler(this, &regVehicle::regVehicle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_exit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int^ comboval = comboBox->SelectedIndex;
		
		if (!String::Compare(System::Convert::ToString(comboval), "0")) {
			lb_repName->Text = "대표이름";
			lb_contDate->Text = "계약기간";
			lb_comName->Text = "회사이름";
			lb_comTel->Text = "전화번호";

			r_dept->Visible = false;
			lb_dept->Visible = false;
		}
		else {
			r_dept->Visible = true;
			lb_dept->Visible = true;

			lb_repName->Text = "　　이름";
			lb_contDate->Text = "　　기한";
			lb_comName->Text = "학번/사번";
		}

	}
	private: System::Void regVehicle_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void bt_apply_Click(System::Object^  sender, System::EventArgs^  e) {
		int^ comboval = comboBox->SelectedIndex;

		if (!String::Compare(System::Convert::ToString(comboval), "0")) {
			MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
			MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO sales_vehicle (car_num,company_name,contract_date,representative,company_tel,auth) VALUES ('" + carNum->Text + "','" + s_comName->Text + "','"
				+ s_contDate->Text + "','" + s_reName->Text + "','" + s_comTel->Text + "', 'unvalid')", connection);


			try {
				connection->Open();
				command->ExecuteNonQuery();

				MessageBox::Show("완료");
				carNum->Text = "";
				s_comName->Text = "";
				s_reName->Text = "";
				s_comTel->Text = "";
			}
			catch (MySqlException^ e) {
				MessageBox::Show(e->Message);
			}
		}
		else if(!String::Compare(System::Convert::ToString(comboval), "1")){
			MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;Database=trafficdb;username=root;password=rkdehfdl0#");
			MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO regular_vehicle (car_num,id,contract_date,name,telnum,dept,auth) VALUES ('" + carNum->Text + "','" + s_comName->Text + "','"
				+ s_contDate->Text + "','" + s_reName->Text + "','" + s_comTel->Text + "','" + r_dept->Text + "', 'unvalid')", connection);


			try {
				connection->Open();
				command->ExecuteNonQuery();

				MessageBox::Show("완료");
				carNum->Text = "";
				s_comName->Text = "";
				s_reName->Text = "";
				s_comTel->Text = "";
				r_dept->Text = "";
			}
			catch (MySqlException^ e) {
				MessageBox::Show(e->Message);
			}
		}

		
	}
private: System::Void s_contDate_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
