#pragma once


namespace BasicDecrypterEncrypter {

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
	private: System::Windows::Forms::Button^  txtEncrypt;
	protected: 
	private: System::Windows::Forms::Button^  txtDecrypt;
	private: System::Windows::Forms::TextBox^  txtInput;
	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::Button^  button1;

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
			this->txtEncrypt = (gcnew System::Windows::Forms::Button());
			this->txtDecrypt = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtEncrypt
			// 
			this->txtEncrypt->Location = System::Drawing::Point(48, 130);
			this->txtEncrypt->Name = L"txtEncrypt";
			this->txtEncrypt->Size = System::Drawing::Size(163, 39);
			this->txtEncrypt->TabIndex = 0;
			this->txtEncrypt->Text = L"Encrypt";
			this->txtEncrypt->UseVisualStyleBackColor = true;
			this->txtEncrypt->Click += gcnew System::EventHandler(this, &Form1::txtEncrypt_Click);
			// 
			// txtDecrypt
			// 
			this->txtDecrypt->Location = System::Drawing::Point(217, 130);
			this->txtDecrypt->Name = L"txtDecrypt";
			this->txtDecrypt->Size = System::Drawing::Size(163, 39);
			this->txtDecrypt->TabIndex = 1;
			this->txtDecrypt->Text = L"Decrypt";
			this->txtDecrypt->UseVisualStyleBackColor = true;
			this->txtDecrypt->Click += gcnew System::EventHandler(this, &Form1::txtDecrypt_Click);
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(42, 13);
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(439, 111);
			this->txtInput->TabIndex = 2;
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(42, 181);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(439, 111);
			this->txtOutput->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(386, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 304);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->txtDecrypt);
			this->Controls->Add(this->txtEncrypt);
			this->Name = L"Form1";
			this->Text = L"Caeser Cipher Encrypter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	String^ encrypt;
	String^ decrypted;
	int chr;
	char letter;
	wchar_t chr2;
	private: System::Void txtEncrypt_Click(System::Object^  sender, System::EventArgs^  e) {
				 encrypt = "";
				 for (int i = 0; i < txtInput->TextLength; i++) {
					 letter = txtInput->Text[i];
					 chr = Convert::ToInt32(letter);
					 if (((chr >= 65) && (chr <=90)) || ((chr >= 97) && (chr <= 122))) {
						 if (chr >= 97 && chr <= 122) {
							 chr -= 96;
						 }
						  if (chr >= 65 && chr <=90) {
							 chr -= 64;
						 }
						 encrypt = encrypt + " " + chr.ToString();
					 }
					 if ((!(chr >= 65) && !(chr <= 90)) || (!(chr >= 97) && !(chr <= 122))) {
						encrypt = encrypt + letter;
					 }
				 }
				 txtOutput->Clear();
				 txtOutput->Text = encrypt;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtInput->Clear();
				 txtOutput->Clear();
				 encrypt = "";
				 MessageBox::Show(L"Clear Successful!",L"Success");
			 }
private: System::Void txtDecrypt_Click(System::Object^  sender, System::EventArgs^  e) {
			 decrypted = " ";
			 int encrypted;
			 for (int i = 0; i < txtInput->TextLength; i++) {
				 encrypted = txtOutput->Text[i];
				 if ((encrypted >= 1) && (chr <=26)) {
					 char alphabet[26] = {A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
					 /*
					 1 = A;
					 2 = B;
					 3 = C;
					 4 = D;
					 5 = E;
					 6 = F;
					 7 = G;
					 8 = H;
					 9 = I;
					 10 = J;
					 11 = K;
					 12 = L;
					 13 = M;
					 14 = N;
					 15 = O;
					 16 = P;
					 17 = Q;
					 18 = R;
					 19 = S;
					 20 = T;
					 21 = U;
					 22 = V;
					 23 = W;
					 24 = X;
					 25 = Y;
					 26 = Z;
					 */
				 }
			 }
		 }
};
}