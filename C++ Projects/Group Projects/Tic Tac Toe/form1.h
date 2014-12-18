#pragma once


namespace TicTacToe {

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
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	protected: 


	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn4;

	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timePlayer;
	private: System::Windows::Forms::Label^  lblWin;
	private: System::Windows::Forms::Label^  txtWin;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::RadioButton^  radio1Player;
	private: System::Windows::Forms::RadioButton^  radio2Player;
	private: System::Windows::Forms::GroupBox^  groupPlayer;
	private: System::Windows::Forms::GroupBox^  groupFirst;
	private: System::Windows::Forms::RadioButton^  radio1First;
	private: System::Windows::Forms::RadioButton^  radio2First;
	private: System::Windows::Forms::GroupBox^  groupSymbol;
	private: System::Windows::Forms::RadioButton^  radioX;
	private: System::Windows::Forms::RadioButton^  radioO;

	private: System::Windows::Forms::Button^  btnStart;
	private: System::Windows::Forms::Timer^  timeCPU;
	private: System::Windows::Forms::Timer^  WinCheck;



	private: System::ComponentModel::IContainer^  components;










	protected: 










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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timePlayer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblWin = (gcnew System::Windows::Forms::Label());
			this->txtWin = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->radio1Player = (gcnew System::Windows::Forms::RadioButton());
			this->radio2Player = (gcnew System::Windows::Forms::RadioButton());
			this->groupPlayer = (gcnew System::Windows::Forms::GroupBox());
			this->groupFirst = (gcnew System::Windows::Forms::GroupBox());
			this->radio1First = (gcnew System::Windows::Forms::RadioButton());
			this->radio2First = (gcnew System::Windows::Forms::RadioButton());
			this->groupSymbol = (gcnew System::Windows::Forms::GroupBox());
			this->radioX = (gcnew System::Windows::Forms::RadioButton());
			this->radioO = (gcnew System::Windows::Forms::RadioButton());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->timeCPU = (gcnew System::Windows::Forms::Timer(this->components));
			this->WinCheck = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupPlayer->SuspendLayout();
			this->groupFirst->SuspendLayout();
			this->groupSymbol->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn1->Location = System::Drawing::Point(12, 12);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(50, 50);
			this->btn1->TabIndex = 0;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn2->Location = System::Drawing::Point(75, 12);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(50, 50);
			this->btn2->TabIndex = 1;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn3->Location = System::Drawing::Point(138, 12);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(50, 50);
			this->btn3->TabIndex = 2;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn6
			// 
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn6->Location = System::Drawing::Point(138, 73);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(50, 50);
			this->btn6->TabIndex = 5;
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn5->Location = System::Drawing::Point(75, 73);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(50, 50);
			this->btn5->TabIndex = 4;
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn4->Location = System::Drawing::Point(12, 73);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(50, 50);
			this->btn4->TabIndex = 3;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn9
			// 
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn9->Location = System::Drawing::Point(138, 134);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(50, 50);
			this->btn9->TabIndex = 8;
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn8->Location = System::Drawing::Point(75, 134);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(50, 50);
			this->btn8->TabIndex = 7;
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn7->Location = System::Drawing::Point(12, 134);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(50, 50);
			this->btn7->TabIndex = 6;
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(176, 172);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// timePlayer
			// 
			this->timePlayer->Enabled = true;
			this->timePlayer->Interval = 1;
			this->timePlayer->Tick += gcnew System::EventHandler(this, &Form1::timePlayer_Tick);
			// 
			// lblWin
			// 
			this->lblWin->AutoSize = true;
			this->lblWin->Location = System::Drawing::Point(196, 12);
			this->lblWin->Name = L"lblWin";
			this->lblWin->Size = System::Drawing::Size(44, 13);
			this->lblWin->TabIndex = 10;
			this->lblWin->Text = L"Winner:";
			// 
			// txtWin
			// 
			this->txtWin->AutoSize = true;
			this->txtWin->Location = System::Drawing::Point(196, 25);
			this->txtWin->Name = L"txtWin";
			this->txtWin->Size = System::Drawing::Size(67, 13);
			this->txtWin->TabIndex = 11;
			this->txtWin->Text = L"Inconclusive";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(205, 101);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(73, 30);
			this->btnReset->TabIndex = 12;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Form1::btnReset_Click);
			// 
			// radio1Player
			// 
			this->radio1Player->AutoSize = true;
			this->radio1Player->Checked = true;
			this->radio1Player->Location = System::Drawing::Point(6, 15);
			this->radio1Player->Name = L"radio1Player";
			this->radio1Player->Size = System::Drawing::Size(45, 17);
			this->radio1Player->TabIndex = 13;
			this->radio1Player->TabStop = true;
			this->radio1Player->Text = L"One";
			this->radio1Player->UseVisualStyleBackColor = true;
			this->radio1Player->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio1Player_CheckedChanged);
			// 
			// radio2Player
			// 
			this->radio2Player->AutoSize = true;
			this->radio2Player->Location = System::Drawing::Point(5, 32);
			this->radio2Player->Name = L"radio2Player";
			this->radio2Player->Size = System::Drawing::Size(46, 17);
			this->radio2Player->TabIndex = 14;
			this->radio2Player->Text = L"Two";
			this->radio2Player->UseVisualStyleBackColor = true;
			this->radio2Player->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio2Player_CheckedChanged);
			// 
			// groupPlayer
			// 
			this->groupPlayer->Controls->Add(this->radio1Player);
			this->groupPlayer->Controls->Add(this->radio2Player);
			this->groupPlayer->Location = System::Drawing::Point(298, 8);
			this->groupPlayer->Name = L"groupPlayer";
			this->groupPlayer->Size = System::Drawing::Size(107, 54);
			this->groupPlayer->TabIndex = 15;
			this->groupPlayer->TabStop = false;
			this->groupPlayer->Text = L"Players";
			// 
			// groupFirst
			// 
			this->groupFirst->Controls->Add(this->radio1First);
			this->groupFirst->Controls->Add(this->radio2First);
			this->groupFirst->Location = System::Drawing::Point(298, 73);
			this->groupFirst->Name = L"groupFirst";
			this->groupFirst->Size = System::Drawing::Size(107, 54);
			this->groupFirst->TabIndex = 16;
			this->groupFirst->TabStop = false;
			this->groupFirst->Text = L"First";
			// 
			// radio1First
			// 
			this->radio1First->AutoSize = true;
			this->radio1First->Checked = true;
			this->radio1First->Location = System::Drawing::Point(6, 15);
			this->radio1First->Name = L"radio1First";
			this->radio1First->Size = System::Drawing::Size(63, 17);
			this->radio1First->TabIndex = 13;
			this->radio1First->TabStop = true;
			this->radio1First->Text = L"Player 1";
			this->radio1First->UseVisualStyleBackColor = true;
			this->radio1First->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio1First_CheckedChanged);
			// 
			// radio2First
			// 
			this->radio2First->AutoSize = true;
			this->radio2First->Location = System::Drawing::Point(5, 32);
			this->radio2First->Name = L"radio2First";
			this->radio2First->Size = System::Drawing::Size(63, 17);
			this->radio2First->TabIndex = 14;
			this->radio2First->Text = L"Player 2";
			this->radio2First->UseVisualStyleBackColor = true;
			this->radio2First->CheckedChanged += gcnew System::EventHandler(this, &Form1::radio2First_CheckedChanged);
			// 
			// groupSymbol
			// 
			this->groupSymbol->Controls->Add(this->radioX);
			this->groupSymbol->Controls->Add(this->radioO);
			this->groupSymbol->Location = System::Drawing::Point(298, 135);
			this->groupSymbol->Name = L"groupSymbol";
			this->groupSymbol->Size = System::Drawing::Size(107, 54);
			this->groupSymbol->TabIndex = 17;
			this->groupSymbol->TabStop = false;
			this->groupSymbol->Text = L"Symbol (Player 1)";
			// 
			// radioX
			// 
			this->radioX->AutoSize = true;
			this->radioX->Checked = true;
			this->radioX->Location = System::Drawing::Point(6, 15);
			this->radioX->Name = L"radioX";
			this->radioX->Size = System::Drawing::Size(33, 17);
			this->radioX->TabIndex = 13;
			this->radioX->TabStop = true;
			this->radioX->Text = L"O";
			this->radioX->UseVisualStyleBackColor = true;
			// 
			// radioO
			// 
			this->radioO->AutoSize = true;
			this->radioO->Location = System::Drawing::Point(5, 32);
			this->radioO->Name = L"radioO";
			this->radioO->Size = System::Drawing::Size(32, 17);
			this->radioO->TabIndex = 14;
			this->radioO->Text = L"X";
			this->radioO->UseVisualStyleBackColor = true;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(205, 65);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(73, 30);
			this->btnStart->TabIndex = 18;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Form1::btnStart_Click);
			// 
			// timeCPU
			// 
			this->timeCPU->Enabled = true;
			this->timeCPU->Interval = 1;
			this->timeCPU->Tick += gcnew System::EventHandler(this, &Form1::timeCPU_Tick);
			// 
			// WinCheck
			// 
			this->WinCheck->Enabled = true;
			this->WinCheck->Interval = 1;
			this->WinCheck->Tick += gcnew System::EventHandler(this, &Form1::WinCheck_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 201);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->groupSymbol);
			this->Controls->Add(this->groupFirst);
			this->Controls->Add(this->groupPlayer);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->txtWin);
			this->Controls->Add(this->lblWin);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupPlayer->ResumeLayout(false);
			this->groupPlayer->PerformLayout();
			this->groupFirst->ResumeLayout(false);
			this->groupFirst->PerformLayout();
			this->groupSymbol->ResumeLayout(false);
			this->groupSymbol->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int turn;
		String^ side;
		int players;
		bool win;
		String^ winner;
		int frst;
		//double NULL, SND_RESOURCE, PlaySound, SND_FILENAME, SND_ASYNC;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 //PlaySound("sleepless.mid", NULL, SND_FILENAME, SND_ASYNC);
			 //PlaySound("sleepless.mid", NULL, SND_RESOURCE);
			 btn1->Enabled = false;
			 btn2->Enabled = false;
			 btn3->Enabled = false;
			 btn4->Enabled = false;
			 btn5->Enabled = false;
			 btn6->Enabled = false;
			 btn7->Enabled = false;
			 btn8->Enabled = false;
			 btn9->Enabled = false;
			 radio2First->Text = "CPU"; 
		 }

