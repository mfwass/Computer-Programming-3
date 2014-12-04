#pragma once


namespace BinaryConverter1 {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtChar;

	private: System::Windows::Forms::TextBox^  txt32;
	private: System::Windows::Forms::TextBox^  txt1;



	private: System::Windows::Forms::TextBox^  txt64;
	private: System::Windows::Forms::TextBox^  txt4;


	private: System::Windows::Forms::TextBox^  txt8;

	private: System::Windows::Forms::TextBox^  txt16;
	private: System::Windows::Forms::TextBox^  txt2;


	private: System::Windows::Forms::TextBox^  txt128;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::TextBox^  txtDec;
	private: System::Windows::Forms::Button^  button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtChar = (gcnew System::Windows::Forms::TextBox());
			this->txt32 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt64 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->txt16 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt128 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->txtDec = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Binary Conversion Program";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// txtChar
			// 
			this->txtChar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtChar->Location = System::Drawing::Point(43, 50);
			this->txtChar->MaxLength = 1;
			this->txtChar->Name = L"txtChar";
			this->txtChar->Size = System::Drawing::Size(61, 62);
			this->txtChar->TabIndex = 1;
			this->txtChar->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txt32
			// 
			this->txt32->BackColor = System::Drawing::Color::Black;
			this->txt32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt32->ForeColor = System::Drawing::Color::Lime;
			this->txt32->Location = System::Drawing::Point(143, 180);
			this->txt32->Name = L"txt32";
			this->txt32->ReadOnly = true;
			this->txt32->Size = System::Drawing::Size(42, 62);
			this->txt32->TabIndex = 2;
			// 
			// txt1
			// 
			this->txt1->BackColor = System::Drawing::Color::Black;
			this->txt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt1->ForeColor = System::Drawing::Color::Lime;
			this->txt1->Location = System::Drawing::Point(393, 180);
			this->txt1->Name = L"txt1";
			this->txt1->ReadOnly = true;
			this->txt1->Size = System::Drawing::Size(42, 62);
			this->txt1->TabIndex = 3;
			// 
			// txt64
			// 
			this->txt64->BackColor = System::Drawing::Color::Black;
			this->txt64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt64->ForeColor = System::Drawing::Color::Lime;
			this->txt64->Location = System::Drawing::Point(93, 180);
			this->txt64->Name = L"txt64";
			this->txt64->ReadOnly = true;
			this->txt64->Size = System::Drawing::Size(42, 62);
			this->txt64->TabIndex = 4;
			// 
			// txt4
			// 
			this->txt4->BackColor = System::Drawing::Color::Black;
			this->txt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt4->ForeColor = System::Drawing::Color::Lime;
			this->txt4->Location = System::Drawing::Point(293, 180);
			this->txt4->Name = L"txt4";
			this->txt4->ReadOnly = true;
			this->txt4->Size = System::Drawing::Size(42, 62);
			this->txt4->TabIndex = 5;
			// 
			// txt8
			// 
			this->txt8->BackColor = System::Drawing::Color::Black;
			this->txt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt8->ForeColor = System::Drawing::Color::Lime;
			this->txt8->Location = System::Drawing::Point(243, 180);
			this->txt8->Name = L"txt8";
			this->txt8->ReadOnly = true;
			this->txt8->Size = System::Drawing::Size(42, 62);
			this->txt8->TabIndex = 6;
			// 
			// txt16
			// 
			this->txt16->BackColor = System::Drawing::Color::Black;
			this->txt16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt16->ForeColor = System::Drawing::Color::Lime;
			this->txt16->Location = System::Drawing::Point(193, 180);
			this->txt16->Name = L"txt16";
			this->txt16->ReadOnly = true;
			this->txt16->Size = System::Drawing::Size(42, 62);
			this->txt16->TabIndex = 7;
			// 
			// txt2
			// 
			this->txt2->BackColor = System::Drawing::Color::Black;
			this->txt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt2->ForeColor = System::Drawing::Color::Lime;
			this->txt2->Location = System::Drawing::Point(343, 180);
			this->txt2->Name = L"txt2";
			this->txt2->ReadOnly = true;
			this->txt2->Size = System::Drawing::Size(42, 62);
			this->txt2->TabIndex = 8;
			// 
			// txt128
			// 
			this->txt128->BackColor = System::Drawing::Color::Black;
			this->txt128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt128->ForeColor = System::Drawing::Color::Lime;
			this->txt128->Location = System::Drawing::Point(43, 180);
			this->txt128->Name = L"txt128";
			this->txt128->ReadOnly = true;
			this->txt128->Size = System::Drawing::Size(42, 62);
			this->txt128->TabIndex = 9;
			this->txt128->TextChanged += gcnew System::EventHandler(this, &Form1::txt128_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"128";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(358, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(308, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(258, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"8";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(208, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"16";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(158, 164);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"32";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(107, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"64";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(408, 164);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"1";
			// 
			// btnConvert
			// 
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnConvert->Location = System::Drawing::Point(110, 50);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(251, 62);
			this->btnConvert->TabIndex = 18;
			this->btnConvert->Text = L"Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// txtDec
			// 
			this->txtDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDec->Location = System::Drawing::Point(367, 50);
			this->txtDec->MaxLength = 1;
			this->txtDec->Name = L"txtDec";
			this->txtDec->ReadOnly = true;
			this->txtDec->Size = System::Drawing::Size(68, 62);
			this->txtDec->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(106, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 66);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 357);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtDec);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt128);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt16);
			this->Controls->Add(this->txt8);
			this->Controls->Add(this->txt4);
			this->Controls->Add(this->txt64);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->txt32);
			this->Controls->Add(this->txtChar);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Binary Conversion Program";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void txt128_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 txt1->Text = "0";
				 txt2->Text = "0";
				 txt4->Text = "0";
				 txt8->Text = "0";
				 txt16->Text = "0";
				 txt32->Text = "0";
				 txt64->Text = "0";
				 txt128->Text = "0";
				 txtChar->Text = " "; // A single space
		 }
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
			 char myChar = txtChar->Text[0]; //Assigns first character
			 int num = myChar;
			 txtDec->Text = num.ToString();
			 txt128->Text = (num / 128).ToString();
			 num = num % 128;
			 txt64->Text = (num / 64).ToString();
			 num = num % 64;
			 txt32->Text = (num / 32).ToString();
			 num = num % 32;
			 txt16->Text = (num / 16).ToString();
			 num = num % 16;
			 txt8->Text = (num / 8).ToString();
			 num = num % 8;
			 txt4->Text = (num / 4).ToString();
			 num = num % 4;
			 txt2->Text = (num / 2).ToString();
			 txt1->Text = (num % 2).ToString();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 txt1->Text = "0";
			 txt2->Text = "0";
			 txt4->Text = "0";
			 txt8->Text = "0";
			 txt16->Text = "0";
			 txt32->Text = "0";
			 txt64->Text = "0";
			 txt128->Text = "0";
			 txtDec->Text = " "; // A single space
			 txtChar->Text = ""; // A single space
		 }
};
}

