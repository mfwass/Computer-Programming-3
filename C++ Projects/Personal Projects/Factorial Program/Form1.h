#pragma once


namespace FactorialProgram {

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
	private: System::Windows::Forms::Button^  btnConvert;
	protected: 

	protected: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnConvert
			// 
			this->btnConvert->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Mistral", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnConvert->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->btnConvert->Location = System::Drawing::Point(256, 99);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(148, 74);
			this->btnConvert->TabIndex = 0;
			this->btnConvert->Text = L"Calculate";
			this->btnConvert->UseVisualStyleBackColor = false;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// txtInput
			// 
			this->txtInput->BackColor = System::Drawing::Color::DeepPink;
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtInput->ForeColor = System::Drawing::Color::Lime;
			this->txtInput->Location = System::Drawing::Point(256, 17);
			this->txtInput->MaxLength = 6;
			this->txtInput->Multiline = true;
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(150, 76);
			this->txtInput->TabIndex = 1;
			// 
			// txtOutput
			// 
			this->txtOutput->BackColor = System::Drawing::Color::DeepPink;
			this->txtOutput->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtOutput->ForeColor = System::Drawing::Color::Lime;
			this->txtOutput->Location = System::Drawing::Point(256, 179);
			this->txtOutput->MaxLength = 6;
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(150, 76);
			this->txtOutput->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(638, 296);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->btnConvert);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Name = L"Form1";
			this->Text = L"Factorial Program";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma endregion

		int num;
		double fact;
		int i;
	
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
			 Int32::TryParse(txtInput->Text,num);
				 if (num > 0) {
					 fact = 1;
					 i = num;
					 do  {
						 fact *= i;
						 i -= 1;
						 }
						 while (i > 0);
					txtOutput->Text = fact.ToString();
					txtInput->Focus();
				 } 
				 if (num <= 0) {
					 MessageBox::Show(L"You cannot enter a number less than 1.",L"Error");
					 txtOutput->Text = "Error";
					 txtInput->Focus();
					 }
				 if (num > 170) {
					 txtOutput->Text = "Error";
					 MessageBox::Show(L"You cannot enter a number greater than 170.",L"Error");
					 txtInput->Focus();
					 }
			 }
	};
}