private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
			 btn1->Enabled = true;
			 btn2->Enabled = true;
			 btn3->Enabled = true;
			 btn4->Enabled = true;
			 btn5->Enabled = true;
			 btn6->Enabled = true;
			 btn7->Enabled = true;
			 btn8->Enabled = true;
			 btn9->Enabled = true;
			 groupPlayer->Enabled = false;
			 groupFirst->Enabled = false;
			 groupSymbol->Enabled = false;
			 btnStart->Enabled = false;
			 txtWin->Text = "";
			 if (frst == 0) {
				 turn = 0;
			 }
			 if (frst == 1) {
				 turn = 1;
			 }
		 }	

private: System::Void timePlayer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //Turn Check
			 if (radioX->Checked) {
				 if (turn == 0) { 
					 side = radioX->Text;
				 }
				 if (turn == 1) { 
					 side = radioO->Text;
				 }
			 }
			  if (radioO->Checked) {
				 if (turn == 0) { 
					 side = radioO->Text;
				 }
				 if (turn == 1) { 
					 side = radioX->Text;
				 }
			 }

				 if (!(btn1->Enabled) && !(btn2->Enabled) && (btn3->Enabled) && !(btn4->Enabled) && (btn5->Enabled) && !(btn6->Enabled) && (btn7->Enabled) && !(btn8->Enabled) && !(btn9->Enabled)) {
					win = false;
					 btnReset->Enabled = true;
					 txtWin->Text = "No Winner";
					}
				 //Win Check 

				 //Horizontal
				 if ((btn1->Text->Equals(btn2->Text) && btn2->Text->Equals(btn3->Text)) && !(btn1->Text->Equals(""))) {
					 win = true;
					 winner = btn1->Text;
					 btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					
					 btnReset->Enabled = true;
					 }
				if ((btn4->Text->Equals(btn5->Text) && btn5->Text->Equals(btn6->Text)) && !(btn4->Text->Equals(""))) {
					 win = true;
					 winner = btn4->Text; 
						btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					 btnReset->Enabled = true;
				 }
				 if ((btn7->Text->Equals(btn8->Text) && btn8->Text->Equals(btn9->Text)) && !(btn7->Text->Equals(""))) {
					 win = true;
					 winner = btn7->Text;
					 btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					 
					 btnReset->Enabled = true;
				 }
					
				//Vertical
					if ((btn1->Text->Equals(btn4->Text) && btn4->Text->Equals(btn7->Text)) && !(btn1->Text->Equals(""))) {
						win = true;
						winner = btn1->Text;
						btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					 
					 btnReset->Enabled = true;
					}
						
					if ((btn2->Text->Equals(btn5->Text) && btn5->Text->Equals(btn8->Text)) && !(btn2->Text->Equals(""))) {
					win = true;	
					winner = btn2->Text;
						btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					 
					 btnReset->Enabled = true;
					}
					if ((btn3->Text->Equals(btn6->Text) && btn6->Text->Equals(btn9->Text)) && !(btn3->Text->Equals(""))) {
						win = true;	
						winner = btn3->Text;
						btn1->Enabled = false;
						 btn2->Enabled = false;
						 btn3->Enabled = false;
						 btn4->Enabled = false;
						 btn5->Enabled = false;
						 btn6->Enabled = false;
						 btn7->Enabled = false;
						 btn8->Enabled = false;
						 btn9->Enabled = false; 
					  
					 btnReset->Enabled = true;
					}
					//Diagonal
					if ((btn1->Text->Equals(btn5->Text) && btn5->Text->Equals(btn9->Text)) && !(btn1->Text->Equals(""))) {
						win = true;
						winner = btn1->Text;
						btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					 
					 btnReset->Enabled = true;
					}
					if ((btn3->Text->Equals(btn5->Text) && btn5->Text->Equals(btn7->Text)) && !(btn3->Text->Equals(""))) {
						win = true;
						winner = btn3->Text;
						btn1->Enabled = false;
					 btn2->Enabled = false;
					 btn3->Enabled = false;
					 btn4->Enabled = false;
					 btn5->Enabled = false;
					 btn6->Enabled = false;
					 btn7->Enabled = false;
					 btn8->Enabled = false;
					 btn9->Enabled = false; 
					 
					 btnReset->Enabled = true;
					}
			 }

	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (turn == 0 && btn1->Enabled == true) {
					 btn1->Text = side;
					 btn1->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn1->Enabled == true) {
					 btn1->Text = side;
					 btn1->Enabled = false;
					 turn = 0;
				 }
			 }
	
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (turn == 0 && btn2->Enabled == true) {
					 btn2->Text = side;
					 btn2->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn2->Enabled == true) {
					 btn2->Text = side;
					 btn2->Enabled = false;
					 turn = 0;
				 }
		 }

