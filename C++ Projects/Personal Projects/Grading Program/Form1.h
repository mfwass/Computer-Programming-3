#pragma once


namespace GradingProgram {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnGrade;
	protected: 
	private: System::Windows::Forms::TextBox^  txtScore;
	private: System::Windows::Forms::TextBox^  txtGrade;

	private: System::Windows::Forms::TextBox^  OverallAverage;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  hiddenBox;
	private: System::Windows::Forms::TextBox^  hiddenBox2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnGrade = (gcnew System::Windows::Forms::Button());
			this->txtScore = (gcnew System::Windows::Forms::TextBox());
			this->txtGrade = (gcnew System::Windows::Forms::TextBox());
			this->OverallAverage = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->hiddenBox = (gcnew System::Windows::Forms::TextBox());
			this->hiddenBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnGrade
			// 
			this->btnGrade->Location = System::Drawing::Point(192, 20);
			this->btnGrade->Name = L"btnGrade";
			this->btnGrade->Size = System::Drawing::Size(165, 113);
			this->btnGrade->TabIndex = 0;
			this->btnGrade->Text = L"Grade";
			this->btnGrade->UseVisualStyleBackColor = true;
			this->btnGrade->Click += gcnew System::EventHandler(this, &Form1::btnGrade_Click);
			// 
			// txtScore
			// 
			this->txtScore->Location = System::Drawing::Point(32, 20);
			this->txtScore->Multiline = true;
			this->txtScore->Name = L"txtScore";
			this->txtScore->Size = System::Drawing::Size(138, 171);
			this->txtScore->TabIndex = 1;
			// 
			// txtGrade
			// 
			this->txtGrade->Location = System::Drawing::Point(395, 20);
			this->txtGrade->Multiline = true;
			this->txtGrade->Name = L"txtGrade";
			this->txtGrade->Size = System::Drawing::Size(116, 72);
			this->txtGrade->TabIndex = 2;
			// 
			// OverallAverage
			// 
			this->OverallAverage->Location = System::Drawing::Point(395, 111);
			this->OverallAverage->Multiline = true;
			this->OverallAverage->Name = L"OverallAverage";
			this->OverallAverage->Size = System::Drawing::Size(116, 80);
			this->OverallAverage->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(192, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 52);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// hiddenBox
			// 
			this->hiddenBox->Location = System::Drawing::Point(539, 93);
			this->hiddenBox->Name = L"hiddenBox";
			this->hiddenBox->ReadOnly = true;
			this->hiddenBox->Size = System::Drawing::Size(17, 20);
			this->hiddenBox->TabIndex = 6;
			this->hiddenBox->Visible = false;
			// 
			// hiddenBox2
			// 
			this->hiddenBox2->Location = System::Drawing::Point(517, 93);
			this->hiddenBox2->Name = L"hiddenBox2";
			this->hiddenBox2->ReadOnly = true;
			this->hiddenBox2->Size = System::Drawing::Size(16, 20);
			this->hiddenBox2->TabIndex = 7;
			this->hiddenBox2->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 212);
			this->Controls->Add(this->hiddenBox2);
			this->Controls->Add(this->hiddenBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->OverallAverage);
			this->Controls->Add(this->txtGrade);
			this->Controls->Add(this->txtScore);
			this->Controls->Add(this->btnGrade);
			this->Name = L"Form1";
			this->Text = L"Grade Assignment Program";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int score;
	int count;
	int total;
	int ave;

private: System::Void btnGrade_Click(System::Object^  sender, System::EventArgs^  e) {
				 Int32::TryParse(txtScore->Text,score);
				 count = (count+1);
				 total = total + score;
				 hiddenBox->Text=total.ToString();
				 ave = total/count;
				 OverallAverage->Text = ave.ToString();
				 if (ave >= 101)
				 {
					 txtGrade->Text = "Score cannot be greater than 100.";
			     	 txtGrade->BackColor = Color::Red;
				 }
				 if (ave >=70 && ave <= 100)
				 {
					 txtGrade->Text = "Pass";
			     	 txtGrade->BackColor = Color::Green;
				 }
				 if (ave <= 69 && ave >= 0)
				 {
					 txtGrade->Text = "Fail";
					 txtGrade->BackColor = Color::Red;
				 }
				 if (ave <= -1)
				 {
					 txtGrade->Text = "You cannot have a negative score.";
					 txtGrade->BackColor = Color::Red;
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtScore->Text = "";
				 OverallAverage->Text = "";
				 txtGrade->BackColor = Color::White;
				 txtGrade->Text = "";
				 ave = 0;
				 count = 0;
				 total = 0;
				 score = 0;
			 }
};
}

