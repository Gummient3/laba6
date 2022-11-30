#pragma once
#include <vector>
#include <cliext/vector>
#include <algorithm>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using cliext::vector;
	using namespace System::IO;
	//using std::sort;
	//using std::begin;
	//using std::end;
	//using System::Array::Sort;
	//using System::Array::Sort;
	//using Array::Reverse;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		vector<Int32> originalArray;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	public:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

		

	public:

		   Random^ rand = gcnew Random();
		//int operationFlag = 0;
		
		vector<Int32> maxToMin(vector<Int32> originalArray) {
			array< Int32 >^ tmpArr = gcnew array< Int32 >(originalArray.size());
			vector<Int32> out;
			tmpArr = originalArray.to_array();
			Array::Sort(tmpArr);
			Array::Reverse(tmpArr);
			for each (int el in tmpArr) {

				out.push_back(el);

			}
			return out;
		}

		void formatTxt() {

		}

		vector<Int32> minToMax(vector<Int32> originalArray) {
			array< Int32 >^ tmpArr = gcnew array< Int32 >(originalArray.size());
			vector<Int32> out;
			tmpArr = originalArray.to_array();
			Array::Sort(tmpArr);
			for each (int el in tmpArr) {

				out.push_back(el);

			}
			return out;
		}

		String^ getEven(vector<Int32> originalArray) {
			String^ tmpStr = "";
			for each (int el in originalArray) {

				if (el % 2 == 0) {
					tmpStr += el.ToString();
					tmpStr += " ";
				}
				

			}
			return tmpStr;
			
		}
		

		String^ getOdd(vector<Int32> originalArray) {
			String^ tmpStr = "";
			for each (int el in originalArray) {

				if (el % 2 != 0) {
					tmpStr += el.ToString();
					tmpStr += " ";
				}


			}
			return tmpStr;

		}
		
		Double getSum(vector<Int32> originalArray) {
			Double summa = 0;

			for each (int el in originalArray) {

				summa += el;

			}


			return summa;
		}
		Double findMax(vector<Int32> originalArray) {

			array< Int32 >^ tmpArr = gcnew array< Int32 >(originalArray.size());
			tmpArr = originalArray.to_array();
			//int n = sizeof(tmpArr) / sizeof(tmpArr[0]);

			Array::Sort(tmpArr);
			Array::Reverse(tmpArr);
			return tmpArr[0];

		}

		Double findMin(vector<Int32> originalArray) {
			
			array< Int32 >^ tmpArr = gcnew array< Int32 >(5);
			tmpArr = originalArray.to_array();
			//int n = sizeof(tmpArr) / sizeof(tmpArr[0]);
			
			Array::Sort(tmpArr);
			return tmpArr[0];
			
		}

		String^ ArrayToString(vector<Int32> originalArray) {
			String^ tmpstr = "";

			for each (int el in originalArray) {

				tmpstr += el;
				tmpstr += " ";
				
			}


			return tmpstr;
		}

		Double getAvg(vector<Int32> originalArray) {
			Double avg;
			for each (int el in originalArray){
			
				avg += el;
				//MessageBox::Show(avg.ToString());

			}
			avg /= originalArray.size();
			return avg;

		}

		void formatFunc(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e, System::Windows::Forms::TextBox^ txt, bool enableMinus) {
			if (enableMinus == false) {
				if ((!Char::IsDigit(e->KeyChar)) && e->KeyChar != 8 || ((txt->TextLength > 5) && e->KeyChar != 8)) {



					e->Handled = true;
				}
			}

			else {
				


			}
		}
		
		
		vector<Int32> generate(int amount, int min, int max) {
			max += 1;
			//min -= 1;
			vector<Int32> out;
			while (true) {
				try {
					int myrand = rand->Next() % (max - min) + min;
					if (out.size() == amount) break;

					out.push_back(myrand);
				}
				catch (...) {
					out.push_back(0);
				}
				
				

			}
			
			return out;

		}
		
		
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ evenBtn;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ max;

	private: System::Windows::Forms::TextBox^ min;

	private: System::Windows::Forms::TextBox^ kolvo;

	private: System::Windows::Forms::Label^ maxLb;

	private: System::Windows::Forms::Label^ minLb;


	private: System::Windows::Forms::Label^ kolvoLb;



	private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::RadioButton^ maxToMinBtn;


