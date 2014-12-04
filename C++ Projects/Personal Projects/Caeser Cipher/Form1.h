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
			this->SuspendLayout();
			// 
			// txtEncrypt
			// 
			this->txtEncrypt->Location = System::Drawing::Point(49, 130);
			this->txtEncrypt->Name = L"txtEncrypt";
			this->txtEncrypt->Size = System::Drawing::Size(206, 39);
			this->txtEncrypt->TabIndex = 0;
			this->txtEncrypt->Text = L"Encrypt";
			this->txtEncrypt->UseVisualStyleBackColor = true;
			this->txtEncrypt->Click += gcnew System::EventHandler(this, &Form1::txtEncrypt_Click);
			// 
			// txtDecrypt
			// 
			this->txtDecrypt->Location = System::Drawing::Point(268, 130);
			this->txtDecrypt->Name = L"txtDecrypt";
			this->txtDecrypt->Size = System::Drawing::Size(206, 39);
			this->txtDecrypt->TabIndex = 1;
			this->txtDecrypt->Text = L"Decrypt";
			this->txtDecrypt->UseVisualStyleBackColor = true;
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 304);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->txtDecrypt);
			this->Controls->Add(this->txtEncrypt);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtEncrypt_Click(System::Object^  sender, System::EventArgs^  e) {
				 int count = 0;
				 char ch;
				 while(txtInpu(ch) != '.')
				 count++;
				 do {
					 char myChar = txtInput->Text[0];
					 int num = Convert::ToInt32(myChar);
					 num = num - 64;
					 txtOutput->Text = num.ToString();
					 count - 1
				 }
			 }
	};
}

