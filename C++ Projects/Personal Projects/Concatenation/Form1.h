#pragma once


namespace Concatenation {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtOutput;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(197, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 23);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(423, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Make String";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->ForeColor = System::Drawing::SystemColors::WindowText;
			this->txtOutput->Location = System::Drawing::Point(21, 119);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(423, 39);
			this->txtOutput->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 166);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Concatenation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//double strOut;
		int acc;
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int letter= textBox1->Text[0] +acc;
				 if (letter < 91 && letter > 64) {
					 //char chr = Convert::ToChar(letter);
					 acc += 1;
					 wchar_t chr = static_cast<wchar_t>(letter);
					 //char chr = Convert::ToChar(letter);
					 txtOutput->Text = txtOutput->Text + chr.ToString();
					 textBox1->Focus();
				 }
				 else { 
					 if (acc == 0) {
						 MessageBox::Show("You cannot enter a number.","ERROR");
						 textBox1->Focus();
					 }
					 if (acc > 0) {
					 MessageBox::Show("You have reached the end of the Alphabet.","ERROR");
					 acc = 0;
					 textBox1->Focus();
					 }
				 }
			 }
};
}

