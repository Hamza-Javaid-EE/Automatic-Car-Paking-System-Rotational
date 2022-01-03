#pragma once

namespace Project_02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Rotate;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Timer^ timer5;
	private: System::Windows::Forms::Timer^ timer6;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Timer^ timer7;
	private: System::Windows::Forms::Timer^ timer8;
	private: System::Windows::Forms::Timer^ timer9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label10;







	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Rotate = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(392, 176);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(90, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Empty01";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(512, 176);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(90, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Empty02";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(392, 296);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(90, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Empty03";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(512, 296);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(90, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Empty04";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Rotate
			// 
			this->Rotate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Rotate->Location = System::Drawing::Point(12, 340);
			this->Rotate->Name = L"Rotate";
			this->Rotate->Size = System::Drawing::Size(75, 53);
			this->Rotate->TabIndex = 4;
			this->Rotate->Text = L"Rotate";
			this->Rotate->UseVisualStyleBackColor = true;
			this->Rotate->Click += gcnew System::EventHandler(this, &Form1::Rotate_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(104, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 53);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Pause";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 399);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 51);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Enter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(104, 399);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 51);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &Form1::timer4_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 303);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Enter Your Vechicle Number";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// timer5
			// 
			this->timer5->Tick += gcnew System::EventHandler(this, &Form1::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Tick += gcnew System::EventHandler(this, &Form1::timer6_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(30, 513);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(141, 33);
			this->progressBar1->TabIndex = 10;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Form1::progressBar1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label6->Location = System::Drawing::Point(26, 477);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 26);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Parking Space";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(265, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 24);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Enter --->";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// timer7
			// 
			this->timer7->Tick += gcnew System::EventHandler(this, &Form1::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Tick += gcnew System::EventHandler(this, &Form1::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Tick += gcnew System::EventHandler(this, &Form1::timer9_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(213, 364);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(225, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Pay";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(265, 189);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 24);
			this->label9->TabIndex = 19;
			this->label9->Text = L"<--- Exit ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(2, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(10, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-7, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(846, 625);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(324, 396);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(168, 51);
			this->button6->TabIndex = 22;
			this->button6->Text = L"START";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.2F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(169, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(456, 34);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Automatic Car Parking System";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(839, 615);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Rotate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Auto Parking";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		int y = 0;
		int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
		int bar = 0;
		
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (y == 0) {
			if (label1->Text != label2->Text && label1->Text != label3->Text && label1->Text != label4->Text&&textBox1->Text!=""&&label1->Text=="Empty01") {
				label5->Text = "Enter Your Vehicle Number: ";
				//label1->Text = textBox1->Text;
				if (textBox1->Text != label2->Text && textBox1->Text != label3->Text && textBox1->Text != label4->Text) {
					label1->Text = textBox1->Text;
					textBox1->Text = "";
					progressBar1->Value = bar+=25;
					this->timer1->Enabled = true;
					this->timer5->Enabled = true;
				}
				else {
					//label1->Text = "Empty01";
					label5->Text = "Error";
				}
				
			}
			else {
				label5->Text = "Error";
			}

		}
		if (y == 1) {
			if (label2->Text != label1->Text && label2->Text != label3->Text && label2->Text != label4->Text && textBox1->Text != "" && label2->Text == "Empty02") {
				label5->Text = "Enter Your Vechicle Number: ";
				//label2->Text = textBox1->Text;
				if (textBox1->Text != label1->Text && textBox1->Text != label3->Text && textBox1->Text != label4->Text) {
					label2->Text = textBox1->Text;
					textBox1->Text = "";
					progressBar1->Value = bar+=25;
					this->timer2->Enabled = true;
					this->timer7->Enabled = true;
				}
				else {
					label5->Text = "Error";
				}
				
			}
			else {
				label5->Text = "Error";
			}
		}
		if (y == 3) {
			if (label3->Text != label2->Text && label3->Text != label1->Text && label3->Text != label4->Text && textBox1->Text != "" && label3->Text == "Empty03") {
				label5->Text = "Enter Your Vechicle Number: ";
				//label3->Text = textBox1->Text;
				if (textBox1->Text != label2->Text && textBox1->Text != label1->Text && textBox1->Text != label4->Text) {
					label3->Text = textBox1->Text;
					textBox1->Text = "";
					progressBar1->Value = bar+=25;
					this->timer4->Enabled = true;
					this->timer8->Enabled = true;
				}
				else {
					//label3->Text = "Empty03";
					label5->Text = "Error";
				}
				
			}
			else {
				label5->Text = "Error";
			}
		}
		if (y == 2) {
			if (label4->Text != label1->Text && label4->Text != label2->Text && label4->Text != label3->Text && textBox1->Text != "" && label4->Text == "Empty04") {
				label5->Text = "Enter Your Vechicle Number: ";
				//label4->Text = textBox1->Text;
				if (textBox1->Text != label1->Text && textBox1->Text != label2->Text && textBox1->Text != label3->Text) {
					label4->Text = textBox1->Text;
					textBox1->Text = "";
					progressBar1->Value = bar += 25;
					this->timer3->Enabled = true;
					this->timer9->Enabled = true;
				}
				else {
					label5->Text = "Error";
				}
				
			}
			else {
				//label4->Text = "Empty04";
				label5->Text = "Error";
			}
		}
	}
		   bool pay=1,pay2=1,pay3=1,pay4=1;
		   int cash=0;
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == label1->Text) {
		this->timer6->Enabled = false;
		check = 0; 
		if (y == 0) {
			int fare = 0;
			//check = 0;
			this->timer5->Enabled = false;
			if (label1->Text != "Empty01" && label1->Text == textBox1->Text) {

				textBox1->Text = "";
				fare = 0.5 * r1;
				fare += cash;
				cash = fare;
				label8->Text = "Your Fare: ";
				label5->Text = fare.ToString();
				
			}
			else if (label1->Text == "Empty01") {
				label5->Text = fare.ToString();
			}

		}
		else {
			check = 1;
			Rotate->PerformClick();
		
		}
	}

	if (textBox1->Text == label2->Text) {
		this->timer6->Enabled = false;
		if (y == 1) {
			int fare = 0;
			check = 0;
			this->timer7->Enabled = false;
			if (label2->Text != "Empty02" && label2->Text == textBox1->Text) {
				textBox1->Text = "";
				fare = 0.5 * r2;
				fare += cash;
				cash = fare;
				label8->Text = "Your Fare: ";
				label5->Text = fare.ToString();
				r2 = 0;
				fare = 0;
				
			}
			else if (label2->Text == "Empty02") {
				label5->Text = fare.ToString();
			}

		}
		else {
			check = 1;
			Rotate->PerformClick();
		}
	}
	
	if (textBox1->Text == label3->Text) {
		this->timer6->Enabled = false;
		if (y == 3) {
			int fare = 0;
			check = 0;
			this->timer8->Enabled = false;

			if (label3->Text != "Empty03" && label3->Text == textBox1->Text) {
				textBox1->Text = "";
				fare = 0.5 * r4;
				fare += cash;
				cash = fare;
				label8->Text = "Your Fare: ";
				label5->Text = fare.ToString();
				r4 = 0;
				fare = 0;
				
			}
			else if (label3->Text == "Empty03") {
				label5->Text = fare.ToString();
			}

		}
		else {
			check = 1;
			Rotate->PerformClick();

			
		}
	}
	
	if (textBox1->Text == label4->Text) {
		this->timer6->Enabled = false;
		if (y == 2) {
			int fare = 0;
			check = 0;
			this->timer9->Enabled = false;

			if (label4->Text != "Empty04" && label4->Text == textBox1->Text) {
				textBox1->Text = "";
				fare = 0.5 * r3;
				fare += cash;
				cash = fare;
				label8->Text = "Your Fare: ";
				label5->Text = fare.ToString();
				r3 = 0;
				fare = 0;
				
			}
			else if (label4->Text == "Empty04") {
				label5->Text = fare.ToString();
			}

		}
		else {
			check = 1;
			Rotate->PerformClick();
		}
	}
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void Rotate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (y == 0) {
		this->timer1->Enabled = true;
		
	}
	if (y == 1) {
		this->timer2->Enabled = true;
		
	}
	if (y == 2) {
		this->timer3->Enabled = true;
		
	}
	System::Threading::Thread::Sleep(1000);
	if (y == 3) {
		this->timer4->Enabled = true;
		
	}
	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	// calculate new position
	y = 1;
	int x;
	for (x = 0; x < 100; x++) {
		this->label1->Top++;
		this->label2->Left --;
		this->label3->Left ++;
		this->label4->Top--;
	}
	System::Threading::Thread::Sleep(10);
	if (check == 1) {
		button4->PerformClick();
	}

	// when to stop
	
		this->timer1->Enabled = false;
		//this->timer2->Enabled = true;
	
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	// calculate new position
	y = 2;
	int x;
	for (x = 0; x < 100; x++) {
		this->label1->Left ++;
		this->label2->Top++;
		this->label3->Top--;
		this->label4->Left --;
	}
	System::Threading::Thread::Sleep(10);
	if (check == 1) {
		button4->PerformClick();
	}

	// when to stop
	
		this->timer2->Enabled = false;
		//this->timer3->Enabled = true;
	
}

private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	// calculate new position
	y = 3;
	int x;
	for (x = 0; x < 100; x++) {
		this->label1->Top--;
		this->label2->Left++;
		this->label3->Left--;
		this->label4->Top++;
	}
	System::Threading::Thread::Sleep(10);
	if (check == 1) {
		button4->PerformClick();
	}

	// when to stop
	this->timer3->Enabled = false;
	//this->timer4->Enabled = true;
}
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	// calculate new position
	y = 0;
	int x;
	for (x = 0; x < 100; x++) {
		this->label1->Left--;
		this->label2->Top--;
		this->label3->Top++;
		this->label4->Left++;
	}
	System::Threading::Thread::Sleep(10);
	if (check == 1) {
		button4->PerformClick();
	}

	// when to stop

	this->timer4->Enabled = false;
	//this->timer1->Enabled = true;
}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Text = "Enter Your Vechicle Number: ";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label5->Text = "Enter your Vehicle Number: ";
}

int check = 0;
private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
	check = 1;
	Rotate->PerformClick();
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Minimum = 0;
	progressBar1->Maximum = 4;
	
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   //For  Fare
private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
		r1++;
}
private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
	r2++;
}
private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
	r4++;
}
private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
	r3++;
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	button5->PerformClick();
}
//For Check
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (y == 0&&label8->Text=="Your Fare: ") {
		if (textBox2->Text == label5->Text) {

			label1->Text = "Empty01";
			label8->Text = "Thank You for Paying Your Fare";
			label5->Text = "Enter Your Vehicle Number:";
			progressBar1->Value = bar -= 25;
			textBox2->Text = "";
			pay = 0;
			r1 = 0;
			cash = 0;

			
			
		}
		else {
			pay = 1;
			label5->Text = "Kindly Pay Your Fare";
			this->timer5->Enabled=true;
			Rotate->PerformClick();

		}
	}
	if (y == 1&&label8->Text == "Your Fare: ") {
		if (textBox2->Text == label5->Text) {
			label2->Text = "Empty02";
			label8->Text = "Thank You for Paying Your Fare";
			label5->Text = "Enter Your Vehicle Number:";
			progressBar1->Value = bar -= 25;
			textBox2->Text = "";
			pay2 = 0;
			r2 = 0;
			cash = 0;
		}
		else {
			pay2 = 1;
			label5->Text = "Kindly Pay Your Fare";
			this->timer5->Enabled = true;
			Rotate->PerformClick();

		}
	}
	if (y == 3&&label8->Text == "Your Fare: ") {
		if (textBox2->Text == label5->Text) {
			label3->Text = "Empty03";
			label8->Text = "Thank You for Paying Your Fare";
			label5->Text = "Enter Your Vehicle Number:";
			progressBar1->Value = bar -= 25;
			textBox2->Text = "";
			pay3 = 0;
			r3 = 0;
			cash = 0;
		}
		else {
			pay3 = 1;
			label5->Text = "Kindly Pay Your Fare";
			this->timer5->Enabled = true;
			Rotate->PerformClick();

		}
	}
	if (y == 2&&label8->Text == "Your Fare: ") {
		if (textBox2->Text == label5->Text) {
			label4->Text = "Empty04";
			label8->Text = "Thank You for Paying Your Fare";
			label5->Text = "Enter Your Vehicle Number:";
			progressBar1->Value = bar -= 25;
			textBox2->Text = "";
			pay4 = 0;
			r4 = 0;
			cash = 0;
		}
		else {
			pay4 = 1;
			label5->Text = "Kindly Pay Your Fare";
			this->timer5->Enabled = true;
			Rotate->PerformClick();

		}
	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Hide();
	button6->Hide();
}
};
}
