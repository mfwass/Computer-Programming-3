#pragma once


namespace Angles {

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
	private: System::Windows::Forms::Button^  btnCalc;
	private: System::Windows::Forms::TextBox^  txtDeg;
	protected: 


	private: System::Windows::Forms::TextBox^  txtRad;
	private: System::Windows::Forms::TextBox^  txtSin;
	private: System::Windows::Forms::TextBox^  txtCos;
	private: System::Windows::Forms::TextBox^  txtTan;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  picBox;

	private: System::Windows::Forms::Button^  button1;
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
			this->btnCalc = (gcnew System::Windows::Forms::Button());
			this->txtDeg = (gcnew System::Windows::Forms::TextBox());
			this->txtRad = (gcnew System::Windows::Forms::TextBox());
			this->txtSin = (gcnew System::Windows::Forms::TextBox());
			this->txtCos = (gcnew System::Windows::Forms::TextBox());
			this->txtTan = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->picBox = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCalc
			// 
			this->btnCalc->Location = System::Drawing::Point(60, 274);
			this->btnCalc->Name = L"btnCalc";
			this->btnCalc->Size = System::Drawing::Size(290, 37);
			this->btnCalc->TabIndex = 0;
			this->btnCalc->Text = L"Calculate";
			this->btnCalc->UseVisualStyleBackColor = true;
			this->btnCalc->Click += gcnew System::EventHandler(this, &Form1::btnCalc_Click);
			// 
			// txtDeg
			// 
			this->txtDeg->Location = System::Drawing::Point(60, 236);
			this->txtDeg->Multiline = true;
			this->txtDeg->Name = L"txtDeg";
			this->txtDeg->Size = System::Drawing::Size(438, 32);
			this->txtDeg->TabIndex = 1;
			// 
			// txtRad
			// 
			this->txtRad->Location = System::Drawing::Point(60, 330);
			this->txtRad->Multiline = true;
			this->txtRad->Name = L"txtRad";
			this->txtRad->Size = System::Drawing::Size(100, 36);
			this->txtRad->TabIndex = 2;
			// 
			// txtSin
			// 
			this->txtSin->Location = System::Drawing::Point(176, 330);
			this->txtSin->Multiline = true;
			this->txtSin->Name = L"txtSin";
			this->txtSin->Size = System::Drawing::Size(100, 36);
			this->txtSin->TabIndex = 3;
			// 
			// txtCos
			// 
			this->txtCos->Location = System::Drawing::Point(282, 330);
			this->txtCos->Multiline = true;
			this->txtCos->Name = L"txtCos";
			this->txtCos->Size = System::Drawing::Size(100, 36);
			this->txtCos->TabIndex = 4;
			// 
			// txtTan
			// 
			this->txtTan->Location = System::Drawing::Point(398, 330);
			this->txtTan->Multiline = true;
			this->txtTan->Name = L"txtTan";
			this->txtTan->Size = System::Drawing::Size(100, 36);
			this->txtTan->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 314);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"angle (in radians)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(173, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"sine";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(279, 314);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"cosine";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(395, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"tangent";
			// 
			// picBox
			// 
			this->picBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picBox.BackgroundImage")));
			this->picBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picBox->Location = System::Drawing::Point(60, 3);
			this->picBox->Name = L"picBox";
			this->picBox->Size = System::Drawing::Size(438, 229);
			this->picBox->TabIndex = 10;
			this->picBox->TabStop = false;
			this->picBox->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(356, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 374);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->picBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTan);
			this->Controls->Add(this->txtCos);
			this->Controls->Add(this->txtSin);
			this->Controls->Add(this->txtRad);
			this->Controls->Add(this->txtDeg);
			this->Controls->Add(this->btnCalc);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	Drawing::Brush^ brush;
	Drawing::Pen^ pen;
	Drawing::Graphics^ pic;
	double deg, rad;
	int r;
	int g;
	int b;
	bool check;
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
						pic = picBox->CreateGraphics();
						brush = gcnew Drawing::SolidBrush(Color::FromArgb(255,255,255,255));
						Drawing::Rectangle Rect(0,0,1000,1000);
						pic->FillRectangle(brush,Rect);
						DateTime now = DateTime::Now;
						Random^ numgen;
						numgen = gcnew Random(now.Millisecond);	
						r = numgen->Next(127,256);
						g = numgen->Next(127,256);
						b = numgen->Next(127,256);
						brush = gcnew Drawing::SolidBrush(Color::FromArgb(255,r,g,b));
						Drawing::Rectangle circle(0,0,picBox->Height,picBox->Height);
						pic->FillEllipse(brush,circle);
				 }
	private: System::Void btnCalc_Click(System::Object^  sender, System::EventArgs^  e) {
				check = txtDeg->Text->Equals("");
				if (check == false) {
					double deg, rad;
					Double::TryParse(txtDeg->Text,deg);
					if (deg <= 360 && deg >= 0) {
						picBox->Image= nullptr;
						picBox->Refresh();
						//picBox->Visible = false;
						pic = picBox->CreateGraphics();
						brush = gcnew Drawing::SolidBrush(Color::FromArgb(255,255,255,255));
						Drawing::Rectangle Rect(0,0,1000,1000);
						pic->FillRectangle(brush,Rect);
						rad = deg * Math::PI / 180;
						txtRad->Text=rad.ToString();
						txtSin->Text=Math::Sin(rad).ToString();
						txtCos->Text=Math::Cos(rad).ToString();
						txtTan->Text=Math::Tan(rad).ToString();
						DateTime now = DateTime::Now;
						Random^ numgen;
						numgen = gcnew Random(now.Millisecond);	
						r = numgen->Next(127,256);
						g = numgen->Next(127,256);
						b = numgen->Next(127,256);
						brush = gcnew Drawing::SolidBrush(Color::FromArgb(255,r,g,b));
						pen = gcnew Drawing::Pen(Color::FromArgb(255,r-63,g-63,b-63));
						Drawing::Rectangle circle(0,0,picBox->Height,picBox->Height);
						pic->FillEllipse(brush,circle);
						pic->DrawPie(pen,circle,deg,deg);
						picBox->Visible = true;
						}
					else {
						txtDeg->Text = "Bruh... ya can't enter a number greater than 360 or less than zero, man.";
					    txtDeg->BackColor = Color::Red;
					    txtRad->Text = "ERRRRRROOOORRR";
					    txtSin->Text = "ERRRRRROOOORRR";
					    txtCos->Text = "ERRRRRROOOORRR";
					    txtTan->Text = "ERRRRRROOOORRR";
					    MessageBox::Show("ERRRRRROOOORRR","ERROR");
						r = 0;
						g = 0;
						b = 0;
						picBox->Image= nullptr;
						picBox->Refresh();
						picBox->Visible = true;
					    //this->picBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picBox.BackgroundImage")));
						}
					}
				}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtDeg->Text = " ";
				 txtDeg->BackColor = Color::White;
				 txtRad->Text = " ";
				 txtSin->Text = " ";
				 txtCos->Text = " ";
				 txtTan->Text = " ";
				 MessageBox::Show("Clear Successful","Success");
				 r = 0;
				 g = 0;
				 b = 0;
				 picBox->Image= nullptr;
				 picBox->Refresh();
				 picBox->Visible = false;
				}

};
}