private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
				if (turn == 0 && btn3->Enabled == true) {
					 btn3->Text = side;
					 btn3->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn3->Enabled == true) {
					 btn3->Text = side;
					 btn3->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (turn == 0 && btn4->Enabled == true) {
					 btn4->Text = side;
					 btn4->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn4->Enabled == true) {
					 btn4->Text = side;
					 btn4->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (turn == 0 && btn5->Enabled == true) {
					 btn5->Text = side;
					 btn5->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn5->Enabled == true) {
					 btn5->Text = side;
					 btn5->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (turn == 0 && btn6->Enabled == true) {
					 btn6->Text = side;
					 btn6->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn6->Enabled == true) {
					 btn6->Text = side;
					 btn6->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (turn == 0 && btn7->Enabled == true) {
					 btn7->Text = side;
					 btn7->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn7->Enabled == true) {
					 btn7->Text = side;
					 btn7->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (turn == 0 && btn8->Enabled == true) {
					 btn8->Text = side;
					 btn8->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn8->Enabled == true) {
					 btn8->Text = side;
					 btn8->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
		 if (turn == 0 && btn9->Enabled == true) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 1;
				 }
				 if (turn == 1 && btn9->Enabled == true) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 0;
				 }
		 }
private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
			 btn1->Enabled = false;
			 btn2->Enabled = false;
			 btn3->Enabled = false;
			 btn4->Enabled = false;
			 btn5->Enabled = false;
			 btn6->Enabled = false;
			 btn7->Enabled = false;
			 btn8->Enabled = false;
			 btn9->Enabled = false;
			 btn1->Text = "";
			 btn2->Text = "";
			 btn3->Text = "";
			 btn4->Text = "";
			 btn5->Text = "";
			 btn6->Text = "";
			 btn7->Text = "";
			 btn8->Text = "";
			 btn9->Text = "";
			 groupPlayer->Enabled = true;
			 groupFirst->Enabled = true;
			 groupSymbol->Enabled = true;
			 btnReset->Enabled = true;
			 btnStart->Enabled = true;
			 win = false;
		 }
private: System::Void radio1Player_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 players = 0;
		 radio2First->Text = "CPU";
		 }
private: System::Void radio2Player_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 players = 2;
		 radio2First->Text = "Player 2";
		 }
