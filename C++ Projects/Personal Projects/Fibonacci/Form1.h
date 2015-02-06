#pragma once


namespace FibonacciProgram {

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
	private: System::Windows::Forms::Button^  btnGo;
	private: System::Windows::Forms::Button^  btnClear;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::Label^  lblDirections;




	private: System::Windows::Forms::TextBox^  txtNum2;
	private: System::Windows::Forms::TextBox^  txtNum3;
	private: System::Windows::Forms::TextBox^  txtNum4;
	private: System::Windows::Forms::TextBox^  txtNum5;
	private: System::Windows::Forms::TextBox^  txtNum6;
	private: System::Windows::Forms::TextBox^  txtNum7;
	private: System::Windows::Forms::TextBox^  txtNum8;
	private: System::Windows::Forms::TextBox^  txtNum9;
	private: System::Windows::Forms::TextBox^  txtNum10;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  fiboPrevious;
	private: System::Windows::Forms::TextBox^  fiboCurrent;
	private: System::Windows::Forms::TextBox^  fiboNext;
	private: System::Windows::Forms::TextBox^  txtNum11;










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
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->lblDirections = (gcnew System::Windows::Forms::Label());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum3 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum4 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum5 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum6 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum7 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum8 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum9 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum10 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fiboPrevious = (gcnew System::Windows::Forms::TextBox());
			this->fiboCurrent = (gcnew System::Windows::Forms::TextBox());
			this->fiboNext = (gcnew System::Windows::Forms::TextBox());
			this->txtNum11 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnGo
			// 
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGo->Location = System::Drawing::Point(236, 32);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(377, 61);
			this->btnGo->TabIndex = 0;
			this->btnGo->Text = L"GO!";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &Form1::btnGo_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(620, 32);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(147, 61);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(127, 32);
			this->txtInput->MaxLength = 7;
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(103, 61);
			this->txtInput->TabIndex = 2;
			// 
			// lblDirections
			// 
			this->lblDirections->AutoSize = true;
			this->lblDirections->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblDirections->Location = System::Drawing::Point(30, 47);
			this->lblDirections->Name = L"lblDirections";
			this->lblDirections->Size = System::Drawing::Size(85, 26);
			this->lblDirections->TabIndex = 3;
			this->lblDirections->Text = L"Enter a number\r\nand press \"GO!\"";
			this->lblDirections->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtNum2
			// 
			this->txtNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum2->Location = System::Drawing::Point(10, 119);
			this->txtNum2->Multiline = true;
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->ReadOnly = true;
			this->txtNum2->Size = System::Drawing::Size(71, 93);
			this->txtNum2->TabIndex = 5;
			// 
			// txtNum3
			// 
			this->txtNum3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum3->Location = System::Drawing::Point(84, 119);
			this->txtNum3->Multiline = true;
			this->txtNum3->Name = L"txtNum3";
			this->txtNum3->ReadOnly = true;
			this->txtNum3->Size = System::Drawing::Size(71, 93);
			this->txtNum3->TabIndex = 6;
			// 
			// txtNum4
			// 
			this->txtNum4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum4->Location = System::Drawing::Point(160, 119);
			this->txtNum4->Multiline = true;
			this->txtNum4->Name = L"txtNum4";
			this->txtNum4->ReadOnly = true;
			this->txtNum4->Size = System::Drawing::Size(71, 93);
			this->txtNum4->TabIndex = 7;
			// 
			// txtNum5
			// 
			this->txtNum5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum5->Location = System::Drawing::Point(236, 119);
			this->txtNum5->Multiline = true;
			this->txtNum5->Name = L"txtNum5";
			this->txtNum5->ReadOnly = true;
			this->txtNum5->Size = System::Drawing::Size(71, 93);
			this->txtNum5->TabIndex = 8;
			// 
			// txtNum6
			// 
			this->txtNum6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum6->Location = System::Drawing::Point(312, 119);
			this->txtNum6->Multiline = true;
			this->txtNum6->Name = L"txtNum6";
			this->txtNum6->ReadOnly = true;
			this->txtNum6->Size = System::Drawing::Size(71, 93);
			this->txtNum6->TabIndex = 9;
			// 
			// txtNum7
			// 
			this->txtNum7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum7->Location = System::Drawing::Point(388, 119);
			this->txtNum7->Multiline = true;
			this->txtNum7->Name = L"txtNum7";
			this->txtNum7->ReadOnly = true;
			this->txtNum7->Size = System::Drawing::Size(71, 93);
			this->txtNum7->TabIndex = 10;
			// 
			// txtNum8
			// 
			this->txtNum8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum8->Location = System::Drawing::Point(465, 119);
			this->txtNum8->Multiline = true;
			this->txtNum8->Name = L"txtNum8";
			this->txtNum8->ReadOnly = true;
			this->txtNum8->Size = System::Drawing::Size(71, 93);
			this->txtNum8->TabIndex = 11;
			// 
			// txtNum9
			// 
			this->txtNum9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum9->Location = System::Drawing::Point(542, 119);
			this->txtNum9->Multiline = true;
			this->txtNum9->Name = L"txtNum9";
			this->txtNum9->ReadOnly = true;
			this->txtNum9->Size = System::Drawing::Size(71, 93);
			this->txtNum9->TabIndex = 12;
			// 
			// txtNum10
			// 
			this->txtNum10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum10->Location = System::Drawing::Point(620, 119);
			this->txtNum10->Multiline = true;
			this->txtNum10->Name = L"txtNum10";
			this->txtNum10->ReadOnly = true;
			this->txtNum10->Size = System::Drawing::Size(71, 93);
			this->txtNum10->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 14;
			// 
			// fiboPrevious
			// 
			this->fiboPrevious->Location = System::Drawing::Point(84, 244);
			this->fiboPrevious->Multiline = true;
			this->fiboPrevious->Name = L"fiboPrevious";
			this->fiboPrevious->Size = System::Drawing::Size(100, 59);
			this->fiboPrevious->TabIndex = 15;
			// 
			// fiboCurrent
			// 
			this->fiboCurrent->Location = System::Drawing::Point(190, 244);
			this->fiboCurrent->Multiline = true;
			this->fiboCurrent->Name = L"fiboCurrent";
			this->fiboCurrent->Size = System::Drawing::Size(100, 59);
			this->fiboCurrent->TabIndex = 16;
			// 
			// fiboNext
			// 
			this->fiboNext->Location = System::Drawing::Point(296, 244);
			this->fiboNext->Multiline = true;
			this->fiboNext->Name = L"fiboNext";
			this->fiboNext->Size = System::Drawing::Size(100, 59);
			this->fiboNext->TabIndex = 17;
			// 
			// txtNum11
			// 
			this->txtNum11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNum11->Location = System::Drawing::Point(696, 119);
			this->txtNum11->Multiline = true;
			this->txtNum11->Name = L"txtNum11";
			this->txtNum11->ReadOnly = true;
			this->txtNum11->Size = System::Drawing::Size(71, 93);
			this->txtNum11->TabIndex = 18;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(779, 224);
			this->Controls->Add(this->txtNum11);
			this->Controls->Add(this->fiboNext);
			this->Controls->Add(this->fiboCurrent);
			this->Controls->Add(this->fiboPrevious);
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
			this->Controls->Add(this->lblDirections);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnGo);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Fibonacci Program";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int num, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
		int out1, out2, out3, out4, out5, out6, out7, out8, out9;
	private: System::Void btnGo_Click(System::Object^  sender, System::EventArgs^  e) {
				 int PreviousFibo;
				 int CurrentFibo;
				 int NextFibo;
				 Int32::TryParse(fiboPrevious->Text,PreviousFibo);
				 Int32::TryParse(fiboCurrent->Text,CurrentFibo);
				 Int32::TryParse(fiboNext->Text,NextFibo);
				 Int32::TryParse(txtInput->Text,num);
				 if (num > 0) {
					 PreviousFibo = 0;
					 CurrentFibo = 1;
					 while (num > CurrentFibo) {
						 NextFibo = PreviousFibo + CurrentFibo;
						 PreviousFibo = CurrentFibo;//fiboPrevious->Text = CurrentFibo.ToString();
						 CurrentFibo = NextFibo;//fiboCurrent->Text = NextFibo.ToString();
					 }
					 txtNum2->Text = CurrentFibo.ToString();
					 out1 = CurrentFibo+PreviousFibo;
					 txtNum3->Text= out1.ToString();
					 Int32::TryParse(txtNum2->Text,num2);
					 Int32::TryParse(txtNum3->Text,num3);
					 out2 = num2 + num3;
					 txtNum4->Text= out2.ToString();
					 Int32::TryParse(txtNum4->Text,num4);
					 out3 = num3 + num4;
					 txtNum5->Text= out3.ToString();
					 Int32::TryParse(txtNum5->Text,num5);
					 out4 = num4 + num5;
					 txtNum6->Text= out4.ToString();
					 Int32::TryParse(txtNum6->Text,num6);
					 out5 = num5 + num6;
					 txtNum7->Text= out5.ToString();
					 Int32::TryParse(txtNum7->Text,num7);
					 out6 = num6 + num7;
					 txtNum8->Text= out6.ToString();
					 Int32::TryParse(txtNum8->Text,num8);
					 out7 = num7 + num8;
					 txtNum9->Text= out7.ToString();
					 Int32::TryParse(txtNum9->Text,num9);
					 out8 = num8 + num9;
					 txtNum10->Text= out8.ToString();
					 Int32::TryParse(txtNum10->Text,num10);
					 out9 = num9 + num10;
					 txtNum11->Text= out9.ToString();
				 }
				 else {
					 num = 0;
					 num1 = 0;
					 num2 = 0;
					 num3 = 0;
					 num4 = 0;
					 num5 = 0;
					 num6 = 0;
					 num7 = 0;
					 num8 = 0;
					 num9 = 0;
					 num10 = 0;
					 num11 = 0;
					 out1 = 0;
					 out2 = 0;
					 out3 = 0;
					 out4 = 0;
					 out5 = 0;
					 out6 = 0;
					 out7 = 0;
					 out8 = 0;
					 out9 = 0;
					 txtNum2->Clear();
					 txtNum3->Clear();
					 txtNum4->Clear();
					 txtNum5->Clear();
					 txtNum6->Clear();
					 txtNum7->Clear();
					 txtNum8->Clear();
					 txtNum9->Clear();
					 txtNum10->Clear();
					 txtNum11->Clear();
					 txtInput->Clear();
					 MessageBox::Show(L"Oops.. there was a problem with your input. Try again.",L"ERROR");
					 txtInput->Clear();
					 txtInput->Focus();
				 }
			 }
		private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
					 num = 0;
					 num1 = 0;
					 num2 = 0;
					 num3 = 0;
					 num4 = 0;
					 num5 = 0;
					 num6 = 0;
					 num7 = 0;
					 num8 = 0;
					 num9 = 0;
					 num10 = 0;
					 num11 = 0;
					 out1 = 0;
					 out2 = 0;
					 out3 = 0;
					 out4 = 0;
					 out5 = 0;
					 out6 = 0;
					 out7 = 0;
					 out8 = 0;
					 out9 = 0;
					 txtNum2->Clear();
					 txtNum3->Clear();
					 txtNum4->Clear();
					 txtNum5->Clear();
					 txtNum6->Clear();
					 txtNum7->Clear();
					 txtNum8->Clear();
					 txtNum9->Clear();
					 txtNum10->Clear();
					 txtNum11->Clear();
					 txtInput->Clear();
					 MessageBox::Show(L"Clear Successful",L"Success");
					 txtInput->Focus();
				 }
};
}

