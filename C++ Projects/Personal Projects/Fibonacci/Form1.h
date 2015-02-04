#pragma once


namespace Fibonacci {

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
	private: System::Windows::Forms::TextBox^  txtStartNum;
	private: System::Windows::Forms::TextBox^  txtNum1;
	private: System::Windows::Forms::TextBox^  txtNum2;
	private: System::Windows::Forms::TextBox^  txtNum4;
	protected: 




	private: System::Windows::Forms::TextBox^  txtNum3;
	private: System::Windows::Forms::TextBox^  txtNum6;


	private: System::Windows::Forms::TextBox^  txtNum5;
	private: System::Windows::Forms::TextBox^  txtNum8;


	private: System::Windows::Forms::TextBox^  txtNum7;
	private: System::Windows::Forms::TextBox^  txtNum10;


	private: System::Windows::Forms::TextBox^  txtNum9;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnStart;

	protected: 

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
			this->txtStartNum = (gcnew System::Windows::Forms::TextBox());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum4 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum3 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum6 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum5 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum8 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum7 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum10 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtStartNum
			// 
			this->txtStartNum->Location = System::Drawing::Point(150, 16);
			this->txtStartNum->Multiline = true;
			this->txtStartNum->Name = L"txtStartNum";
			this->txtStartNum->Size = System::Drawing::Size(63, 57);
			this->txtStartNum->TabIndex = 0;
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(12, 86);
			this->txtNum1->Multiline = true;
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(63, 84);
			this->txtNum1->TabIndex = 1;
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(81, 86);
			this->txtNum2->Multiline = true;
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(63, 84);
			this->txtNum2->TabIndex = 2;
			// 
			// txtNum4
			// 
			this->txtNum4->Location = System::Drawing::Point(219, 86);
			this->txtNum4->Multiline = true;
			this->txtNum4->Name = L"txtNum4";
			this->txtNum4->Size = System::Drawing::Size(63, 84);
			this->txtNum4->TabIndex = 4;
			// 
			// txtNum3
			// 
			this->txtNum3->Location = System::Drawing::Point(150, 86);
			this->txtNum3->Multiline = true;
			this->txtNum3->Name = L"txtNum3";
			this->txtNum3->Size = System::Drawing::Size(63, 84);
			this->txtNum3->TabIndex = 3;
			// 
			// txtNum6
			// 
			this->txtNum6->Location = System::Drawing::Point(357, 86);
			this->txtNum6->Multiline = true;
			this->txtNum6->Name = L"txtNum6";
			this->txtNum6->Size = System::Drawing::Size(63, 84);
			this->txtNum6->TabIndex = 6;
			// 
			// txtNum5
			// 
			this->txtNum5->Location = System::Drawing::Point(288, 86);
			this->txtNum5->Multiline = true;
			this->txtNum5->Name = L"txtNum5";
			this->txtNum5->Size = System::Drawing::Size(63, 84);
			this->txtNum5->TabIndex = 5;
			// 
			// txtNum8
			// 
			this->txtNum8->Location = System::Drawing::Point(495, 86);
			this->txtNum8->Multiline = true;
			this->txtNum8->Name = L"txtNum8";
			this->txtNum8->Size = System::Drawing::Size(63, 84);
			this->txtNum8->TabIndex = 8;
			// 
			// txtNum7
			// 
			this->txtNum7->Location = System::Drawing::Point(426, 86);
			this->txtNum7->Multiline = true;
			this->txtNum7->Name = L"txtNum7";
			this->txtNum7->Size = System::Drawing::Size(63, 84);
			this->txtNum7->TabIndex = 7;
			// 
			// txtNum10
			// 
			this->txtNum10->Location = System::Drawing::Point(633, 86);
			this->txtNum10->Multiline = true;
			this->txtNum10->Name = L"txtNum10";
			this->txtNum10->Size = System::Drawing::Size(63, 84);
			this->txtNum10->TabIndex = 10;
			// 
			// txtNum9
			// 
			this->txtNum9->Location = System::Drawing::Point(564, 86);
			this->txtNum9->Multiline = true;
			this->txtNum9->Name = L"txtNum9";
			this->txtNum9->Size = System::Drawing::Size(63, 84);
			this->txtNum9->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 26);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Enter a number\r\nto start";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(220, 16);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(476, 57);
			this->btnStart->TabIndex = 12;
			this->btnStart->Text = L"GO!";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 212);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNum10);
			this->Controls->Add(this->txtNum9);
			this->Controls->Add(this->txtNum8);
			this->Controls->Add(this->txtNum7);
			this->Controls->Add(this->txtNum6);
			this->Controls->Add(this->txtNum5);
			this->Controls->Add(this->txtNum4);
			this->Controls->Add(this->txtNum3);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->txtStartNum);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int num, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
		int out1, out2, out3, out4, out5, out6, out7, out8, out9;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Int32::TryParse(txtStartNum->Text,num);
				 if (num > 0) {
					 txtNum1->Text = txtStartNum->Text;
					 Int32::TryParse(txtStartNum->Text,num);
					 Int32::TryParse(txtNum1->Text,num1);
					 out1 = num + num;
					 txtNum2->Text= out1.ToString();
					 Int32::TryParse(txtNum2->Text,num2);
					 out2 = out1 + num1;
					 txtNum3->Text= out2.ToString();
					 Int32::TryParse(txtNum3->Text,num3);
					 out3 = out2 + num2;
					 txtNum4->Text= out3.ToString();
					 Int32::TryParse(txtNum4->Text,num4);
					 out4 = out3 + num3;
					 txtNum5->Text= out4.ToString();
					 Int32::TryParse(txtNum5->Text,num5);
					 out5 = out4 + num4;
					 txtNum6->Text= out5.ToString();
					 Int32::TryParse(txtNum6->Text,num6);
					 out6 = out5 + num5;
					 txtNum7->Text= out6.ToString();
					 Int32::TryParse(txtNum7->Text,num7);
					 out7 = out6 + num6;
					 txtNum8->Text= out7.ToString();
					 Int32::TryParse(txtNum8->Text,num8);
					 out8 = out7 + num7;
					 txtNum9->Text= out8.ToString();
					 Int32::TryParse(txtNum9->Text,num9);
					 out9 = out8 + num8;
					 txtNum10->Text= out9.ToString();
				 }
				 else {
					 txtNum1->Text="ERROR";
					 txtNum2->Text="ERROR";
					 txtNum3->Text="ERROR";
					 txtNum4->Text="ERROR";
					 txtNum5->Text="ERROR";
					 txtNum6->Text="ERROR";
					 txtNum7->Text="ERROR";
					 txtNum8->Text="ERROR";
					 txtNum9->Text="ERROR";
					 txtNum10->Text="ERROR";
					 MessageBox::Show(L"You must enter a value greater than 0",L"ERROR");
					 txtStartNum->Focus();

				 }
			 }
};
}