private: System::Windows::Forms::RadioButton^ minToMaxBtn;

private: System::Windows::Forms::RadioButton^ oddButton;

	private: System::Windows::Forms::RadioButton^ avgBtn;
private: System::Windows::Forms::RadioButton^ maxBtn;


private: System::Windows::Forms::RadioButton^ minBtn;

	private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ sumBtn;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ original;	private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ result;
	private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Button^ CloseBtn;
private: System::Windows::Forms::Button^ saveFileBtn;


private: System::Windows::Forms::Button^ DoBtn;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ genBtn;
private: System::Windows::Forms::Button^ opnFileBtn;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->max = (gcnew System::Windows::Forms::TextBox());
			this->min = (gcnew System::Windows::Forms::TextBox());
			this->kolvo = (gcnew System::Windows::Forms::TextBox());
			this->maxLb = (gcnew System::Windows::Forms::Label());
			this->minLb = (gcnew System::Windows::Forms::Label());
			this->kolvoLb = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->evenBtn = (gcnew System::Windows::Forms::RadioButton());
			this->maxToMinBtn = (gcnew System::Windows::Forms::RadioButton());
			this->minToMaxBtn = (gcnew System::Windows::Forms::RadioButton());
			this->oddButton = (gcnew System::Windows::Forms::RadioButton());
			this->maxBtn = (gcnew System::Windows::Forms::RadioButton());
			this->minBtn = (gcnew System::Windows::Forms::RadioButton());
			this->avgBtn = (gcnew System::Windows::Forms::RadioButton());
			this->sumBtn = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->original = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->CloseBtn = (gcnew System::Windows::Forms::Button());
			this->saveFileBtn = (gcnew System::Windows::Forms::Button());
			this->DoBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->genBtn = (gcnew System::Windows::Forms::Button());
			this->opnFileBtn = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1075, 401);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1075, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"rand";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->max);
			this->groupBox1->Controls->Add(this->min);
			this->groupBox1->Controls->Add(this->kolvo);
			this->groupBox1->Controls->Add(this->maxLb);
			this->groupBox1->Controls->Add(this->minLb);
			this->groupBox1->Controls->Add(this->kolvoLb);
			this->groupBox1->Location = System::Drawing::Point(13, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(425, 146);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// max
			// 
			this->max->Location = System::Drawing::Point(263, 77);
			this->max->Name = L"max";
			this->max->Size = System::Drawing::Size(100, 20);
			this->max->TabIndex = 5;
			this->max->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
			// 
			// min
			// 
			this->min->Location = System::Drawing::Point(263, 51);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(100, 20);
			this->min->TabIndex = 4;
			this->min->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			this->min->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// kolvo
			// 
			this->kolvo->Location = System::Drawing::Point(263, 20);
			this->kolvo->Name = L"kolvo";
			this->kolvo->Size = System::Drawing::Size(100, 20);
			this->kolvo->TabIndex = 3;
			this->kolvo->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->kolvo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// maxLb
			// 
			this->maxLb->AutoSize = true;
			this->maxLb->Location = System::Drawing::Point(6, 77);
			this->maxLb->Name = L"maxLb";
			this->maxLb->Size = System::Drawing::Size(194, 13);
			this->maxLb->TabIndex = 2;
			this->maxLb->Text = L"Максимальное значение диапозона:";
			this->maxLb->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// minLb
			// 
			this->minLb->AutoSize = true;
			this->minLb->Location = System::Drawing::Point(6, 51);
			this->minLb->Name = L"minLb";
			this->minLb->Size = System::Drawing::Size(188, 13);
			this->minLb->TabIndex = 1;
			this->minLb->Text = L"Минимальное значение диапозона:";
			this->minLb->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// kolvoLb
			// 
			this->kolvoLb->AutoSize = true;
			this->kolvoLb->Location = System::Drawing::Point(6, 20);
			this->kolvoLb->Name = L"kolvoLb";
			this->kolvoLb->Size = System::Drawing::Size(174, 13);
			this->kolvoLb->TabIndex = 0;
			this->kolvoLb->Text = L"Количетсво элементов массива:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->evenBtn);
			this->groupBox2->Controls->Add(this->maxToMinBtn);
			this->groupBox2->Controls->Add(this->minToMaxBtn);
			this->groupBox2->Controls->Add(this->oddButton);
			this->groupBox2->Controls->Add(this->maxBtn);
			this->groupBox2->Controls->Add(this->minBtn);
			this->groupBox2->Controls->Add(this->avgBtn);
			this->groupBox2->Controls->Add(this->sumBtn);
			this->groupBox2->Location = System::Drawing::Point(13, 259);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(425, 162);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// evenBtn
			// 
			this->evenBtn->AutoSize = true;
			this->evenBtn->Location = System::Drawing::Point(159, 37);
			this->evenBtn->Name = L"evenBtn";
			this->evenBtn->Size = System::Drawing::Size(118, 17);
			this->evenBtn->TabIndex = 8;
			this->evenBtn->TabStop = true;
			this->evenBtn->Text = L"Четные элементы";
			this->evenBtn->UseVisualStyleBackColor = true;
			// 
			// maxToMinBtn
			// 
			this->maxToMinBtn->AutoSize = true;
			this->maxToMinBtn->Location = System::Drawing::Point(159, 106);
			this->maxToMinBtn->Name = L"maxToMinBtn";
			this->maxToMinBtn->Size = System::Drawing::Size(154, 17);
			this->maxToMinBtn->TabIndex = 7;
			this->maxToMinBtn->TabStop = true;
			this->maxToMinBtn->Text = L"Сортировка по убыванию";
			this->maxToMinBtn->UseVisualStyleBackColor = true;
			// 
			// minToMaxBtn
			// 
			this->minToMaxBtn->AutoSize = true;
			this->minToMaxBtn->Location = System::Drawing::Point(159, 83);
			this->minToMaxBtn->Name = L"minToMaxBtn";
			this->minToMaxBtn->Size = System::Drawing::Size(170, 17);
			this->minToMaxBtn->TabIndex = 6;
			this->minToMaxBtn->TabStop = true;
			this->minToMaxBtn->Text = L"Сортировка по возрастанию";
			this->minToMaxBtn->UseVisualStyleBackColor = true;
			// 
			// oddButton
			// 
			this->oddButton->AutoSize = true;
			this->oddButton->Location = System::Drawing::Point(159, 60);
			this->oddButton->Name = L"oddButton";
			this->oddButton->Size = System::Drawing::Size(129, 17);
			this->oddButton->TabIndex = 5;
			this->oddButton->TabStop = true;
			this->oddButton->Text = L"Нечетные элементы";
			this->oddButton->UseVisualStyleBackColor = true;
			// 
			// maxBtn
			// 
			this->maxBtn->AutoSize = true;
			this->maxBtn->Location = System::Drawing::Point(9, 106);
			this->maxBtn->Name = L"maxBtn";
			this->maxBtn->Size = System::Drawing::Size(150, 17);
			this->maxBtn->TabIndex = 3;
			this->maxBtn->TabStop = true;
			this->maxBtn->Text = L"Максимальный элемент";
			this->maxBtn->UseVisualStyleBackColor = true;
			// 
			// minBtn
			// 
			this->minBtn->AutoSize = true;
			this->minBtn->Location = System::Drawing::Point(9, 83);
			this->minBtn->Name = L"minBtn";
			this->minBtn->Size = System::Drawing::Size(144, 17);
			this->minBtn->TabIndex = 2;
			this->minBtn->TabStop = true;
			this->minBtn->Text = L"Минимальный элемент";
			this->minBtn->UseVisualStyleBackColor = true;
			// 
			// avgBtn
			// 
			this->avgBtn->AutoSize = true;
			this->avgBtn->Location = System::Drawing::Point(9, 60);
			this->avgBtn->Name = L"avgBtn";
			this->avgBtn->Size = System::Drawing::Size(118, 17);
			this->avgBtn->TabIndex = 1;
			this->avgBtn->TabStop = true;
			this->avgBtn->Text = L"Среднее значение";
			this->avgBtn->UseVisualStyleBackColor = true;
			this->avgBtn->CheckedChanged += gcnew System::EventHandler(this, &Form1::avgBtn_CheckedChanged);
			this->avgBtn->Click += gcnew System::EventHandler(this, &Form1::avgBtn_Click);
			// 
			// sumBtn
			// 
			this->sumBtn->AutoSize = true;
			this->sumBtn->Location = System::Drawing::Point(9, 37);
			this->sumBtn->Name = L"sumBtn";
			this->sumBtn->Size = System::Drawing::Size(117, 17);
			this->sumBtn->TabIndex = 0;
			this->sumBtn->TabStop = true;
			this->sumBtn->Text = L"Сумма элементов";
			this->sumBtn->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Исходный массив:";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// original
			// 
			this->original->Location = System::Drawing::Point(15, 223);
			this->original->Name = L"original";
			this->original->ReadOnly = true;
			this->original->Size = System::Drawing::Size(423, 20);
			this->original->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 447);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Результат операции:";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(13, 489);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->Size = System::Drawing::Size(423, 20);
			this->result->TabIndex = 8;
			// 
			// CloseBtn
			// 
			this->CloseBtn->Location = System::Drawing::Point(524, 486);
			this->CloseBtn->Name = L"CloseBtn";
			this->CloseBtn->Size = System::Drawing::Size(125, 23);
			this->CloseBtn->TabIndex = 9;
			this->CloseBtn->Text = L"Закрыть";
			this->CloseBtn->UseVisualStyleBackColor = true;
			this->CloseBtn->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// saveFileBtn
			// 
			this->saveFileBtn->Location = System::Drawing::Point(524, 417);
			this->saveFileBtn->Name = L"saveFileBtn";
			this->saveFileBtn->Size = System::Drawing::Size(125, 23);
			this->saveFileBtn->TabIndex = 10;
			this->saveFileBtn->Text = L"Сохранить в файл";
			this->saveFileBtn->UseVisualStyleBackColor = true;
			this->saveFileBtn->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// DoBtn
			// 
			this->DoBtn->Location = System::Drawing::Point(524, 319);
			this->DoBtn->Name = L"DoBtn";
			this->DoBtn->Size = System::Drawing::Size(125, 23);
			this->DoBtn->TabIndex = 11;
			this->DoBtn->Text = L"Выполнить";
			this->DoBtn->UseVisualStyleBackColor = true;
			this->DoBtn->Click += gcnew System::EventHandler(this, &Form1::DoBtn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(521, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Имя файла вывода:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(521, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Имя файла ввода:";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// genBtn
			// 
			this->genBtn->Location = System::Drawing::Point(524, 66);
			this->genBtn->Name = L"genBtn";
			this->genBtn->Size = System::Drawing::Size(125, 23);
			this->genBtn->TabIndex = 14;
			this->genBtn->Text = L"Генерация массива";
			this->genBtn->UseVisualStyleBackColor = true;
			this->genBtn->Click += gcnew System::EventHandler(this, &Form1::genBtn_Click);
			// 
			// opnFileBtn
			// 
			this->opnFileBtn->Location = System::Drawing::Point(524, 142);
			this->opnFileBtn->Name = L"opnFileBtn";
			this->opnFileBtn->Size = System::Drawing::Size(125, 23);
			this->opnFileBtn->TabIndex = 13;
			this->opnFileBtn->Text = L"Ввод из файла";
			this->opnFileBtn->UseVisualStyleBackColor = true;
			this->opnFileBtn->Click += gcnew System::EventHandler(this, &Form1::opnFileBtn_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(529, 116);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(529, 391);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(382, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"<- Доделать норм минус";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 545);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->genBtn);
			this->Controls->Add(this->opnFileBtn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DoBtn);
			this->Controls->Add(this->saveFileBtn);
			this->Controls->Add(this->CloseBtn);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->original);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обработка массива";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::Form1_Click);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		kolvo->Text = "5";
		min->Text = "-20";
		max->Text = "20"; //потом удалить
		///////////////////////////
		//Directory::CreateDirectory("D:\\some\\new\\directory\\");
		FILE* fp;
		fopen("C:\\deleteme\\test.txt", "r");
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int randNumber = rand->Next();
		textBox1->Text =(randNumber % 1000).ToString();
		
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //Close button

	this->Close();


}
private: System::Void genBtn_Click(System::Object^ sender, System::EventArgs^ e) { //generate
	if ((kolvo->Text != "") && (min->Text != "") && (max->Text != "")) {
		originalArray = generate(Convert::ToInt32(kolvo->Text), Convert::ToInt32(min->Text), Convert::ToInt32(max->Text));
		//vector<Int32> originalArray = generate(5, -20, 20);
		


		original->Text = ArrayToString(originalArray);
	}
	else {
		MessageBox::Show("line 543");
	}
	
	


}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // kolvo elementov
	formatFunc(sender, e, kolvo, 0);
	
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	formatFunc(sender, e, min, 1);
}

