#pragma once
namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 82);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 65);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Координаты точки А";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox1->Location = System::Drawing::Point(789, 33);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(765, 367);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox2->Location = System::Drawing::Point(789, 425);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(765, 385);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 425);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(749, 385);
			this->dataGridView1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Х";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 86);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(148, 81);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(45, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(148, 139);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 22);
			this->textBox3->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(120, 144);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 144);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Х";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 123);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Координаты точки D";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(43, 140);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(41, 22);
			this->textBox4->TabIndex = 10;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(373, 33);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(373, 97);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 25);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Стоп";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 185);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Угловая скорость";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(148, 181);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 22);
			this->textBox5->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 235);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Длина AB";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 277);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Длина ВС";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 316);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Радиус";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(147, 231);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(45, 22);
			this->textBox6->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(147, 273);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 22);
			this->textBox7->TabIndex = 23;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(147, 313);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 22);
			this->textBox8->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(147, 346);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(47, 22);
			this->textBox9->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(20, 354);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 17);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Угол";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(293, 405);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 17);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Таблица";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1112, 11);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(149, 17);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Анимация механизма";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1089, 405);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(217, 17);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Траектория характерных точек";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(16, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(268, 382);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные в задаче";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1586, 857);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		float AB, BC, BM, CD, A, B, C, D, AD, DC, cosb;
		float xA, yA, xB, yB, xC, yC, xM, yM, xD, yD;
		float w, l, alfa, R;
		float a, b, c, d, k, h;
		float t, delta_t;
		int j;
		float xC_now, yC_now, xB_now, yB_now, xM_now, yM_now, xC_before, yC_before, xB_before, yB_before, xM_before, yM_before;
		float VxC, VyC, VxB, VyB, wBC;
		void Init() {
			this->textBox1->Text = "3";
			this->textBox2->Text = "1";
			this->textBox4->Text = "6";
			this->textBox3->Text = "-1";
			this->textBox5->Text = "0,05";
			this->textBox6->Text = "6";
			this->textBox7->Text = "13";
			this->textBox8->Text = "0,5";
			this->textBox9->Text = "15";
		}
		void Calculation1()
		{
			try {
				AB = Double::Parse(this->textBox6->Text);
				BC = Double::Parse(this->textBox7->Text);
				xA = Double::Parse(this->textBox1->Text);
				yA = Double::Parse(this->textBox2->Text);
				xD = Double::Parse(this->textBox4->Text);
				yD = Double::Parse(this->textBox3->Text);
				w = Double::Parse(this->textBox5->Text);
				R = Double::Parse(this->textBox8->Text);
				a = Double::Parse(this->textBox9->Text);
			}
			catch (System::FormatException ^e) {
				this->timer1->Enabled = false;
				Init();
				MessageBox::Show("Ошибка ввода.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::None);
			}
			BM = 9;
			xB = xA + AB*Math::Cos(w*t); //Функции косинуса,
			yB = yA + AB*Math::Sin(w*t); //синуса
			a = a * 3.14 / 180;
			k = Math::Tan(a)+0.051; //тот самый косталь, откуда взялся, пока хз
			b = yD + R / Math::Cos(a)-k*xD;
			A = 1 + k*k;
			B = 2 * (k*(b - yB) - xB);
			C = xB*xB - BC*BC + yB*yB-2*yB*b+b*b;
			d = B*B - 4 * A*C;

			xC = (-B + Math::Sqrt(d)) / (2 * A);
			yC = k * xC + b;

			xM = (BM / BC) * (xC - xB) + xB;
			yM = (BM / BC) * (yC - yB) + yB;

		}
		System::Drawing::Graphics ^canvas1;
		System::Drawing::Graphics ^canvas;
		System::Drawing::Pen ^pen_blue;
		System::Drawing::Pen ^pen;
		System::Drawing::Color ^colour;
		System::Drawing::Font ^font;
		Brush ^gray;
		Brush ^red;
		Brush ^green;
		Brush ^purple;
		System::IO::FileInfo ^Info;
		System::IO::StreamWriter ^Writer;
		int x0 = 90;
		int y0 = 150;
		void Animation1()
		{
			gray = Brushes::Gray;
			red = Brushes::Red;
			green = Brushes::Green;
			purple = Brushes::Purple;
			canvas->DrawLine(pen, x0, 0, x0, this->pictureBox1->Height);
			canvas->DrawLine(pen, 0, y0, this->pictureBox1->Width, y0);
			//canvas->DrawString("0", font, gray, x0, y0);
			canvas->DrawString("y", font, gray, x0, 0);
			canvas->DrawString("x", font, gray, this->pictureBox1->Width - 20, y0);//оси и подписи
			canvas->DrawLine(pen, xD * 20 + x0, -(k*xD + b) * 20 + y0, (float)this->pictureBox1->Width, -(k*(float)this->pictureBox1->Width/20+b) * 20 + y0);
			canvas->DrawLine(pen, (xA * 20) + x0, (-yA * 20) + y0, (xA * 20) + x0-5, (-yA * 20) + y0+10);
			canvas->DrawLine(pen, (xA * 20) + x0-5, (-yA * 20) + y0+10, (xA * 20) + x0+5, (-yA * 20) + y0+10);
			canvas->DrawLine(pen, (xA * 20) + x0+5, (-yA * 20) + y0+10, (xA * 20) + x0, (-yA * 20) + y0); //Крепление точки А.

			canvas->DrawLine(pen, (xA * 20) + x0, (-yA * 20) + y0, (xB * 20) + x0, (-yB * 20) + y0);
			canvas->DrawLine(pen, (xB * 20) + x0, (-yB * 20) + y0, (xC * 20) + x0, (-yC * 20) + y0);
			canvas->DrawEllipse(pen, ((xC - R) * 20) + x0, (-(yC + R) * 20) + y0, R * 40, R * 40); //Сам механизм.

			canvas->DrawLine(pen, (xD * 20) + x0, (-yD * 20) + y0, (float)this->pictureBox1->Width, (-yD * 20) + y0);
			canvas->DrawLine(pen, (xD * 20) + x0, (-yD * 20) + y0, (float)this->pictureBox1->Width, (-(yD + ((float)this->pictureBox1->Width/20-xD)*Math::Sin(a))*20 + y0)); /*угол*/
			canvas->DrawString("A", font, red, x0 + xA * 20, y0 - yA * 20);
			canvas->DrawString("B", font, red, x0 + xB * 20, y0 - yB * 20);
			canvas->DrawString("C", font, red, x0 + xC * 20, y0 - yC * 20);
			canvas->DrawString("D", font, red, x0 + xD * 20, y0 - yD * 20);
			canvas->DrawString("M", font, red, (xM * 20) + x0, (-yM * 20) + y0);//подписи точек

			canvas->DrawLine(pen_blue, x0 + xA * 20, y0 - yA * 20, x0 + xB * 20, y0 - yB * 20);
			canvas->DrawLine(pen_blue, x0 + xC * 20, y0 - yC * 20, x0 + xB * 20, y0 - yB * 20);

			canvas->FillEllipse(red, (xC * 20) + x0-2, (-yC * 20) + y0-2, 4.0, 4.0);
			canvas->FillEllipse(green, (xB * 20) + x0-2, (-yB * 20) + y0-2, 4.0, 4.0);
			canvas->FillEllipse(purple, (xM * 20) + x0-2, (-yM * 20) + y0-2, 4.0, 4.0); //Точки.
			canvas->DrawString(Convert::ToString(Math::Sqrt((xC - xB)*(xC - xB) + (yC - yB)*(yC - yB))), font, red, x0, y0);
		}
		void Graphic()
		{
			j++;
			canvas1->DrawLine(pen, (xD * 20) + x0, (-yD * 20) + y0, (float)this->pictureBox2->Width, (-yD * 20) + y0);
			canvas1->DrawLine(pen, (xD * 20) + x0, (-yD * 20) + y0, (float)this->pictureBox2->Width, (-(yD + ((float)this->pictureBox1->Width / 20 - xD)*Math::Sin(a)) * 20 + y0)); /*угол*/
			canvas1->DrawLine(pen, x0, 0, x0, this->pictureBox2->Height);
			canvas1->DrawLine(pen, 0, y0, this->pictureBox2->Width, y0);
			canvas1->DrawString("0", font, gray, x0, y0);
			canvas1->DrawString("y", font, gray, x0, 0);
			canvas1->DrawString("x", font, gray, this->pictureBox2->Width - 20, y0);//оси и подписи
			canvas1->FillEllipse(red, (xC * 20) + x0-2, (-yC * 20) + y0-2, 4.0, 4.0);
			canvas1->FillEllipse(green, (xB * 20) + x0-2, (-yB * 20) + y0-2, 4.0, 4.0);
			canvas1->FillEllipse(purple, (xM * 20) + x0-2, (-yM * 20) + y0-2, 4.0, 4.0); //Точки.
			if (j == 180)
			{
				canvas1->Clear(colour->White);
				j = 0;
			}
		}
		void Velocity()
		{
			VxB = (xB_now - xB_before) / delta_t;
			VyB = (yB_now - yB_before) / delta_t;
			VxC = (xC_now - xC_before) / delta_t;
			VyC = (yC_now - yC_before) / delta_t;
			wBC = (xC - xB)*(VyC - VyB) - (yC - yB)*(VxC - VxB);
		}

		void Table()
		{
			delta_t = 1;
			if (t <= (2 * Math::PI / w) + 1) {
				this->dataGridView1->Rows[0]->Cells[0]->Value = "t";
				this->dataGridView1->Rows[0]->Cells[1]->Value = "xB";
				this->dataGridView1->Rows[0]->Cells[2]->Value = "yB";
				this->dataGridView1->Rows[0]->Cells[3]->Value = "xC";
				this->dataGridView1->Rows[0]->Cells[4]->Value = "yC";
				this->dataGridView1->Rows[0]->Cells[5]->Value = "xM";
				this->dataGridView1->Rows[0]->Cells[6]->Value = "yM";
				this->dataGridView1->Rows[0]->Cells[7]->Value = "wBC";

				this->dataGridView1->Rows[t]->Cells[0]->Value = Convert::ToString(Math::Round(t, 4));
				this->dataGridView1->Rows[t]->Cells[1]->Value = Convert::ToString(Math::Round(xB, 4));
				this->dataGridView1->Rows[t]->Cells[2]->Value = Convert::ToString(Math::Round(yB, 4));
				this->dataGridView1->Rows[t]->Cells[3]->Value = Convert::ToString(Math::Round(xC, 4));
				this->dataGridView1->Rows[t]->Cells[4]->Value = Convert::ToString(Math::Round(yC, 4));
				this->dataGridView1->Rows[t]->Cells[5]->Value = Convert::ToString(Math::Round(xM, 4));
				this->dataGridView1->Rows[t]->Cells[6]->Value = Convert::ToString(Math::Round(yM, 4));
				if (t >= 2)
				{
					xC_now = Convert::ToDouble(this->dataGridView1->Rows[t]->Cells[3]->Value);
					xC_before = Convert::ToDouble(this->dataGridView1->Rows[t - 1]->Cells[3]->Value);
					yC_now = Convert::ToDouble(this->dataGridView1->Rows[t]->Cells[4]->Value);
					yC_before = Convert::ToDouble(this->dataGridView1->Rows[t - 1]->Cells[4]->Value);
					xB_now = Convert::ToDouble(this->dataGridView1->Rows[t]->Cells[1]->Value);
					xB_before = Convert::ToDouble(this->dataGridView1->Rows[t - 1]->Cells[1]->Value);
					yB_now = Convert::ToDouble(this->dataGridView1->Rows[t]->Cells[2]->Value);
					yB_before = Convert::ToDouble(this->dataGridView1->Rows[t - 1]->Cells[2]->Value);
					Velocity();
					this->dataGridView1->Rows[t - 1]->Cells[7]->Value = Convert::ToString(Math::Round(wBC, 4));
				}
			}
		}
		void ToFile1() {
			Writer = Info->CreateText();
			t = 0;
			Calculation1();
			xB_before = xB;
			yB_before = yB;
			xC_before = xC;
			yC_before = yC;
			xM_before = xM;
			yM_before = yM;
			delta_t = (2 * Math::PI / w) / 1000;
			Writer->WriteLine("t" + " | " + "xB" + " | " + "yB" + " | " + "xC" + " | " + "yC" + " | " + "xM" + " | " + "yM" + " | " + "wBC");
			for (t = delta_t; t <= 2 * Math::PI / w; t = t + delta_t) {
				Calculation1();
				xC_now = xC;
				yC_now = yC;
				xB_now = xB;
				yB_now = yB;
				xM_now = xM;
				yM_now = yM;
				Velocity();
				Writer->WriteLine(Convert::ToString(Math::Round(t - delta_t, 4)) + " | " + Convert::ToString(Math::Round(xB_before, 4))
					+ " | " + Convert::ToString(Math::Round(yB_before, 4)) + " | " + Convert::ToString(Math::Round(xC_before, 4))
					+ " | " + Convert::ToString(Math::Round(yC_before, 4)) + " | " + Convert::ToString(Math::Round(xM_before, 4))
					+ " | " + Convert::ToString(Math::Round(yM_before, 4)) + " | " + Convert::ToString(Math::Round(wBC, 4)));
				xC_before = xC;
				yC_before = yC;
				xB_before = xB;
				yB_before = yB;
				xM_before = xM;
				yM_before = yM;
			}
			Writer->Close();
		}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		Init();
		canvas = this->pictureBox1->CreateGraphics();
		canvas1 = this->pictureBox2->CreateGraphics();
		colour = gcnew Color();
		pen_blue = gcnew Pen(colour->Blue);
		pen = gcnew Pen(colour->Black);
		font = gcnew
			System::Drawing::Font(System::Drawing::FontFamily::GenericSansSerif, 12, System::Drawing::FontStyle::Regular);
		Info = gcnew System::IO::FileInfo(Application::StartupPath + "\\File1.txt");
		this->dataGridView1->ColumnCount = 8;
		j = 0;

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		this->timer1->Enabled = true;
		w = Double::Parse(this->textBox5->Text);
		int rowCount = Math::Truncate(2 * Math::PI / w) + 2;
		this->dataGridView1->RowCount = Math::Truncate(2 * Math::PI / w) + 2;
		canvas1->Clear(colour->White);
		ToFile1();
		t = 0;
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		canvas->Clear(Color::White);
		t++;
		Calculation1();
		Animation1();
		Graphic();
		Table();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->timer1->Enabled = false;
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	};
}
