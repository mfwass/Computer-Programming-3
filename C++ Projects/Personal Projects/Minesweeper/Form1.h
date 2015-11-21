//shweet minesweeper
#pragma once


namespace Minesweeper {

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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;




	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;







	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;
	private: System::Windows::Forms::Button^  button65;
	private: System::Windows::Forms::Button^  button66;
	private: System::Windows::Forms::Button^  button67;
	private: System::Windows::Forms::Button^  button68;
	private: System::Windows::Forms::Button^  button69;
	private: System::Windows::Forms::Button^  button70;
	private: System::Windows::Forms::Button^  button71;
	private: System::Windows::Forms::Button^  button72;
	private: System::Windows::Forms::Button^  button73;
	private: System::Windows::Forms::Button^  button74;
	private: System::Windows::Forms::Button^  button75;
	private: System::Windows::Forms::Button^  button76;
	private: System::Windows::Forms::Button^  button77;
	private: System::Windows::Forms::Button^  button78;
	private: System::Windows::Forms::Button^  button79;
	private: System::Windows::Forms::Button^  button80;
	private: System::Windows::Forms::Button^  button81;
	private: System::Windows::Forms::Button^  button82;
	private: System::Windows::Forms::Button^  button83;
	private: System::Windows::Forms::Button^  button84;
	private: System::Windows::Forms::Button^  button85;
	private: System::Windows::Forms::Button^  button86;
	private: System::Windows::Forms::Button^  button87;
	private: System::Windows::Forms::Button^  button88;
	private: System::Windows::Forms::Button^  button89;
	private: System::Windows::Forms::Button^  button90;
	private: System::Windows::Forms::Button^  button91;
	private: System::Windows::Forms::Button^  button92;
	private: System::Windows::Forms::Button^  button93;
	private: System::Windows::Forms::Button^  button94;
	private: System::Windows::Forms::Button^  button95;
	private: System::Windows::Forms::Button^  button96;
	private: System::Windows::Forms::Button^  button97;
	private: System::Windows::Forms::Button^  button98;
	private: System::Windows::Forms::Button^  button99;
	private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::TextBox^  txtOutput;
private: System::Windows::Forms::Label^  bombCounter;
private: System::Windows::Forms::Label^  label1;




private: System::ComponentModel::IContainer^  components;




	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->bombCounter = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(7, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(28, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(20, 20);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(49, 68);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(20, 20);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Transparent;
			this->button4->Location = System::Drawing::Point(70, 68);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(20, 20);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->ForeColor = System::Drawing::Color::Transparent;
			this->button5->Location = System::Drawing::Point(91, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(20, 20);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::Color::Transparent;
			this->button6->Location = System::Drawing::Point(112, 68);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(20, 20);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->ForeColor = System::Drawing::Color::Transparent;
			this->button7->Location = System::Drawing::Point(133, 68);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(20, 20);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->ForeColor = System::Drawing::Color::Transparent;
			this->button8->Location = System::Drawing::Point(154, 68);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(20, 20);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->ForeColor = System::Drawing::Color::Transparent;
			this->button9->Location = System::Drawing::Point(175, 68);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(20, 20);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->ForeColor = System::Drawing::Color::Transparent;
			this->button10->Location = System::Drawing::Point(196, 68);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(20, 20);
			this->button10->TabIndex = 10;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->ForeColor = System::Drawing::Color::Transparent;
			this->button11->Location = System::Drawing::Point(7, 89);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(20, 20);
			this->button11->TabIndex = 20;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->ForeColor = System::Drawing::Color::Transparent;
			this->button12->Location = System::Drawing::Point(28, 89);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(20, 20);
			this->button12->TabIndex = 19;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->ForeColor = System::Drawing::Color::Transparent;
			this->button13->Location = System::Drawing::Point(49, 89);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(20, 20);
			this->button13->TabIndex = 18;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->ForeColor = System::Drawing::Color::Transparent;
			this->button14->Location = System::Drawing::Point(70, 89);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(20, 20);
			this->button14->TabIndex = 17;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->ForeColor = System::Drawing::Color::Transparent;
			this->button15->Location = System::Drawing::Point(91, 89);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(20, 20);
			this->button15->TabIndex = 16;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->ForeColor = System::Drawing::Color::Transparent;
			this->button16->Location = System::Drawing::Point(112, 89);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(20, 20);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->ForeColor = System::Drawing::Color::Transparent;
			this->button17->Location = System::Drawing::Point(133, 89);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(20, 20);
			this->button17->TabIndex = 14;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->ForeColor = System::Drawing::Color::Transparent;
			this->button18->Location = System::Drawing::Point(154, 89);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(20, 20);
			this->button18->TabIndex = 13;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->ForeColor = System::Drawing::Color::Transparent;
			this->button19->Location = System::Drawing::Point(175, 89);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(20, 20);
			this->button19->TabIndex = 12;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->ForeColor = System::Drawing::Color::Transparent;
			this->button20->Location = System::Drawing::Point(196, 89);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(20, 20);
			this->button20->TabIndex = 11;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->ForeColor = System::Drawing::Color::Transparent;
			this->button21->Location = System::Drawing::Point(7, 110);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(20, 20);
			this->button21->TabIndex = 30;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->ForeColor = System::Drawing::Color::Transparent;
			this->button22->Location = System::Drawing::Point(28, 110);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(20, 20);
			this->button22->TabIndex = 29;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->ForeColor = System::Drawing::Color::Transparent;
			this->button23->Location = System::Drawing::Point(49, 110);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(20, 20);
			this->button23->TabIndex = 28;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->ForeColor = System::Drawing::Color::Transparent;
			this->button24->Location = System::Drawing::Point(70, 110);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(20, 20);
			this->button24->TabIndex = 27;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->ForeColor = System::Drawing::Color::Transparent;
			this->button25->Location = System::Drawing::Point(91, 110);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(20, 20);
			this->button25->TabIndex = 26;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// button26
			// 
			this->button26->ForeColor = System::Drawing::Color::Transparent;
			this->button26->Location = System::Drawing::Point(112, 110);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(20, 20);
			this->button26->TabIndex = 25;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// button27
			// 
			this->button27->ForeColor = System::Drawing::Color::Transparent;
			this->button27->Location = System::Drawing::Point(133, 110);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(20, 20);
			this->button27->TabIndex = 24;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button28
			// 
			this->button28->ForeColor = System::Drawing::Color::Transparent;
			this->button28->Location = System::Drawing::Point(154, 110);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(20, 20);
			this->button28->TabIndex = 23;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// button29
			// 
			this->button29->ForeColor = System::Drawing::Color::Transparent;
			this->button29->Location = System::Drawing::Point(175, 110);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(20, 20);
			this->button29->TabIndex = 22;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button30
			// 
			this->button30->ForeColor = System::Drawing::Color::Transparent;
			this->button30->Location = System::Drawing::Point(196, 110);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(20, 20);
			this->button30->TabIndex = 21;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
			// 
			// button31
			// 
			this->button31->ForeColor = System::Drawing::Color::Transparent;
			this->button31->Location = System::Drawing::Point(7, 131);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(20, 20);
			this->button31->TabIndex = 40;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
			// 
			// button32
			// 
			this->button32->ForeColor = System::Drawing::Color::Transparent;
			this->button32->Location = System::Drawing::Point(28, 131);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(20, 20);
			this->button32->TabIndex = 39;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
			// 
			// button33
			// 
			this->button33->ForeColor = System::Drawing::Color::Transparent;
			this->button33->Location = System::Drawing::Point(49, 131);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(20, 20);
			this->button33->TabIndex = 38;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
			// 
			// button34
			// 
			this->button34->ForeColor = System::Drawing::Color::Transparent;
			this->button34->Location = System::Drawing::Point(70, 131);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(20, 20);
			this->button34->TabIndex = 37;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
			// 
			// button35
			// 
			this->button35->ForeColor = System::Drawing::Color::Transparent;
			this->button35->Location = System::Drawing::Point(91, 131);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(20, 20);
			this->button35->TabIndex = 36;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
			// 
			// button36
			// 
			this->button36->ForeColor = System::Drawing::Color::Transparent;
			this->button36->Location = System::Drawing::Point(112, 131);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(20, 20);
			this->button36->TabIndex = 35;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
			// 
			// button37
			// 
			this->button37->ForeColor = System::Drawing::Color::Transparent;
			this->button37->Location = System::Drawing::Point(133, 131);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(20, 20);
			this->button37->TabIndex = 34;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
			// 
			// button38
			// 
			this->button38->ForeColor = System::Drawing::Color::Transparent;
			this->button38->Location = System::Drawing::Point(154, 131);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(20, 20);
			this->button38->TabIndex = 33;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::button38_Click);
			// 
			// button39
			// 
			this->button39->ForeColor = System::Drawing::Color::Transparent;
			this->button39->Location = System::Drawing::Point(175, 131);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(20, 20);
			this->button39->TabIndex = 32;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Form1::button39_Click);
			// 
			// button40
			// 
			this->button40->ForeColor = System::Drawing::Color::Transparent;
			this->button40->Location = System::Drawing::Point(196, 131);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(20, 20);
			this->button40->TabIndex = 31;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Form1::button40_Click);
			// 
			// button41
			// 
			this->button41->ForeColor = System::Drawing::Color::Transparent;
			this->button41->Location = System::Drawing::Point(7, 152);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(20, 20);
			this->button41->TabIndex = 50;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Form1::button41_Click);
			// 
			// button42
			// 
			this->button42->ForeColor = System::Drawing::Color::Transparent;
			this->button42->Location = System::Drawing::Point(28, 152);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(20, 20);
			this->button42->TabIndex = 49;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Form1::button42_Click);
			// 
			// button43
			// 
			this->button43->ForeColor = System::Drawing::Color::Transparent;
			this->button43->Location = System::Drawing::Point(49, 152);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(20, 20);
			this->button43->TabIndex = 48;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Form1::button43_Click);
			// 
			// button44
			// 
			this->button44->ForeColor = System::Drawing::Color::Transparent;
			this->button44->Location = System::Drawing::Point(70, 152);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(20, 20);
			this->button44->TabIndex = 47;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Form1::button44_Click);
			// 
			// button45
			// 
			this->button45->ForeColor = System::Drawing::Color::Transparent;
			this->button45->Location = System::Drawing::Point(91, 152);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(20, 20);
			this->button45->TabIndex = 46;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Form1::button45_Click);
			// 
			// button46
			// 
			this->button46->ForeColor = System::Drawing::Color::Transparent;
			this->button46->Location = System::Drawing::Point(112, 152);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(20, 20);
			this->button46->TabIndex = 45;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Form1::button46_Click);
			// 
			// button47
			// 
			this->button47->ForeColor = System::Drawing::Color::Transparent;
			this->button47->Location = System::Drawing::Point(133, 152);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(20, 20);
			this->button47->TabIndex = 44;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &Form1::button47_Click);
			// 
			// button48
			// 
			this->button48->ForeColor = System::Drawing::Color::Transparent;
			this->button48->Location = System::Drawing::Point(154, 152);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(20, 20);
			this->button48->TabIndex = 43;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &Form1::button48_Click);
			// 
			// button49
			// 
			this->button49->ForeColor = System::Drawing::Color::Transparent;
			this->button49->Location = System::Drawing::Point(175, 152);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(20, 20);
			this->button49->TabIndex = 42;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &Form1::button49_Click);
			// 
			// button50
			// 
			this->button50->ForeColor = System::Drawing::Color::Transparent;
			this->button50->Location = System::Drawing::Point(196, 152);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(20, 20);
			this->button50->TabIndex = 41;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &Form1::button50_Click);
			// 
			// button51
			// 
			this->button51->ForeColor = System::Drawing::Color::Transparent;
			this->button51->Location = System::Drawing::Point(7, 173);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(20, 20);
			this->button51->TabIndex = 60;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &Form1::button51_Click);
			// 
			// button52
			// 
			this->button52->ForeColor = System::Drawing::Color::Transparent;
			this->button52->Location = System::Drawing::Point(28, 173);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(20, 20);
			this->button52->TabIndex = 59;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &Form1::button52_Click);
			// 
			// button53
			// 
			this->button53->ForeColor = System::Drawing::Color::Transparent;
			this->button53->Location = System::Drawing::Point(49, 173);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(20, 20);
			this->button53->TabIndex = 58;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &Form1::button53_Click);
			// 
			// button54
			// 
			this->button54->ForeColor = System::Drawing::Color::Transparent;
			this->button54->Location = System::Drawing::Point(70, 173);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(20, 20);
			this->button54->TabIndex = 57;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &Form1::button54_Click);
			// 
			// button55
			// 
			this->button55->ForeColor = System::Drawing::Color::Transparent;
			this->button55->Location = System::Drawing::Point(91, 173);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(20, 20);
			this->button55->TabIndex = 56;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &Form1::button55_Click);
			// 
			// button56
			// 
			this->button56->ForeColor = System::Drawing::Color::Transparent;
			this->button56->Location = System::Drawing::Point(112, 173);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(20, 20);
			this->button56->TabIndex = 55;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &Form1::button56_Click);
			// 
			// button57
			// 
			this->button57->ForeColor = System::Drawing::Color::Transparent;
			this->button57->Location = System::Drawing::Point(133, 173);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(20, 20);
			this->button57->TabIndex = 54;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &Form1::button57_Click);
			// 
			// button58
			// 
			this->button58->ForeColor = System::Drawing::Color::Transparent;
			this->button58->Location = System::Drawing::Point(154, 173);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(20, 20);
			this->button58->TabIndex = 53;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &Form1::button58_Click);
			// 
			// button59
			// 
			this->button59->ForeColor = System::Drawing::Color::Transparent;
			this->button59->Location = System::Drawing::Point(175, 173);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(20, 20);
			this->button59->TabIndex = 52;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &Form1::button59_Click);
			// 
			// button60
			// 
			this->button60->ForeColor = System::Drawing::Color::Transparent;
			this->button60->Location = System::Drawing::Point(196, 173);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(20, 20);
			this->button60->TabIndex = 51;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &Form1::button60_Click);
			// 
			// button61
			// 
			this->button61->ForeColor = System::Drawing::Color::Transparent;
			this->button61->Location = System::Drawing::Point(7, 194);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(20, 20);
			this->button61->TabIndex = 70;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &Form1::button61_Click);
			// 
			// button62
			// 
			this->button62->ForeColor = System::Drawing::Color::Transparent;
			this->button62->Location = System::Drawing::Point(28, 194);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(20, 20);
			this->button62->TabIndex = 69;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &Form1::button62_Click);
			// 
			// button63
			// 
			this->button63->ForeColor = System::Drawing::Color::Transparent;
			this->button63->Location = System::Drawing::Point(49, 194);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(20, 20);
			this->button63->TabIndex = 68;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &Form1::button63_Click);
			// 
			// button64
			// 
			this->button64->ForeColor = System::Drawing::Color::Transparent;
			this->button64->Location = System::Drawing::Point(70, 194);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(20, 20);
			this->button64->TabIndex = 67;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &Form1::button64_Click);
			// 
			// button65
			// 
			this->button65->ForeColor = System::Drawing::Color::Transparent;
			this->button65->Location = System::Drawing::Point(91, 194);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(20, 20);
			this->button65->TabIndex = 66;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &Form1::button65_Click);
			// 
			// button66
			// 
			this->button66->ForeColor = System::Drawing::Color::Transparent;
			this->button66->Location = System::Drawing::Point(112, 194);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(20, 20);
			this->button66->TabIndex = 65;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &Form1::button66_Click);
			// 
			// button67
			// 
			this->button67->ForeColor = System::Drawing::Color::Transparent;
			this->button67->Location = System::Drawing::Point(133, 194);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(20, 20);
			this->button67->TabIndex = 64;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &Form1::button67_Click);
			// 
			// button68
			// 
			this->button68->ForeColor = System::Drawing::Color::Transparent;
			this->button68->Location = System::Drawing::Point(154, 194);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(20, 20);
			this->button68->TabIndex = 63;
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &Form1::button68_Click);
			// 
			// button69
			// 
			this->button69->ForeColor = System::Drawing::Color::Transparent;
			this->button69->Location = System::Drawing::Point(175, 194);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(20, 20);
			this->button69->TabIndex = 62;
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &Form1::button69_Click);
			// 
			// button70
			// 
			this->button70->ForeColor = System::Drawing::Color::Transparent;
			this->button70->Location = System::Drawing::Point(196, 194);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(20, 20);
			this->button70->TabIndex = 61;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &Form1::button70_Click);
			// 
			// button71
			// 
			this->button71->ForeColor = System::Drawing::Color::Transparent;
			this->button71->Location = System::Drawing::Point(7, 215);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(20, 20);
			this->button71->TabIndex = 80;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &Form1::button71_Click);
			// 
			// button72
			// 
			this->button72->ForeColor = System::Drawing::Color::Transparent;
			this->button72->Location = System::Drawing::Point(28, 215);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(20, 20);
			this->button72->TabIndex = 79;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &Form1::button72_Click);
			// 
			// button73
			// 
			this->button73->ForeColor = System::Drawing::Color::Transparent;
			this->button73->Location = System::Drawing::Point(49, 215);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(20, 20);
			this->button73->TabIndex = 78;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &Form1::button73_Click);
			// 
			// button74
			// 
			this->button74->ForeColor = System::Drawing::Color::Transparent;
			this->button74->Location = System::Drawing::Point(70, 215);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(20, 20);
			this->button74->TabIndex = 77;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &Form1::button74_Click);
			// 
			// button75
			// 
			this->button75->ForeColor = System::Drawing::Color::Transparent;
			this->button75->Location = System::Drawing::Point(91, 215);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(20, 20);
			this->button75->TabIndex = 76;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &Form1::button75_Click);
			// 
			// button76
			// 
			this->button76->ForeColor = System::Drawing::Color::Transparent;
			this->button76->Location = System::Drawing::Point(112, 215);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(20, 20);
			this->button76->TabIndex = 75;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &Form1::button76_Click);
			// 
			// button77
			// 
			this->button77->ForeColor = System::Drawing::Color::Transparent;
			this->button77->Location = System::Drawing::Point(133, 215);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(20, 20);
			this->button77->TabIndex = 74;
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &Form1::button77_Click);
			// 
			// button78
			// 
			this->button78->ForeColor = System::Drawing::Color::Transparent;
			this->button78->Location = System::Drawing::Point(154, 215);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(20, 20);
			this->button78->TabIndex = 73;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &Form1::button78_Click);
			// 
			// button79
			// 
			this->button79->ForeColor = System::Drawing::Color::Transparent;
			this->button79->Location = System::Drawing::Point(175, 215);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(20, 20);
			this->button79->TabIndex = 72;
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &Form1::button79_Click);
			// 
			// button80
			// 
			this->button80->ForeColor = System::Drawing::Color::Transparent;
			this->button80->Location = System::Drawing::Point(196, 215);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(20, 20);
			this->button80->TabIndex = 71;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &Form1::button80_Click);
			// 
			// button81
			// 
			this->button81->ForeColor = System::Drawing::Color::Transparent;
			this->button81->Location = System::Drawing::Point(7, 236);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(20, 20);
			this->button81->TabIndex = 90;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &Form1::button81_Click);
			// 
			// button82
			// 
			this->button82->ForeColor = System::Drawing::Color::Transparent;
			this->button82->Location = System::Drawing::Point(28, 236);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(20, 20);
			this->button82->TabIndex = 89;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &Form1::button82_Click);
			// 
			// button83
			// 
			this->button83->ForeColor = System::Drawing::Color::Transparent;
			this->button83->Location = System::Drawing::Point(49, 236);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(20, 20);
			this->button83->TabIndex = 88;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &Form1::button83_Click);
			// 
			// button84
			// 
			this->button84->ForeColor = System::Drawing::Color::Transparent;
			this->button84->Location = System::Drawing::Point(70, 236);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(20, 20);
			this->button84->TabIndex = 87;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &Form1::button84_Click);
			// 
			// button85
			// 
			this->button85->ForeColor = System::Drawing::Color::Transparent;
			this->button85->Location = System::Drawing::Point(91, 236);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(20, 20);
			this->button85->TabIndex = 86;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &Form1::button85_Click);
			// 
			// button86
			// 
			this->button86->ForeColor = System::Drawing::Color::Transparent;
			this->button86->Location = System::Drawing::Point(112, 236);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(20, 20);
			this->button86->TabIndex = 85;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &Form1::button86_Click);
			// 
			// button87
			// 
			this->button87->ForeColor = System::Drawing::Color::Transparent;
			this->button87->Location = System::Drawing::Point(133, 236);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(20, 20);
			this->button87->TabIndex = 84;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &Form1::button87_Click);
			// 
			// button88
			// 
			this->button88->ForeColor = System::Drawing::Color::Transparent;
			this->button88->Location = System::Drawing::Point(154, 236);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(20, 20);
			this->button88->TabIndex = 83;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &Form1::button88_Click);
			// 
			// button89
			// 
			this->button89->ForeColor = System::Drawing::Color::Transparent;
			this->button89->Location = System::Drawing::Point(175, 236);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(20, 20);
			this->button89->TabIndex = 82;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &Form1::button89_Click);
			// 
			// button90
			// 
			this->button90->ForeColor = System::Drawing::Color::Transparent;
			this->button90->Location = System::Drawing::Point(196, 236);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(20, 20);
			this->button90->TabIndex = 81;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &Form1::button90_Click);
			// 
			// button91
			// 
			this->button91->ForeColor = System::Drawing::Color::Transparent;
			this->button91->Location = System::Drawing::Point(7, 257);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(20, 20);
			this->button91->TabIndex = 100;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &Form1::button91_Click);
			// 
			// button92
			// 
			this->button92->ForeColor = System::Drawing::Color::Transparent;
			this->button92->Location = System::Drawing::Point(28, 257);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(20, 20);
			this->button92->TabIndex = 99;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &Form1::button92_Click);
			// 
			// button93
			// 
			this->button93->ForeColor = System::Drawing::Color::Transparent;
			this->button93->Location = System::Drawing::Point(49, 257);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(20, 20);
			this->button93->TabIndex = 98;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &Form1::button93_Click);
			// 
			// button94
			// 
			this->button94->ForeColor = System::Drawing::Color::Transparent;
			this->button94->Location = System::Drawing::Point(70, 257);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(20, 20);
			this->button94->TabIndex = 97;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &Form1::button94_Click);
			// 
			// button95
			// 
			this->button95->ForeColor = System::Drawing::Color::Transparent;
			this->button95->Location = System::Drawing::Point(91, 257);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(20, 20);
			this->button95->TabIndex = 96;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &Form1::button95_Click);
			// 
			// button96
			// 
			this->button96->ForeColor = System::Drawing::Color::Transparent;
			this->button96->Location = System::Drawing::Point(112, 257);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(20, 20);
			this->button96->TabIndex = 95;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &Form1::button96_Click);
			// 
			// button97
			// 
			this->button97->ForeColor = System::Drawing::Color::Transparent;
			this->button97->Location = System::Drawing::Point(133, 257);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(20, 20);
			this->button97->TabIndex = 94;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &Form1::button97_Click);
			// 
			// button98
			// 
			this->button98->ForeColor = System::Drawing::Color::Transparent;
			this->button98->Location = System::Drawing::Point(154, 257);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(20, 20);
			this->button98->TabIndex = 93;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &Form1::button98_Click);
			// 
			// button99
			// 
			this->button99->ForeColor = System::Drawing::Color::Transparent;
			this->button99->Location = System::Drawing::Point(175, 257);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(20, 20);
			this->button99->TabIndex = 92;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &Form1::button99_Click);
			// 
			// button100
			// 
			this->button100->ForeColor = System::Drawing::Color::Transparent;
			this->button100->Location = System::Drawing::Point(196, 257);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(20, 20);
			this->button100->TabIndex = 91;
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &Form1::button100_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->BackColor = System::Drawing::Color::White;
			this->txtOutput->Location = System::Drawing::Point(100, 37);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->ReadOnly = true;
			this->txtOutput->Size = System::Drawing::Size(115, 20);
			this->txtOutput->TabIndex = 101;
			// 
			// bombCounter
			// 
			this->bombCounter->AutoSize = true;
			this->bombCounter->Location = System::Drawing::Point(10, 40);
			this->bombCounter->Name = L"bombCounter";
			this->bombCounter->Size = System::Drawing::Size(90, 13);
			this->bombCounter->TabIndex = 102;
			this->bombCounter->Text = L"Number of Mines:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 25);
			this->label1->TabIndex = 103;
			this->label1->Text = L"Minesweeper!";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(226, 285);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bombCounter);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->button91);
			this->Controls->Add(this->button92);
			this->Controls->Add(this->button93);
			this->Controls->Add(this->button94);
			this->Controls->Add(this->button95);
			this->Controls->Add(this->button96);
			this->Controls->Add(this->button97);
			this->Controls->Add(this->button98);
			this->Controls->Add(this->button99);
			this->Controls->Add(this->button100);
			this->Controls->Add(this->button81);
			this->Controls->Add(this->button82);
			this->Controls->Add(this->button83);
			this->Controls->Add(this->button84);
			this->Controls->Add(this->button85);
			this->Controls->Add(this->button86);
			this->Controls->Add(this->button87);
			this->Controls->Add(this->button88);
			this->Controls->Add(this->button89);
			this->Controls->Add(this->button90);
			this->Controls->Add(this->button71);
			this->Controls->Add(this->button72);
			this->Controls->Add(this->button73);
			this->Controls->Add(this->button74);
			this->Controls->Add(this->button75);
			this->Controls->Add(this->button76);
			this->Controls->Add(this->button77);
			this->Controls->Add(this->button78);
			this->Controls->Add(this->button79);
			this->Controls->Add(this->button80);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->button68);
			this->Controls->Add(this->button69);
			this->Controls->Add(this->button70);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Minesweeper";
			this->TransparencyKey = System::Drawing::Color::Maroon;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void DisableAllButtons(void) {
		//YAY!!! After many failed attempts
		//I finally got a function to work!
		this->button1->Enabled = false;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = false;
		this->button7->Enabled = false;
		this->button8->Enabled = false;
		this->button9->Enabled = false;
		this->button10->Enabled = false;
		this->button11->Enabled = false;
		this->button12->Enabled = false;
		this->button13->Enabled = false;
		this->button14->Enabled = false;
		this->button15->Enabled = false;
		this->button16->Enabled = false;
		this->button17->Enabled = false;
		this->button18->Enabled = false;
		this->button19->Enabled = false;
		this->button20->Enabled = false;
		this->button21->Enabled = false;
		this->button22->Enabled = false;
		this->button23->Enabled = false;
		this->button24->Enabled = false;
		this->button25->Enabled = false;
		this->button26->Enabled = false;
		this->button27->Enabled = false;
		this->button28->Enabled = false;
		this->button29->Enabled = false;
		this->button30->Enabled = false;
		this->button31->Enabled = false;
		this->button32->Enabled = false;
		this->button33->Enabled = false;
		this->button34->Enabled = false;
		this->button35->Enabled = false;
		this->button36->Enabled = false;
		this->button37->Enabled = false;
		this->button38->Enabled = false;
		this->button39->Enabled = false;
		this->button40->Enabled = false;
		this->button41->Enabled = false;
		this->button42->Enabled = false;
		this->button43->Enabled = false;
		this->button44->Enabled = false;
		this->button45->Enabled = false;
		this->button46->Enabled = false;
		this->button47->Enabled = false;
		this->button48->Enabled = false;
		this->button49->Enabled = false;
		this->button50->Enabled = false;
		this->button51->Enabled = false;
		this->button52->Enabled = false;
		this->button53->Enabled = false;
		this->button54->Enabled = false;
		this->button55->Enabled = false;
		this->button56->Enabled = false;
		this->button57->Enabled = false;
		this->button58->Enabled = false;
		this->button59->Enabled = false;
		this->button60->Enabled = false;
		this->button61->Enabled = false;
		this->button62->Enabled = false;
		this->button63->Enabled = false;
		this->button64->Enabled = false;
		this->button65->Enabled = false;
		this->button66->Enabled = false;
		this->button67->Enabled = false;
		this->button68->Enabled = false;
		this->button69->Enabled = false;
		this->button70->Enabled = false;
		this->button71->Enabled = false;
		this->button72->Enabled = false;
		this->button73->Enabled = false;
		this->button74->Enabled = false;
		this->button75->Enabled = false;
		this->button76->Enabled = false;
		this->button77->Enabled = false;
		this->button78->Enabled = false;
		this->button79->Enabled = false;
		this->button80->Enabled = false;
		this->button81->Enabled = false;
		this->button82->Enabled = false;
		this->button83->Enabled = false;
		this->button84->Enabled = false;
		this->button85->Enabled = false;
		this->button86->Enabled = false;
		this->button87->Enabled = false;
		this->button88->Enabled = false;
		this->button89->Enabled = false;
		this->button90->Enabled = false;
		this->button91->Enabled = false;
		this->button92->Enabled = false;
		this->button93->Enabled = false;
		this->button94->Enabled = false;
		this->button95->Enabled = false;
		this->button96->Enabled = false;
		this->button97->Enabled = false;
		this->button98->Enabled = false;
		this->button99->Enabled = false;
		this->bombCounter->Text = "Dun goof'd level: ";
		//this->bombCounter->Location = (5,40);
		this->txtOutput->Text = "Virtuous";
		//int currentButton = 1;
		//for (int counter = 0; counter < 100; counter++) {
		//	if (this->button[currentButton]->Text = 1) {
		//		this->button[currentButton]->Color = Color::Red;
		//	NumberOfMines = NumberOfMines + mineStorage[currentMine];
		//	currentMine = currentMine + 1;
		//}
		//Gotta make this loop work. cri
		this->txtOutput->Focus();
	}

	private: array<int>^ mineStorage;
	
    private: array<int>^ randomNumber;

	int Checker(int box1, int box2, int box3, int box4, int box5, int box6, int box7, int box8) {
		//considering my void cannot return my value, let's just use an int that I can reuse.
		return (this->mineStorage[box1] + this->mineStorage[box2] + this->mineStorage[box3] + this->mineStorage[box4] + this->mineStorage[box5] + this->mineStorage[box6] + this->mineStorage[box7] + this->mineStorage[box8]);
	}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 mineStorage = gcnew array<int> (101);
				 randomNumber = gcnew array<int> (101);
				 mineStorage[0] = 0; //Going to use a null value for mineStorage[0] so I can start the array at 1. It'll make it so much easier to write the checker.
				 int randomNum, min, max;
				 DateTime now = DateTime::Now;
				 Random^ randomNumGenerator;
				 randomNumGenerator = gcnew Random(now.Millisecond);
				 randomNumber[0] = 1;
				 randomNumber[1] = 100;
				 min = randomNumber[0];
				 max = randomNumber[1];
				 if (min > max) {
					 MessageBox::Show("The minimum number cannot be greater than the maximum number.","Error");
				 }
				 int counter1 = 0;
				 for (int counter = 0; counter < 10; counter++) {
						 randomNum = randomNumGenerator->Next(min,max+1);
						 mineStorage[randomNum] = 1;
						 counter1 = counter1 + 1;
					 //mineStorage[mineCounter] = randomNum;
					 //mineCounter = mineCounter + 1;
				 }
				 //How many mines are there?? Lets find out.
				 int currentMine = 1;
				 int NumberOfMines = 0;
				 for (int counter2 = 0; counter2 < 100; counter2++) {
					 NumberOfMines = NumberOfMines + mineStorage[currentMine];
					 currentMine = currentMine + 1;
				 }
				 txtOutput->Text = Convert::ToString(NumberOfMines);
				 bombCounter->Focus(); //Removes the first button from being focused after startup.

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[1] == 1) {
					 //oh crap, you dun goofed.
					 //MessageBox::Show(L"Oh snap!",L"Bomb!"); debug message.
					 button1->BackColor = Color::Red; 
					 DisableAllButtons(); //yay! I figured out how to call and write functions!!!
					 bombCounter->Focus();
				 }
				 else {
					 //lucky you, clicked a safe one.
					 //MessageBox::Show(L"You're a lucky one!",L"Whew.."); debug message.
					 button1->Text = Convert::ToString(Checker(0, 0, 0, 0, 2, 0, 11, 12));
					 button1->Enabled = false;
					 bombCounter->Focus();
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[2] == 1) {
					 button2->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button2->Text = Convert::ToString(Checker(0, 0, 0, 1, 3, 11, 12, 13));
					 button2->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[3] == 1) {
					 button3->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button3->Text = Convert::ToString(Checker(0, 0, 0, 2, 4, 12, 13, 14));
					 button3->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[4] == 1) {
					 button4->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button4->Text = Convert::ToString(Checker(0, 0, 0, 3, 5, 13, 14, 15));
					 button4->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[5] == 1) {
					 button5->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button5->Text = Convert::ToString(Checker(0, 0, 0, 4, 6, 14, 15, 16));
					 button5->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[6] == 1) {
					 button6->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button6->Text = Convert::ToString(Checker(0, 0, 0, 5, 7, 15, 16, 17));
					 button6->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[7] == 1) {
					 button7->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button7->Text = Convert::ToString(Checker(0, 0, 0, 6, 8, 16, 17, 18));
					 button7->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[8] == 1) {
					 button8->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button8->Text = Convert::ToString(Checker(0, 0, 0, 7, 9, 17, 18, 19));
					 button8->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[9] == 1) {
					 button9->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button9->Text = Convert::ToString(Checker(0, 0, 0, 8, 10, 18, 19, 20));
					 button9->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[10] == 1) {
					 button10->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button10->Text = Convert::ToString(Checker(0, 0, 0, 9, 0, 19, 20, 0));
					 button10->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[11] == 1) {
					 button11->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button11->Text = Convert::ToString(Checker(0, 1, 2, 0, 12, 0, 21, 22));
					 button11->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[12] == 1) {
					 button12->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button12->Text = Convert::ToString(Checker(1, 2, 3, 11, 13, 21, 22, 23));
					 button12->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[13] == 1) {
					 button13->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button13->Text = Convert::ToString(Checker(2, 3, 4, 12, 14, 22, 23, 24));
					 button13->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[14] == 1) {
					 button14->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button14->Text = Convert::ToString(Checker(3, 4, 5, 13, 15, 23, 24, 25));
					 button14->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[15] == 1) {
					 button15->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button15->Text = Convert::ToString(Checker(4, 5, 6, 14, 16, 24, 25, 26));
					 button15->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[16] == 1) {
					 button16->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button16->Text = Convert::ToString(Checker(5, 6, 7, 15, 17, 25, 26, 27));
					 button16->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[17] == 1) {
					 button17->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button17->Text = Convert::ToString(Checker(6, 7, 8, 16, 18, 26, 27, 28));
					 button17->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[18] == 1) {
					 button18->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button18->Text = Convert::ToString(Checker(7, 8, 9, 17, 19, 27, 28, 29));
					 button18->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[19] == 1) {
					 button19->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button19->Text = Convert::ToString(Checker(8, 9, 10, 18, 20, 28, 29, 30));
					 button19->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[20] == 1) {
					 button20->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button20->Text = Convert::ToString(Checker(9, 10, 0, 18, 19, 29, 30, 0));
					 button20->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[21] == 1) {
					 button21->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button21->Text = Convert::ToString(Checker(0, 11, 12, 0, 22, 0, 31, 32));
					 button21->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[22] == 1) {
					 button22->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button22->Text = Convert::ToString(Checker(11, 12, 13, 21, 23, 31, 32, 33));
					 button22->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[23] == 1) {
					 button23->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button23->Text = Convert::ToString(Checker(12, 13, 14, 22, 24, 32, 33, 34));
					 button23->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[24] == 1) {
					 button24->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button24->Text = Convert::ToString(Checker(13, 14, 15, 23, 25, 33, 34, 35));
					 button24->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[25] == 1) {
					 button25->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button25->Text = Convert::ToString(Checker(14, 15, 16, 24, 26, 34, 35, 36));
					 button25->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[26] == 1) {
					 button26->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button26->Text = Convert::ToString(Checker(15, 16, 17, 25, 27, 35, 36, 37));
					 button26->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[27] == 1) {
					 button27->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button27->Text = Convert::ToString(Checker(16, 17, 18, 26, 28, 36, 37, 38));
					 button27->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[28] == 1) {
					 button28->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button28->Text = Convert::ToString(Checker(17, 18, 19, 27, 29, 37, 38, 39));
					 button28->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[29] == 1) {
					 button29->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button29->Text = Convert::ToString(Checker(18, 19, 20, 28, 30, 38, 39, 40));
					 button29->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[30] == 1) {
					 button30->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button30->Text = Convert::ToString(Checker(19, 20, 0, 29, 0, 39, 40, 0));
					 button30->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[31] == 1) {
					 button31->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button31->Text = Convert::ToString(Checker(0, 21, 22, 0, 32, 0, 41, 42));
					 button31->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[32] == 1) {
					 button32->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button32->Text = Convert::ToString(Checker(21, 22, 23, 31, 33, 41, 42, 43));
					 button32->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[33] == 1) {
					 button33->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button33->Text = Convert::ToString(Checker(22, 23, 24, 32, 34, 42, 43, 44));
					 button33->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[34] == 1) {
					 button34->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button34->Text = Convert::ToString(Checker(23, 24, 25, 33, 35, 43, 44, 45));
					 button34->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[35] == 1) {
					 button35->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button35->Text = Convert::ToString(Checker(24, 25, 26, 34, 36, 44, 45, 46));
					 button35->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[36] == 1) {
					 button36->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button36->Text = Convert::ToString(Checker(25, 26, 27, 35, 37, 45, 46, 47));
					 button36->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[37] == 1) {
					 button37->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button37->Text = Convert::ToString(Checker(26, 27, 28, 36, 38, 46, 47, 48));
					 button37->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[38] == 1) {
					 button38->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button38->Text = Convert::ToString(Checker(27, 28, 29, 37, 39, 47, 48, 49));
					 button38->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[39] == 1) {
					 button39->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button39->Text = Convert::ToString(Checker(28, 29, 30, 38, 40, 48, 49, 50));
					 button39->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[40] == 1) {
					 button40->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button40->Text = Convert::ToString(Checker(29, 30, 0, 39, 0, 49, 50, 0));
					 button40->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[41] == 1) {
					 button41->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button41->Text = Convert::ToString(Checker(0, 31, 32, 0, 42, 0, 51, 52));
					 button41->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[42] == 1) {
					 button42->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button42->Text = Convert::ToString(Checker(31, 32, 33, 41, 43, 51, 52, 53));
					 button42->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[43] == 1) {
					 button43->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button43->Text = Convert::ToString(Checker(32, 33, 34, 42, 44, 52, 53, 54));
					 button43->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[44] == 1) {
					 button44->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button44->Text = Convert::ToString(Checker(33, 34, 35, 43, 45, 53, 54, 55));
					 button44->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[45] == 1) {
					 button45->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button45->Text = Convert::ToString(Checker(34, 35, 36, 44, 46, 54, 55, 56));
					 button45->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[46] == 1) {
					 button46->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button46->Text = Convert::ToString(Checker(35, 36, 37, 45, 47, 55, 56, 57));
					 button46->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[47] == 1) {
					 button47->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button47->Text = Convert::ToString(Checker(36, 37, 38, 46, 48, 56, 57, 58));
					 button47->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[48] == 1) {
					 button48->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button48->Text = Convert::ToString(Checker(37, 38, 39, 47, 49, 57, 58, 59));
					 button48->Enabled = false;
					 bombCounter->Focus();
				 }

		 }
