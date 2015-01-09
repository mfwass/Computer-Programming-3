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
	private: System::Windows::Forms::TextBox^  txtKey;

	private: System::Windows::Forms::Label^  lblShift;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
	private: System::Windows::Forms::Button^  button1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnEncrypt = (gcnew System::Windows::Forms::Button());
			this->btnDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->txtKey = (gcnew System::Windows::Forms::TextBox());
			this->lblShift = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtInput->ForeColor = System::Drawing::Color::PaleGreen;
			this->txtInput->Location = System::Drawing::Point(12, 25);
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(202, 56);
			this->txtInput->TabIndex = 0;
			// 
			// txtOutput
			// 
			this->txtOutput->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtOutput->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtOutput->ForeColor = System::Drawing::Color::PaleGreen;
			this->txtOutput->Location = System::Drawing::Point(12, 144);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(310, 56);
			this->txtOutput->TabIndex = 1;
			// 
			// btnEncrypt
			// 
			this->btnEncrypt->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnEncrypt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEncrypt->ForeColor = System::Drawing::Color::Lime;
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
			this->btnDecrypt->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDecrypt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDecrypt->ForeColor = System::Drawing::Color::Lime;
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
			this->btnClear->ForeColor = System::Drawing::Color::DarkGreen;
			this->btnClear->Location = System::Drawing::Point(120, 84);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(101, 20);
			this->btnClear->TabIndex = 4;
			this->btnClear->Text = L"Clear Key";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl1->ForeColor = System::Drawing::Color::Lime;
			this->lbl1->Location = System::Drawing::Point(12, 9);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(91, 13);
			this->lbl1->TabIndex = 5;
			this->lbl1->Text = L"Original Message:";
			this->lbl1->Click += gcnew System::EventHandler(this, &Form1::lbl1_Click);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl2->ForeColor = System::Drawing::Color::Lime;
			this->lbl2->Location = System::Drawing::Point(16, 127);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(104, 13);
			this->lbl2->TabIndex = 6;
			this->lbl2->Text = L"Encrypted Message:";
			// 
			// txtKey
			// 
			this->txtKey->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txtKey->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtKey->ForeColor = System::Drawing::Color::PaleGreen;
			this->txtKey->Location = System::Drawing::Point(224, 25);
			this->txtKey->Multiline = true;
			this->txtKey->Name = L"txtKey";
			this->txtKey->Size = System::Drawing::Size(94, 56);
			this->txtKey->TabIndex = 7;
			// 
			// lblShift
			// 
			this->lblShift->AutoSize = true;
			this->lblShift->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblShift->ForeColor = System::Drawing::Color::Lime;
			this->lblShift->Location = System::Drawing::Point(221, 9);
			this->lblShift->Name = L"lblShift";
			this->lblShift->Size = System::Drawing::Size(28, 13);
			this->lblShift->TabIndex = 8;
			this->lblShift->Text = L"Key:";
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->ovalShape1});
			this->shapeContainer1->Size = System::Drawing::Size(334, 211);
			this->shapeContainer1->TabIndex = 9;
			this->shapeContainer1->TabStop = false;
			// 
			// ovalShape1
			// 
			this->ovalShape1->BackColor = System::Drawing::Color::Transparent;
			this->ovalShape1->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->ovalShape1->BorderColor = System::Drawing::Color::Transparent;
			this->ovalShape1->FillColor = System::Drawing::Color::Transparent;
			this->ovalShape1->FillGradientColor = System::Drawing::Color::Transparent;
			this->ovalShape1->Location = System::Drawing::Point(319, 202);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->SelectionColor = System::Drawing::Color::Transparent;
			this->ovalShape1->Size = System::Drawing::Size(12, 6);
			this->ovalShape1->Click += gcnew System::EventHandler(this, &Form1::ovalShape1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::DarkGreen;
			this->button1->Location = System::Drawing::Point(120, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 21);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Clear Message(s)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AccessibleDescription = L"this will be you: \"ahhhhhhhhh\"";
			this->AccessibleName = L"totally not a virus";
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(334, 211);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblShift);
			this->Controls->Add(this->txtKey);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDecrypt);
			this->Controls->Add(this->btnEncrypt);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->shapeContainer1);
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Encryptor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
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
	String^ key;
	int keyint;
	int keylength;

	private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
				enc = "";
				key = txtKey->Text;
				keyint = 0;
				keylength = key->Length;
				if (keylength > txtInput->TextLength) {
					keylength = txtInput->TextLength;
				}
				for (int i = 0; i < txtInput->TextLength; i++) {
					 letter = txtInput->Text[i];
					 shift = Convert::ToInt32(txtKey->Text[keyint]);
					 if (shift >= 97 && shift <= 122) {
							 shift -= 96;
						 }
					 else if (shift >= 65 && shift <=90) {
							 shift -= 64;
					 }
					 chr = Convert::ToInt32(letter);
					 if (((chr >= 65) && (chr <=90)) || ((chr >= 97) && (chr <= 122))|| (chr = 32)) {

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
				 for (int lp = 0; lp < 25; lp++) {
				 dec = "";

				Int32::TryParse(txtKey->Text,shift);
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
					if (chr < 1) {
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
				 
			//encrypt//
				 
				enc = "";
				key = txtKey->Text;
				keyint = 0;
				keylength = key->Length;
				if (keylength > txtInput->TextLength) {
						keylength = txtInput->TextLength;
				}
				for (int i = 0; i < txtInput->TextLength; i++) {

					letter = txtInput->Text[i];
					shift = Convert::ToInt32(txtKey->Text[keyint]);
					if (shift >= 97 && shift <= 122) {
						shift -= 96;
					}
					else if (shift >= 65 && shift <=90) {
							 shift -= 64;
					} 
					chr = Convert::ToInt32(letter);
					if (((chr >= 65) && (chr <=90)) || ((chr >= 97) && (chr <= 122))|| (chr = 32)) {
						if (chr >= 97 && chr <= 122) {
							chr -= 32;
							chr -= 64;
							chr += shift;
                            if (chr > 26) {
								chr-=26;
							}
						 }
					else if (chr >= 65 && chr <=90) {
						chr -= 64;
						chr += shift;
                        if (chr > 26) {
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

				dec = "";

				Int32::TryParse(txtKey->Text,shift);
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
					 txtKey->Text = "";
				 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show(L"Entering text that is shorter than key will not encrypt.",L"WARNING"); 
		 }
private: System::Void ovalShape1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"You found the east5er eg!!!!!");
		 }
private: System::Void lbl1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtOutput->Text = "";
			 txtInput->Text = "";
		 }
};
}

