#pragma once
#include "ReadingFile.h"
#include "Course.h"
#include "Classroom.h"
#include "SmallClassroom.h"
#include "BigClassroom.h"
#include<msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <filesystem>
namespace Ceng206Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace std;

	ReadingFile read;
	int Check;
	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:

		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox14;

	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::Button^ button2;











	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(165, 377);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(176, 53);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Make Schedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->checkBox14);
			this->panel2->Controls->Add(this->checkBox13);
			this->panel2->Controls->Add(this->checkBox11);
			this->panel2->Controls->Add(this->checkBox12);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(27, 11);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(202, 92);
			this->panel2->TabIndex = 10;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(93, 36);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(82, 17);
			this->checkBox14->TabIndex = 4;
			this->checkBox14->Text = L"Service.csv";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox14_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(7, 35);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(69, 17);
			this->checkBox13->TabIndex = 3;
			this->checkBox13->Text = L"Busy.csv";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox13_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(7, 12);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(84, 17);
			this->checkBox11->TabIndex = 2;
			this->checkBox11->Text = L"Courses.csv";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged_1);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(93, 12);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(94, 17);
			this->checkBox12->TabIndex = 1;
			this->checkBox12->Text = L"Classroom.csv";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Show Selected File Datas";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(10, 107);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(512, 267);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Location = System::Drawing::Point(245, 2);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(273, 102);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Data Input Operations";
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(130, 27);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 53);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Class Busy Times Operations";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(4, 27);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 53);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Class Number Operations";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->numericUpDown2);
			this->panel3->Controls->Add(this->numericUpDown1);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(236, 19);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(286, 109);
			this->panel3->TabIndex = 4;
			this->panel3->Visible = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(142, 50);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 39);
			this->button7->TabIndex = 18;
			this->button7->Text = L"CANCEL / CLOSE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown2->Location = System::Drawing::Point(242, 19);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(40, 20);
			this->numericUpDown2->TabIndex = 17;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(105, 20);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(32, 20);
			this->numericUpDown1->TabIndex = 16;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 50);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"SET";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L" BigClass Number    : ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(142, 19);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SmallClass Number : ";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(232, 19);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(308, 148);
			this->panel4->TabIndex = 16;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(278, 0);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(30, 25);
			this->button10->TabIndex = 9;
			this->button10->Text = L"X";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(9, 76);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(139, 43);
			this->button9->TabIndex = 8;
			this->button9->Text = L"ADD";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Morning", L"Afternoon" });
			this->comboBox3->Location = System::Drawing::Point(206, 43);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(92, 21);
			this->comboBox3->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday"
			});
			this->comboBox2->Location = System::Drawing::Point(106, 43);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(92, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"CENG104", L"CENG202", L"CENG204", L"CENG206",
					L"CENG302", L"CENG304", L"CENG306", L"CENG310", L"CENG316", L"CENG317", L"CENG318", L"CENG404", L"CENG415", L"CENG427", L"CENG451",
					L"CENG466", L"CENG470", L"CENG472", L"CENG474", L"CHEM101", L"ENG102", L"ENGR202", L"ENGR254", L"ENGR256", L"ENGR402", L"ENGR404",
					L"MATH102", L"MATH106", L"PHYS102", L"TDL102", L"TIT101"
			});
			this->comboBox1->Location = System::Drawing::Point(9, 43);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(110, 27);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Weekday";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(204, 27);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Timeline";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(158, 76);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(139, 43);
			this->button8->TabIndex = 2;
			this->button8->Text = L"DELETE";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 27);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Class Code";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(-7, 435);
			this->progressBar1->Margin = System::Windows::Forms::Padding(2);
			this->progressBar1->Maximum = 380;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(547, 29);
			this->progressBar1->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(532, 456);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(548, 495);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(548, 495);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Group11 Project2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		MessageBox::Show("Succesfully Readed From Files");

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		textBox1->Text = "";
		string temp;
		if (checkBox11->Checked || checkBox12->Checked || checkBox13->Checked || checkBox14->Checked)
		{
			button5->Enabled = true;
			progressBar1->Value += 10;
			Check = 1;
			if (Check > 2)
				button3->Visible = true;
			if (checkBox11->Checked)
			{
				temp = "";
				ifstream instream("courses.csv");
				do {
					msclr::interop::marshal_context context;
					string  courseCode, courseName, courseYear, courseCredit, courseCorE, courseDorS, courseInsructor;
					getline(instream, temp, ';');
					courseCode = temp;
					String^ str1 = context.marshal_as<String^>(courseCode);
					getline(instream, temp, ';');
					courseName = temp;
					String^ str2 = context.marshal_as<String^>(courseName);
					getline(instream, temp, ';');
					courseYear = temp;
					String^ str3 = context.marshal_as<String^>(courseYear);
					getline(instream, temp, ';');
					courseCredit = temp;
					String^ str4 = context.marshal_as<String^>(courseCredit);
					getline(instream, temp, ';');
					courseCorE = temp;
					String^ str5 = context.marshal_as<String^>(courseCorE);
					getline(instream, temp, ';');
					courseDorS = temp;
					String^ str6 = context.marshal_as<String^>(courseDorS);
					getline(instream, temp, '\n');
					courseInsructor = temp;
					String^ str7 = context.marshal_as<String^>(courseInsructor);

					textBox1->Text += str1;
					textBox1->Text += " ";
					textBox1->Text += str2;
					textBox1->Text += " ";
					textBox1->Text += str3;
					textBox1->Text += " ";
					textBox1->Text += str4;
					textBox1->Text += " ";
					textBox1->Text += str5;
					textBox1->Text += " ";
					textBox1->Text += str6;
					textBox1->Text += " ";
					textBox1->Text += str7;
					textBox1->Text += "\r\n";
				} while (!instream.eof());
				textBox1->Text += "\r\n";
				instream.close();
			}
			if (checkBox12->Checked)
			{
				temp = "";
				ifstream instream("classroom.csv");
				do {
					msclr::interop::marshal_context context;
					string  bigClass, smallClass;
					getline(instream, temp, ';');
					bigClass = temp;
					String^ str1 = context.marshal_as<String^>(bigClass);
					getline(instream, temp, '\n');
					smallClass = temp;
					String^ str2 = context.marshal_as<String^>(smallClass);

					textBox1->Text += str1;
					textBox1->Text += " ";
					textBox1->Text += str2;

					textBox1->Text += "\r\n";
				} while (!instream.eof());
				textBox1->Text += "\r\n";
				instream.close();
			}
			if (checkBox13->Checked)
			{
				temp = "";
				ifstream instream("busy.csv");
				do {
					msclr::interop::marshal_context context;
					string  CourseCode, CourseDay, CourseTimeline;
					getline(instream, temp, ';');
					CourseCode = temp;
					String^ str1 = context.marshal_as<String^>(CourseCode);
					getline(instream, temp, ';');
					CourseDay = temp;
					String^ str2 = context.marshal_as<String^>(CourseDay);
					getline(instream, temp, '\n');
					CourseTimeline = temp;
					String^ str3 = context.marshal_as<String^>(CourseTimeline);

					textBox1->Text += str1;
					textBox1->Text += " ";
					textBox1->Text += str2;
					textBox1->Text += " ";
					textBox1->Text += str3;
					textBox1->Text += "\r\n";
				} while (!instream.eof());
				textBox1->Text += "\r\n";
				instream.close();
			}
			if (checkBox14->Checked)
			{
				temp = "";
				ifstream instream("service.csv");
				do {
					msclr::interop::marshal_context context;
					string  CourseCode, CourseDay, CourseTimeline;
					getline(instream, temp, ';');
					CourseCode = temp;
					String^ str1 = context.marshal_as<String^>(CourseCode);
					getline(instream, temp, ';');
					CourseDay = temp;
					String^ str2 = context.marshal_as<String^>(CourseDay);
					getline(instream, temp, '\n');
					CourseTimeline = temp;
					String^ str3 = context.marshal_as<String^>(CourseTimeline);

					textBox1->Text += str1;
					textBox1->Text += " ";
					textBox1->Text += str2;
					textBox1->Text += " ";
					textBox1->Text += str3;
					textBox1->Text += "\r\n";
				} while (!instream.eof());
				textBox1->Text += "\r\n";
				instream.close();
			}
		}
		else {
			MessageBox::Show("You must to check one or more file!");
		}
	}

	private: System::Void checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox11_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		int bigClass = int(numericUpDown1->Value);
		int smallClass = int(numericUpDown2->Value);
		ofstream myfile;
		myfile.open("Classroom.csv");
		myfile << "bigClass;" << bigClass << "\n";
		myfile << "smallClass;" << smallClass << "\n";
		myfile.close();
		MessageBox::Show("Setting Complete.");
		panel3->Visible = false;

	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Maximum = 5;
		numericUpDown1->Minimum = 0;
	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown2->Maximum = 5;
		numericUpDown2->Minimum = 0;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		button6->Enabled = true;
		panel3->Visible = true;
		progressBar1->Value += 25;
		Check=2;
		if (Check > 2)
			button3->Visible = true;
		
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Visible = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		int check = 0;

		msclr::interop::marshal_context context;
		std::string courseCode = context.marshal_as<std::string>(comboBox1->Text);
		std::string courseDay = context.marshal_as<std::string>(comboBox2->Text);
		std::string courseTime = context.marshal_as<std::string>(comboBox3->Text);

		ifstream myfile;
		myfile.open("busy.csv");
		ofstream temp;
		temp.open("temp.txt");
		string line;
		string targetLine = courseCode + ";" + courseDay + ";" + courseTime;
		while (getline(myfile, line))
		{
			if (line != targetLine)
				temp << line << endl;
			else
				check = 1;
		}
		myfile.close();
		temp.close();
		remove("busy.csv");
		rename("temp.txt", "busy.csv");


		if (check == 0)
		{
			MessageBox::Show("There is no data with you selected.");
		}
		else
		{
			MessageBox::Show("Delete Completed. Please read files again.");
			textBox1->Text = "";
		}
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = true;
		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;
		comboBox3->SelectedIndex = 0;
		progressBar1->Value += 35;
		Check=3;
		if (Check > 2)
			button3->Visible = true;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		int check = 0;
		msclr::interop::marshal_context context;
		std::string courseCode = context.marshal_as<std::string>(comboBox1->Text);
		std::string courseDay = context.marshal_as<std::string>(comboBox2->Text);
		std::string courseTime = context.marshal_as<std::string>(comboBox3->Text);

		ofstream foutput;
		ifstream finput;
		finput.open("busy.csv");
		foutput.open("busy.csv", ios::app);
		string line = "";
		bool isFound = false;
		while (!finput.eof())
		{

			getline(finput, line);
			if (line.find(courseCode) != string::npos && line.find(courseDay) != string::npos && line.find(courseTime) != string::npos)
			{
				isFound = 1;
				check = 0;
				break;
			}
			else
				isFound = 0;
			check = 1;
		}

		if (finput.eof() && (!isFound))
		{
			foutput << courseCode << ";" << courseDay << ";" << courseTime << endl;
		}
		finput.close();
		foutput.close();
		if (check == 0)
		{
			MessageBox::Show("There are already exists with you entered.");
		}
		else
		{
			MessageBox::Show("Add Completed. Please read files again.");
			textBox1->Text = "";
			checkBox11->Checked = false;
			checkBox12->Checked = false;
			checkBox13->Checked = false;
			checkBox14->Checked = false;
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Value = 380;
		read.makeSchedule();
		if (read.i == 0) {
			MessageBox::Show("There is no way to make a perfect schedule for the department");
			progressBar1->Visible = false;
		}
		else {
			
			
			MessageBox::Show("Schedule created successfully!");
			string str5 = "", temp;
			try {
				ifstream instream("schedule.txt");
				do {
					getline(instream, temp, '\n');

					if (!instream.eof()) {
						str5 += temp;
						str5 += "\r\n";
					}
				} while (instream.good());
				remove("schedule.txt");
				instream.close();
			}
			catch (std::exception const& e) {
				cout << "File cannot opened! " << e.what() << endl;
			}
			
			msclr::interop::marshal_context context;
			String^ str = context.marshal_as<String^>(str5);
			progressBar1->Visible = false;
			textBox1->Text = str;
			
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
