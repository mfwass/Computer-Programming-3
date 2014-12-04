#pragma once


namespace TemperatureConverter {

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
	private: System::Windows::Forms::Button^  convertFar;
	protected: 
	private: System::Windows::Forms::Button^  convertCel;
	private: System::Windows::Forms::TextBox^  wantConvert;
	private: System::Windows::Forms::TextBox^  isConverted;
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
			this->convertFar = (gcnew System::Windows::Forms::Button());
			this->convertCel = (gcnew System::Windows::Forms::Button());
			this->wantConvert = (gcnew System::Windows::Forms::TextBox());
			this->isConverted = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// convertFar
			// 
			this->convertFar->Location = System::Drawing::Point(177, 12);
			this->convertFar->Name = L"convertFar";
			this->convertFar->Size = System::Drawing::Size(109, 69);
			this->convertFar->TabIndex = 0;
			this->convertFar->Text = L"Convert to Farenheight";
			this->convertFar->UseVisualStyleBackColor = true;
			this->convertFar->Click += gcnew System::EventHandler(this, &Form1::convertFar_Click);
			// 
			// convertCel
			// 
			this->convertCel->Location = System::Drawing::Point(177, 87);
			this->convertCel->Name = L"convertCel";
			this->convertCel->Size = System::Drawing::Size(109, 69);
			this->convertCel->TabIndex = 1;
			this->convertCel->Text = L"Convert to Celsius";
			this->convertCel->UseVisualStyleBackColor = true;
			this->convertCel->Click += gcnew System::EventHandler(this, &Form1::convertCel_Click);
			// 
			// wantConvert
			// 
			this->wantConvert->Location = System::Drawing::Point(12, 12);
			this->wantConvert->Multiline = true;
			this->wantConvert->Name = L"wantConvert";
			this->wantConvert->Size = System::Drawing::Size(131, 144);
			this->wantConvert->TabIndex = 2;
			// 
			// isConverted
			// 
			this->isConverted->Location = System::Drawing::Point(323, 12);
			this->isConverted->Multiline = true;
			this->isConverted->Name = L"isConverted";
			this->isConverted->ReadOnly = true;
			this->isConverted->Size = System::Drawing::Size(131, 144);
			this->isConverted->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(442, 69);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 244);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->isConverted);
			this->Controls->Add(this->wantConvert);
			this->Controls->Add(this->convertCel);
			this->Controls->Add(this->convertFar);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void convertFar_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Converting from Cel to Far
				 double temp;
				 Double::TryParse(wantConvert->Text,temp);
				 double temp2;
				 temp2 = ((temp*9)/5)+32;
				 //Equation for Far->Cel is... F = (9/5*C) + 32
				 isConverted->Text = temp2.ToString();
				 }
	private: System::Void convertCel_Click(System::Object^  sender, System::EventArgs^  e) {
					 //Converting from Far to Cel
					 double temp;
					 Double::TryParse(wantConvert->Text,temp);
					 double temp2;
					 temp2 = ((temp-32)*5)/9;
					 //Equation for Cel->Far is... C = 5/9(F - 32)
					 isConverted->Text = temp2.ToString();
				 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Clear Button
				 double temp;
				 double temp2;
				 temp2 = 0;
				 temp = 0;
				 isConverted->Text = "";
				 wantConvert->Text = "";
				 MessageBox::Show("Clear Successful","ALERT");
				 }
};
}