private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	formatFunc(sender, e, max, 0);
}
private: System::Void avgBtn_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void avgBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	

	
}
private: System::Void DoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (avgBtn->Checked) {
		result->Text = "Среднее значение " + getAvg(originalArray);

	}
	else if (sumBtn->Checked) {
		result->Text = "Сумма элементов массива равна: " + getSum(originalArray);
	}
	else if (minBtn->Checked) {
		result->Text = "Минимальное значение: " + findMin(originalArray);
	}
	else if (maxBtn->Checked) {
		result->Text = "Максимальное значение: " + findMax(originalArray);
	}
	else if (evenBtn->Checked) {
		result->Text = "Четные значения: " + getEven(originalArray);
	}
	else if (oddButton->Checked) {
		result->Text = "Нечетные значения: " + getOdd(originalArray);
	}
	else if (maxToMinBtn->Checked) {
		result->Text = "Сортировка по убыванию " + ArrayToString(maxToMin(originalArray));
	}
	else if (minToMaxBtn->Checked) {
		result->Text = "Сортировка по возрастанию: " + ArrayToString(minToMax(originalArray));
	}
}
private: System::Void Form1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 'g' || e->KeyChar == 'G' || e->KeyChar == 'п' || e->KeyChar == 'П') {
		genBtn->PerformClick();
	}
	else if (e->KeyChar == 'D' || e->KeyChar == 'd' || e->KeyChar == 'в' || e->KeyChar == 'В') {
		DoBtn->PerformClick();
	}
	else if (e->KeyChar == '2') {
		avgBtn->PerformClick();
	}
	else if (e->KeyChar == '1') {
		sumBtn->PerformClick();
	}
	else if (e->KeyChar == '3') {
		minBtn->PerformClick();
	}
	else if (e->KeyChar == '4') {
		maxBtn->PerformClick();
	}
	else if (e->KeyChar == '5') {
		evenBtn->PerformClick();
	}
	else if (e->KeyChar == '6') {
		oddButton->PerformClick();
	}
	else if (e->KeyChar == '7') {
		minToMaxBtn->PerformClick();
	}
	else if (e->KeyChar == '8') {
		maxToMinBtn->PerformClick();
	}
	
}


private: System::Void opnFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Filename = "";
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		Filename = openFileDialog1->FileName;

	}
	try {
		StreamReader^ file = File::OpenText(Filename);
		MessageBox::Show(file->ReadToEnd());
	}
	catch (...) {
		MessageBox::Show("error has been occured");
	}

}
};
}