private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[49] == 1) {
					 button49->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button49->Text = Convert::ToString(Checker(38, 39, 40, 48, 50, 58, 59, 60));
					 button49->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[50] == 1) {
					 button50->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button50->Text = Convert::ToString(Checker(39, 40, 0, 49, 0, 59, 60, 0));
					 button50->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[51] == 1) {
					 button51->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button51->Text = Convert::ToString(Checker(0, 41, 42, 0, 52, 0, 61, 62));
					 button51->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[52] == 1) {
					 button52->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button52->Text = Convert::ToString(Checker(41, 42, 43, 51, 53, 61, 62, 63));
					 button52->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[53] == 1) {
					 button53->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button53->Text = Convert::ToString(Checker(42, 43, 44, 52, 54, 62, 63, 64));
					 button53->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[54] == 1) {
					 button54->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button54->Text = Convert::ToString(Checker(43, 44, 45, 53, 55, 63, 64, 65));
					 button54->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[55] == 1) {
					 button55->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button55->Text = Convert::ToString(Checker(44, 45, 46, 54, 56, 64, 65, 66));
					 button55->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[56] == 1) {
					 button56->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button56->Text = Convert::ToString(Checker(45, 46, 47, 55, 57, 65, 66, 67));
					 button56->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[57] == 1) {
					 button57->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button57->Text = Convert::ToString(Checker(46, 47, 48, 56, 58, 66, 67, 68));
					 button57->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[58] == 1) {
					 button58->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button58->Text = Convert::ToString(Checker(47, 48, 49, 57, 59, 67, 68, 69));
					 button58->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[59] == 1) {
					 button59->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button59->Text = Convert::ToString(Checker(48, 49, 50, 58, 60, 68, 69, 70));
					 button59->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[60] == 1) {
					 button60->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button60->Text = Convert::ToString(Checker(49, 50, 0, 59, 0, 69, 70, 0));
					 button60->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[61] == 1) {
					 button61->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button61->Text = Convert::ToString(Checker(0, 51, 52, 0, 62, 0, 71, 72));
					 button61->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[62] == 1) {
					 button62->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button62->Text = Convert::ToString(Checker(51, 52, 53, 61, 63, 71, 72, 73));
					 button62->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[63] == 1) {
					 button63->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button63->Text = Convert::ToString(Checker(52, 53, 54, 62, 64, 72, 73, 74));
					 button63->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[64] == 1) {
					 button64->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button64->Text = Convert::ToString(Checker(53, 54, 55, 63, 64, 73, 74, 75));
					 button64->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[65] == 1) {
					 button65->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button65->Text = Convert::ToString(Checker(54, 55, 56, 64, 66, 74, 75, 76));
					 button65->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[66] == 1) {
					 button66->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button66->Text = Convert::ToString(Checker(55, 56, 57, 65, 67, 75, 76, 77));
					 button66->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[67] == 1) {
					 button67->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button67->Text = Convert::ToString(Checker(56, 57, 58, 66, 68, 76, 77, 78));
					 button67->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[68] == 1) {
					 button68->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button68->Text = Convert::ToString(Checker(57, 58, 59, 67, 69, 77, 78, 79));
					 button68->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[69] == 1) {
					 button69->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button69->Text = Convert::ToString(Checker(58, 59, 60, 68, 70, 78, 79, 80));
					 button69->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[70] == 1) {
					 button70->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button70->Text = Convert::ToString(Checker(59, 60, 0, 69, 0, 79, 80, 0));
					 button70->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[71] == 1) {
					 button71->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button71->Text = Convert::ToString(Checker(0, 61, 62, 0, 71, 0, 81, 82));
					 button71->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[72] == 1) {
					 button72->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button72->Text = Convert::ToString(Checker(61, 62, 63, 71, 73, 81, 82, 83));
					 button72->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[73] == 1) {
					 button73->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button73->Text = Convert::ToString(Checker(62, 63, 64, 72, 74, 82, 83, 84));
					 button73->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[74] == 1) {
					 button74->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button74->Text = Convert::ToString(Checker(63, 64, 65, 73, 75, 83, 84, 85));
					 button74->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[75] == 1) {
					 button75->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button75->Text = Convert::ToString(Checker(64, 65, 66, 74, 76, 84, 85, 86));
					 button75->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[76] == 1) {
					 button76->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button76->Text = Convert::ToString(Checker(65, 66, 67, 75, 77, 85, 86, 87));
					 button76->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[77] == 1) {
					 button77->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button77->Text = Convert::ToString(Checker(66, 67, 68, 76, 78, 86, 87, 88));
					 button77->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[78] == 1) {
					 button78->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button78->Text = Convert::ToString(Checker(67, 68, 69, 77, 79, 87, 88, 89));
					 button78->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[79] == 1) {
					 button79->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button79->Text = Convert::ToString(Checker(68, 69, 70, 78, 80, 88, 89, 90));
					 button79->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[80] == 1) {
					 button80->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button80->Text = Convert::ToString(Checker(69, 70, 0, 79, 0, 89, 90, 0));
					 button80->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[81] == 1) {
					 button81->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button81->Text = Convert::ToString(Checker(0, 71, 72, 0, 82, 0, 91, 92));
					 button81->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[82] == 1) {
					 button82->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button82->Text = Convert::ToString(Checker(71, 72, 73, 81, 83, 91, 92, 93));
					 button82->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[83] == 1) {
					 button83->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button83->Text = Convert::ToString(Checker(72, 73, 74, 82, 84, 92, 93, 94));
					 button83->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[84] == 1) {
					 button84->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button84->Text = Convert::ToString(Checker(73, 74, 75, 83, 85, 93, 94, 95));
					 button84->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[85] == 1) {
					 button85->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button85->Text = Convert::ToString(Checker(74, 75, 76, 84, 86, 94, 95, 96));
					 button85->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[86] == 1) {
					 button86->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button86->Text = Convert::ToString(Checker(75, 76, 77, 85, 87, 95, 96, 97));
					 button86->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[87] == 1) {
					 button87->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button87->Text = Convert::ToString(Checker(76, 77, 78, 86, 88, 96, 97, 98));
					 button87->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[88] == 1) {
					 button88->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button88->Text = Convert::ToString(Checker(77, 78, 79, 87, 89, 97, 98, 99));
					 button88->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[89] == 1) {
					 button89->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button89->Text = Convert::ToString(Checker(78, 79, 80, 0, 2, 0, 11, 12));
					 button89->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[90] == 1) {
					 button90->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button90->Text = Convert::ToString(Checker(79, 80, 0, 79, 0, 89, 90, 0));
					 button90->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[91] == 1) {
					 button91->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button91->Text = Convert::ToString(Checker(0, 81, 82, 0, 92, 0, 0, 0));
					 button91->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[92] == 1) {
					 button92->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button92->Text = Convert::ToString(Checker(81, 82, 83, 91, 93, 0, 0, 0));
					 button92->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[93] == 1) {
					 button93->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button93->Text = Convert::ToString(Checker(82, 83, 84, 92, 94, 0, 0, 0));
					 button93->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[94] == 1) {
					 button94->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button94->Text = Convert::ToString(Checker(83, 84, 85, 93, 95, 0, 0, 0));
					 button94->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[95] == 1) {
					 button95->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button95->Text = Convert::ToString(Checker(84, 85, 86, 94, 96, 0, 0, 0));
					 button95->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[96] == 1) {
					 button96->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button96->Text = Convert::ToString(Checker(85, 86, 87, 95, 97, 0, 0, 0));
					 button96->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[97] == 1) {
					 button97->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button97->Text = Convert::ToString(Checker(86, 87, 88, 96, 98, 0, 0, 0));
					 button97->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[98] == 1) {
					 button98->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button98->Text = Convert::ToString(Checker(87, 88, 89, 97, 99, 0, 0, 0));
					 button98->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[99] == 1) {
					 button99->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button99->Text = Convert::ToString(Checker(88, 89, 90, 98, 100, 0, 0, 0));
					 button99->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (mineStorage[100] == 1) {
					 button100->BackColor = Color::Red; 
					 DisableAllButtons();
					 bombCounter->Focus();
				 }
				 else {
					 button100->Text = Convert::ToString(Checker(89, 90, 0, 99, 0, 0, 0, 0));
					 button100->Enabled = false;
					 bombCounter->Focus();
				 }
		 }
private: System::Void UnfocusTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1->Enabled = false;
			 button2->Enabled = false;
			 button3->Enabled = false;
		 }
};
}
