#pragma once


namespace CircleProgram {

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
	private: System::Windows::Forms::PictureBox^  picBox;
	protected: 

	private: System::Windows::Forms::Button^  btnDraw;
	private: System::Windows::Forms::Button^  btnClear;
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
			this->picBox = (gcnew System::Windows::Forms::PictureBox());
			this->btnDraw = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->BeginInit();
			this->SuspendLayout();
			// 
			// picBox
			// 
			this->picBox->Location = System::Drawing::Point(12, 12);
			this->picBox->Name = L"picBox";
			this->picBox->Size = System::Drawing::Size(322, 218);
			this->picBox->TabIndex = 0;
			this->picBox->TabStop = false;
			// 
			// btnDraw
			// 
			this->btnDraw->Location = System::Drawing::Point(12, 234);
			this->btnDraw->Name = L"btnDraw";
			this->btnDraw->Size = System::Drawing::Size(322, 35);
			this->btnDraw->TabIndex = 1;
			this->btnDraw->Text = L"Draw Circle";
			this->btnDraw->UseVisualStyleBackColor = true;
			this->btnDraw->Click += gcnew System::EventHandler(this, &Form1::btnDraw_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(12, 275);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(322, 22);
			this->btnClear->TabIndex = 2;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(346, 301);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDraw);
			this->Controls->Add(this->picBox);
			this->Name = L"Form1";
			this->Text = L"Circle Program";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Drawing::Brush ^ brush;
		Drawing::Graphics^ gr;
		int r,g,b;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnDraw_Click(System::Object^  sender, System::EventArgs^  e) {
				 gr = picBox->CreateGraphics();
				 DateTime now = DateTime::Now;
				 Random^ numgen;
				 numgen = gcnew Random(now.Millisecond);	
				 r = numgen->Next(0,255);
				 g = numgen->Next(0,255);
				 b = numgen->Next(0,255);
				 brush = gcnew Drawing::SolidBrush(Color::FromArgb(255,r,g,b));
				 Drawing::Rectangle circleRect(0,0,picBox->Height,picBox->Height);
				 gr->FillEllipse(brush,circleRect);
			 }
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
				 r = 0;
				 g = 0;
				 b = 0;
				 picBox->Image= nullptr;
				 picBox->Refresh();
			 }
};
}