private: System::Void radio1First_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 frst = 0;
		 }
private: System::Void radio2First_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 frst = 1;
		 }
private: System::Void timeCPU_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //AI
			 if (players == 0) {
			 if (turn == 1) { 
				 //Block
				 
				 //Horizontal
				  if ((btn1->Text->Equals(btn2->Text)) && !(btn1->Text->Equals("")) && (btn3->Enabled)) {
					 btn3->Text = side;
					 btn3->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn1->Text->Equals(btn3->Text)) && !(btn1->Text->Equals("")) && (btn2->Enabled)) {
					 btn2->Text = side;
					 btn2->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn2->Text->Equals(btn3->Text)) && !(btn2->Text->Equals("")) && (btn3->Enabled)) {
					 btn1->Text = side;
					 btn1->Enabled = false;
					 turn = 0;
				 }
				 
				 else if ((btn4->Text->Equals(btn5->Text)) && !(btn4->Text->Equals("")) && (btn6->Enabled)) {
					 btn6->Text = side;
					 btn6->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn4->Text->Equals(btn6->Text)) && !(btn4->Text->Equals("")) && (btn5->Enabled)) {
					 btn5->Text = side;
					 btn5->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn5->Text->Equals(btn6->Text)) && !(btn5->Text->Equals("")) && (btn6->Enabled)) {
					 btn4->Text = side;
					 btn4->Enabled = false;
					 turn = 0;
				 }
				 else if ((btn7->Text->Equals(btn8->Text)) && !(btn7->Text->Equals("")) && (btn9->Enabled)) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn7->Text->Equals(btn9->Text)) && !(btn7->Text->Equals("")) && (btn8->Enabled)) {
					 btn8->Text = side;
					 btn8->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn8->Text->Equals(btn9->Text)) && !(btn8->Text->Equals("")) && (btn9->Enabled)) {
					 btn7->Text = side;
					 btn7->Enabled = false;
					 turn = 0;
				 }
				 
				 
				 //Vertical
				 else if  ((btn1->Text->Equals(btn4->Text)) && !(btn4->Text->Equals("")) && (btn7->Enabled)) {
					 btn7->Text = side;
					 btn7->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn1->Text->Equals(btn7->Text)) && !(btn1->Text->Equals("")) && (btn4->Enabled)) {
					 btn4->Text = side;
					 btn4->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn4->Text->Equals(btn7->Text)) && !(btn4->Text->Equals("")) && (btn1->Enabled)) {
					 btn1->Text = side;
					 btn1->Enabled = false;
					 turn = 0;
				 }
				 
				 else if  ((btn2->Text->Equals(btn5->Text)) && !(btn5->Text->Equals("")) && (btn8->Enabled)) {
					 btn8->Text = side;
					 btn8->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn2->Text->Equals(btn8->Text)) && !(btn2->Text->Equals("")) && (btn5->Enabled)) {
					 btn5->Text = side;
					 btn5->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn5->Text->Equals(btn8->Text)) && !(btn5->Text->Equals("")) && (btn2->Enabled)) {
					 btn2->Text = side;
					 btn2->Enabled = false;
					 turn = 0;
				 }
				 else if  ((btn3->Text->Equals(btn6->Text)) && !(btn6->Text->Equals("")) && (btn9->Enabled)) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn3->Text->Equals(btn9->Text)) && !(btn3->Text->Equals("")) && (btn6->Enabled)) {
					 btn6->Text = side;
					 btn6->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn6->Text->Equals(btn9->Text)) && !(btn6->Text->Equals("")) && (btn3->Enabled)) {
					 btn3->Text = side;
					 btn3->Enabled = false;
					 turn = 0;
				 }
				 else if  ((btn1->Text->Equals(btn5->Text)) && !(btn1->Text->Equals("")) && (btn9->Enabled)) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 0;
				 }
				  else if  ((btn3->Text->Equals(btn5->Text)) && !(btn5->Text->Equals("")) && (btn7->Enabled)) {
					 btn7->Text = side;
					 btn7->Enabled = false;
					 turn = 0;
				 }
				  else if  (btn5->Enabled) {
					 btn5->Text = side;
					 btn5->Enabled = false;
					 turn = 0;
				 }
			  
				  else if  (btn1->Enabled) {
					 btn1->Text = side;
					 btn1->Enabled = false;
					 turn = 0;
				 }
				  else if  (btn3->Enabled) {
					 btn3->Text = side;
					 btn3->Enabled = false;
					 turn = 0;
				 }
				  else if  (btn7->Enabled) {
					 btn7->Text = side;
					 btn7->Enabled = false;
					 turn = 0;
				 }
				  
				  else if  (btn9->Enabled) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 0;
					 }
				      
				  else if  (btn2->Enabled) {
					 btn2->Text = side;
					 btn2->Enabled = false;
					 turn = 0;
				 }
				  else if  (btn8->Enabled) {
					 btn8->Text = side;
					 btn8->Enabled = false;
					 turn = 0;
				 
				  }
				  else if  (btn6->Enabled) {
					 btn6->Text = side;
					 btn6->Enabled = false;
					 turn = 0;
				 
				  }
				  else if  (btn9->Enabled) {
					 btn9->Text = side;
					 btn9->Enabled = false;
					 turn = 0;
				 
				  }
				}
			 }
		}

	private: System::Void WinCheck_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if (win == true) {
							 if (turn = 1) {
							     txtWin->Text = "Player 1";
							 }
							 if (turn = 0) {
								 if (players = 1) {
									 txtWin->Text = "Player 2";
								 }
								 if (players = 0) {
									 txtWin->Text = "Computer";
								 }
							 }
					}
			 }
};
}
