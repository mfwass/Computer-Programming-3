#pragma once


namespace RandomNumber {

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
	private: System::Windows::Forms::Button^  btnGenerate;
	protected: 

	private: System::Windows::Forms::TextBox^  txtOutput;
	private: System::Windows::Forms::TextBox^  txtMin;
	private: System::Windows::Forms::TextBox^  txtMax;



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
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->txtMin = (gcnew System::Windows::Forms::TextBox());
			this->txtMax = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnGenerate
			// 
			this->btnGenerate->Location = System::Drawing::Point(95, 56);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(277, 38);
			this->btnGenerate->TabIndex = 0;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = true;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &Form1::btnGenerate_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(95, 100);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(277, 67);
			this->txtOutput->TabIndex = 1;
			// 
			// txtMin
			// 
			this->txtMin->Location = System::Drawing::Point(95, 12);
			this->txtMin->Multiline = true;
			this->txtMin->Name = L"txtMin";
			this->txtMin->Size = System::Drawing::Size(134, 38);
			this->txtMin->TabIndex = 2;
			this->txtMin->TextChanged += gcnew System::EventHandler(this, &Form1::txtMin_TextChanged);
			// 
			// txtMax
			// 
			this->txtMax->Location = System::Drawing::Point(235, 12);
			this->txtMax->Multiline = true;
			this->txtMax->Name = L"txtMax";
			this->txtMax->Size = System::Drawing::Size(137, 38);
			this->txtMax->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 254);
			this->Controls->Add(this->txtMax);
			this->Controls->Add(this->txtMin);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->btnGenerate);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ strOut = "";
				 int randomNum, min, max;
				 DateTime now = DateTime::Now;
				 Random^ randomNumGenerator;
				 randomNumGenerator = gcnew Random(now.Millisecond);
				 Int32::TryParse(txtMin->Text,min);
				 Int32::TryParse(txtMax->Text,max);
				 if (min > max) {
					 txtOutput->Text = "Error";
					 MessageBox::Show("The minimum number cannot be greater than the maximum number.","Error");
					 txtMin->Focus();
				 }
				 //if (min > max) {
				 //	 txtOutput->Text = "Error";
				 //	 MessageBox::Show("The minimum number cannot be greater than the maximum number.","Error");
				 //	 txtMin->Focus();
				 //}
				 for (int counter = 0; counter <10; counter++)
				 {
					 randomNum = randomNumGenerator->Next(min,max+1);
					 strOut += randomNum + "  ";
				 }
				 txtOutput->Text = strOut;
			 }
	private: System::Void txtMin_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}

