#pragma once


namespace Encryptor {

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
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::Button^  btnEncrypt;
	private: System::Windows::Forms::Button^  btnDecrypt;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::TextBox^  txtShift;
	private: System::Windows::Forms::Label^  lblShift;


	protected: 

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
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnEncrypt = (gcnew System::Windows::Forms::Button());
			this->btnDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->txtShift = (gcnew System::Windows::Forms::TextBox());
			this->lblShift = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtInput->Location = System::Drawing::Point(12, 25);
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(202, 56);
			this->txtInput->TabIndex = 0;
			// 
			// txtOutput
			// 
			this->txtOutput->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtOutput->Location = System::Drawing::Point(16, 143);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(310, 56);
			this->txtOutput->TabIndex = 1;
			// 
			// btnEncrypt
			// 
			this->btnEncrypt->BackColor = System::Drawing::Color::LightCoral;
			this->btnEncrypt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEncrypt->Location = System::Drawing::Point(16, 87);
			this->btnEncrypt->Name = L"btnEncrypt";
			this->btnEncrypt->Size = System::Drawing::Size(94, 36);
			this->btnEncrypt->TabIndex = 2;
			this->btnEncrypt->Text = L"Encrypt";
			this->btnEncrypt->UseVisualStyleBackColor = false;
			this->btnEncrypt->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// btnDecrypt
			// 
			this->btnDecrypt->BackColor = System::Drawing::Color::LightBlue;
			this->btnDecrypt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDecrypt->Location = System::Drawing::Point(224, 87);
			this->btnDecrypt->Name = L"btnDecrypt";
			this->btnDecrypt->Size = System::Drawing::Size(94, 36);
			this->btnDecrypt->TabIndex = 3;
			this->btnDecrypt->Text = L"Decrypt";
			this->btnDecrypt->UseVisualStyleBackColor = false;
			this->btnDecrypt->Click += gcnew System::EventHandler(this, &Form1::btnDecrypt_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClear->Location = System::Drawing::Point(120, 87);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(94, 36);
			this->btnClear->TabIndex = 4;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(12, 9);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(91, 13);
			this->lbl1->TabIndex = 5;
			this->lbl1->Text = L"Original Message:";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(16, 127);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(104, 13);
			this->lbl2->TabIndex = 6;
			this->lbl2->Text = L"Encrypted Message:";
			// 
			// txtShift
			// 
			this->txtShift->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtShift->Location = System::Drawing::Point(224, 25);
			this->txtShift->Multiline = true;
			this->txtShift->Name = L"txtShift";
			this->txtShift->Size = System::Drawing::Size(94, 56);
			this->txtShift->TabIndex = 7;
			// 
			// lblShift
			// 
			this->lblShift->AutoSize = true;
			this->lblShift->Location = System::Drawing::Point(221, 9);
			this->lblShift->Name = L"lblShift";
			this->lblShift->Size = System::Drawing::Size(31, 13);
			this->lblShift->TabIndex = 8;
			this->lblShift->Text = L"Shift:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(334, 211);
			this->Controls->Add(this->lblShift);
			this->Controls->Add(this->txtShift);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDecrypt);
			this->Controls->Add(this->btnEncrypt);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Name = L"Form1";
			this->Text = L"Encryptor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	String^ enc;
	String^ num;
	int chr;
	char letter;
	char letter2;
	int chr2;
	String^ dec;
	int letr;
	int shift;

	private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
				enc = "";
				
				Int32::TryParse(txtShift->Text,shift);
				shift = shift % 26;


				 for (int i = 0; i < txtInput->TextLength; i++) {
					 letter = txtInput->Text[i];
					 chr = Convert::ToInt32(letter);

					  if (((chr >= 65) && (chr <=90)) || ((chr >= 97) && (chr <= 122))|| (chr = 32))
					  {
						 if (chr >= 97 && chr <= 122) {
							 chr -= 32;
							 chr -= 64;
							 chr += shift;
                              if (chr > 26)
							 {
								 chr-=26;
							 }
						 }
					else if (chr >= 65 && chr <=90) {
							 chr -= 64;
							 chr += shift;
                              if (chr > 26)
							 {
								 chr-=26;
							 }
						 }
						  else if (chr = 32) {
							  chr = 27;
						  }
						  if (chr < 10) {
							  num = "0" + chr.ToString();
							 }
						 if (chr >= 10) {
							 num = chr.ToString() + "";
							 } 
					

						 enc = enc + num;
					 }
				 }
				 txtInput->Text = "";
				 txtOutput->Text = enc;
			 }
	private: System::Void btnDecrypt_Click(System::Object^  sender, System::EventArgs^  e) {
				dec = "";

				Int32::TryParse(txtShift->Text,shift);
				shift = shift % 26;
				
			for (int i = 0; i < (txtOutput->TextLength)-1; i+=2) {
				letter = txtOutput->Text[i];
				chr = Convert::ToInt32(letter);
				
				letter2 = txtOutput->Text[i+1];
				chr2 = Convert::ToInt32(letter2);
				
					chr -= 48;
					chr2 -= 48;
					letr = (chr*10)+(chr2*1);

					if (letr >= 1 && letr <= 26) {
					letr -= shift; 
					if (chr < 1)
							 {
								 chr+=26;
							 }
					
					letr += 64;
					}
					else if (letr = 27) {
						letr = 32;
					}

					wchar_t str = static_cast<wchar_t>(letr);
					num = str.ToString();
				 
				dec = dec + num;
				
			}
				 txtOutput->Text = "";
				 txtInput->Text = dec;
			 }
		private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtInput->Text = "";
				 txtOutput->Text = "";
				 }
};
}

