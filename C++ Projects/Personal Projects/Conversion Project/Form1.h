#pragma once


namespace ConversionProject1 {

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
	private: System::Windows::Forms::TextBox^  txtChar;
	private: System::Windows::Forms::Button^  ToInt32;
	private: System::Windows::Forms::Button^  ToSingle;
	protected: 

	protected: 


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  txtConvert;
	private: System::Windows::Forms::Button^  button_Clear;

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
			this->txtChar = (gcnew System::Windows::Forms::TextBox());
			this->ToInt32 = (gcnew System::Windows::Forms::Button());
			this->ToSingle = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtConvert = (gcnew System::Windows::Forms::TextBox());
			this->button_Clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtChar
			// 
			this->txtChar->Location = System::Drawing::Point(12, 76);
			this->txtChar->Multiline = true;
			this->txtChar->Name = L"txtChar";
			this->txtChar->Size = System::Drawing::Size(167, 135);
			this->txtChar->TabIndex = 0;
			this->txtChar->TextChanged += gcnew System::EventHandler(this, &Form1::txtChar_TextChanged);
			// 
			// ToInt32
			// 
			this->ToInt32->Location = System::Drawing::Point(194, 14);
			this->ToInt32->Name = L"ToInt32";
			this->ToInt32->Size = System::Drawing::Size(150, 40);
			this->ToInt32->TabIndex = 1;
			this->ToInt32->Text = L"Convert to Integer";
			this->ToInt32->UseVisualStyleBackColor = true;
			this->ToInt32->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// ToSingle
			// 
			this->ToSingle->Location = System::Drawing::Point(194, 64);
			this->ToSingle->Name = L"ToSingle";
			this->ToSingle->Size = System::Drawing::Size(150, 40);
			this->ToSingle->TabIndex = 2;
			this->ToSingle->Text = L"Convert to Float";
			this->ToSingle->UseVisualStyleBackColor = true;
			this->ToSingle->Click += gcnew System::EventHandler(this, &Form1::ToSingle_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(194, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Convert to Double";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(194, 164);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Convert to String";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(194, 214);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Convert to Boolean";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// txtConvert
			// 
			this->txtConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtConvert->Location = System::Drawing::Point(356, 70);
			this->txtConvert->Multiline = true;
			this->txtConvert->Name = L"txtConvert";
			this->txtConvert->Size = System::Drawing::Size(167, 135);
			this->txtConvert->TabIndex = 6;
			// 
			// button_Clear
			// 
			this->button_Clear->Location = System::Drawing::Point(194, 260);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Size = System::Drawing::Size(150, 40);
			this->button_Clear->TabIndex = 7;
			this->button_Clear->Text = L"Clear";
			this->button_Clear->UseVisualStyleBackColor = true;
			this->button_Clear->Click += gcnew System::EventHandler(this, &Form1::button_Clear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 318);
			this->Controls->Add(this->button_Clear);
			this->Controls->Add(this->txtConvert);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->ToSingle);
			this->Controls->Add(this->ToInt32);
			this->Controls->Add(this->txtChar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//page 158 in book
#pragma endregion
		//michael wass
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 char myChar = txtChar->Text[0];
				 int num = Convert::ToInt32(myChar);
				 txtConvert->BackColor = Color::LightSalmon;
				 txtConvert->Text = num.ToString();
			 }

private: System::Void ToSingle_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 char myChar = txtChar->Text[0];
				 int num = Convert::ToSingle(myChar);
				 txtConvert->BackColor = Color::Yellow;
				 txtConvert->Text = num.ToString();
			}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 int intNum;
				 double dblNum;
				 Int32::TryParse(txtChar->Text, intNum);
				 dblNum = Convert::ToDouble(intNum);
				 txtConvert->BackColor = Color::Green;
				 txtConvert->Text = dblNum.ToString();
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			     char myChar = txtChar->Text[0];
				 Convert::ToString(myChar);
				 txtConvert->BackColor = Color::LightBlue;
				 txtConvert->Text = myChar.ToString();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			     char myChar = txtChar->Text[0];
				 int num = Convert::ToBoolean(myChar);
				 txtConvert->BackColor = Color::Pink;
				 //if (txtChar.Text = "") {
				//	 MessageBox(L"Please enter a value",L"Error");
				//	 return;
				// }
				 if (num = 0) {
					 txtConvert->Text  = "False";
					 return;
				 }
				 if (num = 1) {
					 txtConvert->Text  = "True";
					 return;
				 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 button5->BackColor = Color::Pink;
			 button4->BackColor = Color::LightBlue;
			 button3->BackColor = Color::Green;
			 ToSingle->BackColor = Color::Yellow;
			 ToInt32->BackColor = Color::LightSalmon;
		 }
private: System::Void button_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtConvert->Text = "";
			 txtChar->Text = "";
			 txtConvert->BackColor = Color::White;
		 }
private: System::Void txtChar_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

