#pragma once


namespace Planets {

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

	protected: 
	private: System::Windows::Forms::Button^  btnStart;
	private: System::Windows::Forms::Button^  btnStop;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->picBox = (gcnew System::Windows::Forms::PictureBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->BeginInit();
			this->SuspendLayout();
			// 
			// picBox
			// 
			this->picBox->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picBox.Image")));
			this->picBox->Location = System::Drawing::Point(-1, -1);
			this->picBox->Name = L"picBox";
			this->picBox->Size = System::Drawing::Size(776, 545);
			this->picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBox->TabIndex = 0;
			this->picBox->TabStop = false;
			// 
			// btnStart
			// 
			this->btnStart->AutoSize = true;
			this->btnStart->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnStart->ForeColor = System::Drawing::Color::Red;
			this->btnStart->Location = System::Drawing::Point(632, 19);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(102, 36);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = false;
			this->btnStart->Click += gcnew System::EventHandler(this, &Form1::btnStart_Click);
			// 
			// btnStop
			// 
			this->btnStop->AutoSize = true;
			this->btnStop->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStop->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnStop->ForeColor = System::Drawing::Color::Red;
			this->btnStop->Location = System::Drawing::Point(632, 57);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(102, 36);
			this->btnStop->TabIndex = 2;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = false;
			this->btnStop->Click += gcnew System::EventHandler(this, &Form1::btnStop_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(773, 541);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->picBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion 
			static const int xcenter = 789/2;
			static const int ycenter = 579;
			static const int smajor = 100;
			static const int sminor = 100;
			double deg_sun;
			double deg_plan1;
			Drawing::Graphics^ gr;
			Drawing::Brush^ sun;
			Drawing::Brush^ planet;
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				gr = picBox->CreateGraphics();
				sun = gcnew Drawing::SolidBrush(Color::Yellow);
				planet = gcnew Drawing::SolidBrush(Color::Blue);
			 }
	private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
				deg_sun = 0;
				deg_plan1 = 0;
				timer1->Enabled = true;
			 }
	private: System::Void btnStop_Click(System::Object^  sender, System::EventArgs^  e) {
				timer1->Enabled = false;
			 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				int sunx, suny;
				int planx1, plany1;
				picBox->Refresh();	 
				double rad_sun, rad_plan1;
				rad_sun = deg_sun * Math::PI / 180;
				rad_plan1 = deg_plan1 * Math::PI / 180;
				sunx = xcenter + smajor * Math::Cos(rad_sun);
				suny = ycenter - sminor * Math::Sin(rad_sun);
				planx1 = sunx + smajor * Math::Cos(rad_plan1);
				plany1 = suny - sminor * Math::Sin(rad_plan1);
				System::Drawing::Rectangle sunrect(sunx,suny,32,32);
				gr->FillEllipse(sun,sunrect);
				System::Drawing::Rectangle planetrect1(planx1,plany1,16,16);
				gr->FillEllipse(planet,planetrect1);
				deg_sun += 0.1;
				deg_plan1 += 2;
		 }
	};
}