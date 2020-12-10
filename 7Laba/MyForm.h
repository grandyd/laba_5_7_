#pragma once
#include "MyConvert.h"
#include "MyDate.h"
#include "MyString.h"
#include "Users.h"
#include "Tabl.h"
#include "MyList.h"
#include <cstring>
#include <stdio.h>


MyString Convertim(MyDate& date)
{
	int d = date.GetDay(), m = date.GetMonth(), y = date.GetYear();
	char str[11];
	str[2] = str[5] = '.';
	str[0] = d / 10 + '0';
	str[1] = d % 10 + '0';
	str[3] = m / 10 + '0';
	str[4] = m % 10 + '0';
	str[6] = y / 1000 + '0';
	str[7] = y % 1000 / 100 + '0';
	str[8] = y % 100 / 10 + '0';
	str[9] = y % 10 + '0';
	str[10] = '\0';
	return MyString(str);
}

bool Num_In_String(const MyString& str)
{
	for (int i = 0; i < str.Len(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return true;
		}
	}
	return false;
}

int MyString_to_Int(const MyString& str)
{
	int tmp = 0;
	for (int i = 0; i < str.Len(); i++)
	{
		tmp *= 10;
		tmp += str[i] - '0';
		
	}
	return tmp;
}

bool Char_Is_Num(const char c)
{
	if (c >= '0' && c <= '9')
	{
		return true;
	}
	return false;
}

MyDate MyString_to_Date(const MyString& str)
{
	int dd=0, mm=0, yyyy=0;
	int i=0;
	while (str[i]!='.')
	{
		dd *= 10;
		dd += (str[i] - '0');
		i++;
		
	}
	i++;
	while (str[i] != '.')
	{
		mm *= 10;
		mm += (str[i] - '0');
		i++;
	}
	i++;
	while (str[i] != '\0')
	{
		yyyy *= 10;
		yyyy += (str[i] - '0');
		i++;
	}
	
	return MyDate(dd, mm, yyyy);
}

bool Only_Num_In_String(const MyString& str)
{
	for (int i = 0; i < str.Len(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return false;
		}
	}
	return true;
}

bool MyString_is_Date(const MyString& str)
{
	if (Char_Is_Num(str[0]) && Char_Is_Num(str[1]) && Char_Is_Num(str[3]) && Char_Is_Num(str[4]) && Char_Is_Num(str[6]) && Char_Is_Num(str[7]) && Char_Is_Num(str[8]) && Char_Is_Num(str[9]) && ((str[2] == ' ' && str[5] == ' ') || (str[2] == '.' && str[5] == '.')))
	{
		return true;
	}
	return false;
}



namespace My7Laba {
	Tabl t,n;

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Add;
	private: System::Windows::Forms::ToolStripMenuItem^ Delete;
	private: System::Windows::Forms::ToolStripMenuItem^ Find;
	private: System::Windows::Forms::ToolStripMenuItem^ Find_Next;
	private: System::Windows::Forms::ToolStripMenuItem^ Replace;
	private: System::Windows::Forms::ToolStripMenuItem^ Clear;



	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óïîğÿäî÷èòüToolStripMenuItem;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;



























	private: System::Windows::Forms::ToolStripMenuItem^ âûâåñòèÂñåõToolStripMenuItem;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;
	private:
	private: System::Windows::Forms::GroupBox^ groupBox4;
	public:
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::ToolStripMenuItem^ ïîÈìåíèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïîÍîìåğóÒåëåôîíàToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïîÀäğåññóToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïîÖåíåToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ïîÄàòåToolStripMenuItem;
	public:

	public:
	private:




	protected:
























	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Add = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Delete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Find = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Find_Next = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Replace = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Clear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûâåñòèÂñåõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óïîğÿäî÷èòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÈìåíèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÍîìåğóÒåëåôîíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÀäğåññóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÖåíåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîÄàòåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->âèäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(813, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêğûòüToolStripMenuItem,
					this->ñîõğàíèòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->Add,
					this->Delete, this->Find, this->Find_Next, this->Replace, this->Clear, this->âûâåñòèÂñåõToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// Add
			// 
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(147, 22);
			this->Add->Text = L"Äîáàâèòü";
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// Delete
			// 
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(147, 22);
			this->Delete->Text = L"Óäàëèòü";
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// Find
			// 
			this->Find->Name = L"Find";
			this->Find->Size = System::Drawing::Size(147, 22);
			this->Find->Text = L"Íàéòè";
			this->Find->Click += gcnew System::EventHandler(this, &MyForm::Find_Click);
			// 
			// Find_Next
			// 
			this->Find_Next->Name = L"Find_Next";
			this->Find_Next->Size = System::Drawing::Size(147, 22);
			this->Find_Next->Text = L"Íàéòè äàëåå";
			this->Find_Next->Click += gcnew System::EventHandler(this, &MyForm::Find_Next_Click);
			// 
			// Replace
			// 
			this->Replace->Name = L"Replace";
			this->Replace->Size = System::Drawing::Size(147, 22);
			this->Replace->Text = L"Çàìåíèòü";
			this->Replace->Click += gcnew System::EventHandler(this, &MyForm::Replace_Click);
			// 
			// Clear
			// 
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(147, 22);
			this->Clear->Text = L"Î÷èñòèòü";
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// âûâåñòèÂñåõToolStripMenuItem
			// 
			this->âûâåñòèÂñåõToolStripMenuItem->Name = L"âûâåñòèÂñåõToolStripMenuItem";
			this->âûâåñòèÂñåõToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->âûâåñòèÂñåõToolStripMenuItem->Text = L"Âûâåñòè âñåõ";
			this->âûâåñòèÂñåõToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûâåñòèÂñåõToolStripMenuItem_Click);
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->óïîğÿäî÷èòüToolStripMenuItem });
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			this->âèäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèäToolStripMenuItem_Click);
			// 
			// óïîğÿäî÷èòüToolStripMenuItem
			// 
			this->óïîğÿäî÷èòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ïîÈìåíèToolStripMenuItem,
					this->ïîÍîìåğóÒåëåôîíàToolStripMenuItem, this->ïîÀäğåññóToolStripMenuItem, this->ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem, this->ïîÖåíåToolStripMenuItem,
					this->ïîÄàòåToolStripMenuItem
			});
			this->óïîğÿäî÷èòüToolStripMenuItem->Name = L"óïîğÿäî÷èòüToolStripMenuItem";
			this->óïîğÿäî÷èòüToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->óïîğÿäî÷èòüToolStripMenuItem->Text = L"Óïîğÿäî÷èòü";
			// 
			// ïîÈìåíèToolStripMenuItem
			// 
			this->ïîÈìåíèToolStripMenuItem->Name = L"ïîÈìåíèToolStripMenuItem";
			this->ïîÈìåíèToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->ïîÈìåíèToolStripMenuItem->Text = L"Ïî èìåíè";
			this->ïîÈìåíèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÈìåíèToolStripMenuItem_Click);
			// 
			// ïîÍîìåğóÒåëåôîíàToolStripMenuItem
			// 
			this->ïîÍîìåğóÒåëåôîíàToolStripMenuItem->Name = L"ïîÍîìåğóÒåëåôîíàToolStripMenuItem";
			this->ïîÍîìåğóÒåëåôîíàToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->ïîÍîìåğóÒåëåôîíàToolStripMenuItem->Text = L"Ïî íîìåğó òåëåôîíà";
			this->ïîÍîìåğóÒåëåôîíàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÍîìåğóÒåëåôîíàToolStripMenuItem_Click);
			// 
			// ïîÀäğåññóToolStripMenuItem
			// 
			this->ïîÀäğåññóToolStripMenuItem->Name = L"ïîÀäğåññóToolStripMenuItem";
			this->ïîÀäğåññóToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->ïîÀäğåññóToolStripMenuItem->Text = L"Ïî àäğåññó";
			this->ïîÀäğåññóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÀäğåññóToolStripMenuItem_Click);
			// 
			// ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem
			// 
			this->ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem->Name = L"ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem";
			this->ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem->Text = L"Ïî âèäó íåäâèæèìîñòè";
			this->ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem_Click);
			// 
			// ïîÖåíåToolStripMenuItem
			// 
			this->ïîÖåíåToolStripMenuItem->Name = L"ïîÖåíåToolStripMenuItem";
			this->ïîÖåíåToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->ïîÖåíåToolStripMenuItem->Text = L"Ïî öåíå";
			this->ïîÖåíåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÖåíåToolStripMenuItem_Click);
			// 
			// ïîÄàòåToolStripMenuItem
			// 
			this->ïîÄàòåToolStripMenuItem->Name = L"ïîÄàòåToolStripMenuItem";
			this->ïîÄàòåToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->ïîÄàòåToolStripMenuItem->Text = L"Ïî äàòå";
			this->ïîÄàòåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïîÄàòåToolStripMenuItem_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(813, 545);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &MyForm::listView1_ColumnClick);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &MyForm::listView1_DoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Èìÿ êëèåíòà";
			this->columnHeader1->Width = 162;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Íîìåğ òåëåôîíà";
			this->columnHeader2->Width = 140;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Àäğåññ";
			this->columnHeader3->Width = 96;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Âèä íåäâèæèìîñòè";
			this->columnHeader4->Width = 125;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Öåíà";
			this->columnHeader5->Width = 106;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Äàòà";
			this->columnHeader6->Width = 127;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(805, 203);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ïğàâêà";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(799, 197);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Äàííûå äëÿ ââîäà";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(675, 165);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Î÷èñòèòü";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(675, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Çàìåíèòü";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Replace_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(675, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Íàéòè äàëåå";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Find_Next_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(675, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Íàéòè";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Find_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(675, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Óäàëèòü";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(675, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Äîáàâèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(438, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(210, 162);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Èíôîğìàöèÿ ïî ñäåëêå";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(178, 103);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(26, 20);
			this->textBox8->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(123, 43);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 20);
			this->textBox5->TabIndex = 2;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(146, 103);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(26, 20);
			this->textBox7->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(114, 103);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(26, 20);
			this->textBox6->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Äàòà";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Öåíà";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(222, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(210, 162);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Èíôîğìàöèÿ î íåäâèæèìîñòè";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(123, 103);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(123, 43);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Àäğåññ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Âèä íåäâèæèìîñòè";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(6, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(210, 162);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Äàííûå î êëèåíòå";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Íîìåğ òåëåôîíà";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Èìÿ";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Location = System::Drawing::Point(0, 340);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(813, 229);
			this->tabControl1->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 569);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<TextBox^>^ m;

		
	private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	m = gcnew array<TextBox^>(8);
	m[0] = textBox1;
	m[1] = textBox2;
	m[2] = textBox3;
	m[3] = textBox4;
	m[4] = textBox5;
	m[5] = textBox6;
	m[6] = textBox7;
	m[7] = textBox8;

	
}

private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	MyString tmp_Name;
	MyString tmp_PhoneNumber;
	MyString tmp_Adress;
	MyString tmp_TypeOfBuilding;
	MyString tmp_Price;
	MyString tmp_Day;
	MyString tmp_Month;
	MyString tmp_Year;
	MyDate tmp_Date;
	int td, tm, ty;


	MyConvert::System_String_To_MyString(tmp_Name, m[0]->Text);
	if (Num_In_String(tmp_Name) || tmp_Name.Len() < 2)
	{
		MessageBox::Show("Ââåäåíî íåêîğğåêòíîå èìÿ");
		return;
	}
	

	MyConvert::System_String_To_MyString(tmp_PhoneNumber, m[1]->Text);
	try
	{
		if (!Only_Num_In_String(tmp_PhoneNumber))
		{
			throw - 1;
		}
		if (tmp_PhoneNumber.Len()!=11)
		{
			throw 0.0;
		}

	}
	catch (const int)
	{
		MessageBox::Show("Ââåäåí íåêîğğåêòíûé íîìåğ");
		return;
	}
	catch (const double)
	{
		MessageBox::Show("Íîìåğ äîëæåí ñîñòîÿòü èç 11 öèôğ");
		return;
	}
	MyConvert::System_String_To_MyString(tmp_Adress, m[2]->Text);
	if (tmp_Adress.Len()<2)
	{
		MessageBox::Show("Ââåä¸í íåêîğğåêòíûé àäğåññ");
	}
	MyConvert::System_String_To_MyString(tmp_TypeOfBuilding, m[3]->Text);
	try
	{
		MyConvert::System_String_To_MyString(tmp_Price,Convert::ToString(m[4]->Text));
		if (!Only_Num_In_String(tmp_Price) || tmp_Price.Len()<2)
		{
			throw - 1;
		}
		
	}
	catch (const int i)
	{
		MessageBox::Show("Ââåäåíà íåêîğğåêòíàÿ öåíà");
		return;
	}
	
	
	try
	{
		MyConvert::System_String_To_MyString(tmp_Day, Convert::ToString(m[5]->Text));
		MyConvert::System_String_To_MyString(tmp_Month, Convert::ToString(m[6]->Text));
		MyConvert::System_String_To_MyString(tmp_Year, Convert::ToString(m[7]->Text));
		if (!Only_Num_In_String(tmp_Day) || tmp_Day.Len() > 2 || tmp_Day.Len() == 0)
		{
			throw 0;
		}
		if (!Only_Num_In_String(tmp_Month) || tmp_Month.Len() > 2 || tmp_Month.Len() == 0 )
		{
			throw 1;
		}
		if (!Only_Num_In_String(tmp_Year) || tmp_Year.Len() > 4 || tmp_Year.Len() == 0)
		{
			throw 2;
		}
		if (!MyDate::valid(MyString_to_Int(tmp_Day), MyString_to_Int(tmp_Month), MyString_to_Int(tmp_Year)))
		{
			throw 3;
		}

	}
	catch (const int i)
	{
		if (i==0)
		{
			MessageBox::Show("Ââåäåí íåêîğğåêòíûé äåíü");
		}
		if (i==1)
		{
			MessageBox::Show("Ââåä¸í íåêîğğåêòíûé ìåñÿö");
		}
		if (i==2)
		{
			MessageBox::Show("Ââåä¸í íåêîğğåêòíûé ãîä");
		}
		if (i==3)
		{
			MessageBox::Show("Ââåäåíà íåêîğğåêòíàÿ äàòà");
		}
		
		return;
	}
	
	Users tmp_user(tmp_Name, tmp_PhoneNumber, tmp_Adress, tmp_TypeOfBuilding, MyString_to_Int(tmp_Price), MyDate(MyString_to_Int(tmp_Day), MyString_to_Int(tmp_Month), MyString_to_Int(tmp_Year)));
	
	for (int i = 0; i < t.GetSize(); i++)
	{
		if (t[i]==tmp_user)
		{
			MessageBox::Show("İòîò ïîëüçîâàòåëü óæå åñòü â ñïèñêå");
			return;
		}
	}
	t.AddUser(tmp_user);

	array<String^ >^ ms = gcnew array< System::String^ >(8);
	MyConvert::copyto(ms, m, 8);
	MyString str,str1,str2;
	MyConvert::System_String_To_MyString(str, ms[5]);
	MyConvert::System_String_To_MyString(str1, ms[6]);
	MyConvert::System_String_To_MyString(str2, ms[7]);
	str += '.';
	str += str1;
	str += '.';
	str += str2;
	ms[5] = gcnew String(str.GetStr());

	ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
	listView1->Items->Add(listViewItem0);
}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->Items->Count == 0)
	{
		MessageBox::Show("ß÷åéêà ïóñòà");
		return;
	}
	MyString tmp_Name;
	MyString tmp_PhoneNumber;
	MyString tmp_Adress;
	MyString tmp_TypeOfBuilding;
	int tmp_Price;
	MyString tmp_Date;
	MyDate Date;


	if (listView1->FocusedItem)
	{
		

		MyConvert::System_String_To_MyString(tmp_Name, listView1->FocusedItem->SubItems[0]->Text);
		MyConvert::System_String_To_MyString(tmp_PhoneNumber, listView1->FocusedItem->SubItems[1]->Text);
		MyConvert::System_String_To_MyString(tmp_Adress, listView1->FocusedItem->SubItems[2]->Text);
		MyConvert::System_String_To_MyString(tmp_TypeOfBuilding, listView1->FocusedItem->SubItems[3]->Text);
		MyConvert::System_String_To_Int(tmp_Price, listView1->FocusedItem->SubItems[4]->Text);
		MyConvert::System_String_To_MyString(tmp_Date, listView1->FocusedItem->SubItems[5]->Text);

		Date = MyString_to_Date(tmp_Date);
		Users user(tmp_Name, tmp_PhoneNumber, tmp_Adress, tmp_TypeOfBuilding, tmp_Price, Date);
		for (int i = 0; i < t.GetSize(); i++)
		{
			if (t[i] == user)
			{
				t.DeleteUser(i);
				âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
				return;
			}
		}

	}

	MyConvert::System_String_To_MyString(tmp_Name, listView1->TopItem->SubItems[0]->Text);
	
	MyConvert::System_String_To_MyString(tmp_PhoneNumber, listView1->TopItem->SubItems[1]->Text);
	
	MyConvert::System_String_To_MyString(tmp_Adress, listView1->TopItem->SubItems[2]->Text);
	
	MyConvert::System_String_To_MyString(tmp_TypeOfBuilding, listView1->TopItem->SubItems[3]->Text);

	MyConvert::System_String_To_Int(tmp_Price, listView1->TopItem->SubItems[4]->Text);

	MyConvert::System_String_To_MyString(tmp_Date, listView1->TopItem->SubItems[5]->Text);

	Date=MyString_to_Date(tmp_Date);
	
	Users user(tmp_Name, tmp_PhoneNumber, tmp_Adress, tmp_TypeOfBuilding, tmp_Price, Date);
	for (int i = 0; i < t.GetSize(); i++)
	{
		if (t[i]==user)
		{			
			t.DeleteUser(i);
			break;
		}
	}

	âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	

}
private: System::Void Find_Click(System::Object^ sender, System::EventArgs^ e) {

	listView1->Items->Clear();
	while (n.GetSize()!=0)
	{
		n.DeleteUser(0);
	}
	MyString ms;
	System::String^ ss;
	int i;
	for ( i = 0; i < 6&&ms.Len()==0; i++)
	{
		ss = m[i]->Text;
		MyConvert::System_String_To_MyString(ms, ss);
	}
	list<int> tmp_list;
	for ( i = 0; i < 5; i++)
	{
		if (ss==m[0]->Text)
		{
			tmp_list = t.Find_Name(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				n.AddUser(t[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[1]->Text)
		{
			tmp_list = t.Find_PhoneNumber(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				n.AddUser(t[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[2]->Text)
		{
			tmp_list = t.Find_Adress(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				n.AddUser(t[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[3]->Text)
		{

			tmp_list = t.Find_TypeOfBuilding(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{

				n.AddUser(t[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[4]->Text)
		{
			tmp_list = t.Find_Price(MyString_to_Int(ms));
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				n.AddUser(t[tmp_list[j]]);
			}
			break;
		}
	}
	if (i==5)
	{
		MyString str, str1, str2;
		MyConvert::System_String_To_MyString(str, m[6]->Text);
		MyConvert::System_String_To_MyString(str1, m[7]->Text);
		MyConvert::System_String_To_MyString(str2, m[8]->Text);
		MyDate tmp_Date(MyString_to_Int(str), MyString_to_Int(str1), MyString_to_Int(str2));
		tmp_list = t.Find_Date(tmp_Date);
		for (int j = 0; j < tmp_list.GetSize(); j++)
		{
			n.AddUser(t[tmp_list[j]]);
		}
	}

	for (int i = 0; i < n.GetSize(); i++)
	{
		
		System::String^ s;
		array<String^ >^ ms = gcnew array< System::String^ >(8);
		ms[0] = gcnew String(n[i].GetName().GetStr());
		ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
		ms[2] = gcnew String(n[i].GetAdress().GetStr());
		ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
		ms[4] = n[i].GetPrice().ToString();
		MyString str, str1, str2;

		str = n[i].GetDate().GetDay() / 10 + '0';
		str += n[i].GetDate().GetDay() % 10 + '0';
		str += '.';
		str += n[i].GetDate().GetMonth() / 10 + '0';
		str += n[i].GetDate().GetMonth() % 10 + '0';
		str += '.';
		str += n[i].GetDate().GetYear() / 1000 + '0';
		str += n[i].GetDate().GetYear() / 100 % 10 + '0';
		str += n[i].GetDate().GetYear() / 10 % 10 + '0';
		str += n[i].GetDate().GetYear() % 10 + '0';

		ms[5] = gcnew String(str);

		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
		listView1->Items->Add(listViewItem0);
	}
	


}
private: System::Void Find_Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n.GetSize()==0)
	{
		MessageBox::Show("Äëÿ íà÷àëà âîñïîëüçóéòåñü êíîïêîé \"Íàéòè\"");
		return;
	}
	listView1->Items->Clear();
	
	Tabl tmp;
	MyString ms;
	System::String^ ss;
	int i;
	for (i = 0; i < 6 && ms.Len() == 0; i++)
	{
		ss = m[i]->Text;
		MyConvert::System_String_To_MyString(ms, ss);
	}
	list<int> tmp_list;
	for (i = 0; i < 5; i++)
	{
		if (ss == m[0]->Text)
		{
			tmp_list = n.Find_Name(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				tmp.AddUser(n[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[1]->Text)
		{
			tmp_list = n.Find_PhoneNumber(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				tmp.AddUser(n[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[2]->Text)
		{
			tmp_list = n.Find_Adress(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				tmp.AddUser(n[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[3]->Text)
		{

			tmp_list = n.Find_TypeOfBuilding(ms);
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{

				tmp.AddUser(n[tmp_list[j]]);
			}
			break;
		}
		if (ss == m[4]->Text)
		{
			tmp_list = n.Find_Price(MyString_to_Int(ms));
			for (int j = 0; j < tmp_list.GetSize(); j++)
			{
				tmp.AddUser(n[tmp_list[j]]);
			}
			break;
		}
	}
	if (i == 5)
	{
		MyString str, str1, str2;
		MyConvert::System_String_To_MyString(str, m[6]->Text);
		MyConvert::System_String_To_MyString(str1, m[7]->Text);
		MyConvert::System_String_To_MyString(str2, m[8]->Text);
		MyDate tmp_Date(MyString_to_Int(str), MyString_to_Int(str1), MyString_to_Int(str2));
		tmp_list = n.Find_Date(tmp_Date);
		for (int j = 0; j < tmp_list.GetSize(); j++)
		{
			tmp.AddUser(n[tmp_list[j]]);
		}
	}


	for (int i = 0; i < tmp.GetSize(); i++)
	{

		System::String^ s;
		array<String^ >^ ms = gcnew array< System::String^ >(8);
		ms[0] = gcnew String(tmp[i].GetName().GetStr());
		ms[1] = gcnew String(tmp[i].GetPhoneNumber().GetStr());
		ms[2] = gcnew String(tmp[i].GetAdress().GetStr());
		ms[3] = gcnew String(tmp[i].GetTypeOfBuilding().GetStr());
		ms[4] = n[i].GetPrice().ToString();
		MyString str, str1, str2;

		str = tmp[i].GetDate().GetDay() / 10 + '0';
		str += tmp[i].GetDate().GetDay() % 10 + '0';
		str += '.';
		str += tmp[i].GetDate().GetMonth() / 10 + '0';
		str += tmp[i].GetDate().GetMonth() % 10 + '0';
		str += '.';
		str += tmp[i].GetDate().GetYear() / 1000 + '0';
		str += tmp[i].GetDate().GetYear() / 100 % 10 + '0';
		str += tmp[i].GetDate().GetYear() / 10 % 10 + '0';
		str += tmp[i].GetDate().GetYear() % 10 + '0';

		ms[5] = gcnew String(str);

		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
		listView1->Items->Add(listViewItem0);
	}

	while (n.GetSize() != 0)
	{
		n.DeleteUser(0);
	}
	n = tmp;

}
private: System::Void Replace_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (listView1->Items->Count == 0)
	{
		MessageBox::Show("ß÷åéêà ïóñòà");
		return;
	}

	//ïğîâåğêà íà ïóñòûå òåêñò áîêñû
	for (int i = 0; i < 8; i++)
	{
		if (m[i]->Text=="")
		{
			MessageBox::Show("Íå âñå äàííûå çàïîëíåíû");
			return;
		}
	}



	MyString tmp_Name;
	MyString tmp_PhoneNumber;
	MyString tmp_Adress;
	MyString tmp_TypeOfBuilding;
	MyString tmp_Price;
	MyString tmp_Day;
	MyString tmp_Month;
	MyString tmp_Year;
	MyDate tmp_Date;


	MyConvert::System_String_To_MyString(tmp_Name, m[0]->Text);
	if (Num_In_String(tmp_Name) || tmp_Name.Len() < 2)
	{
		MessageBox::Show("Ââåäåíî íåêîğğåêòíîå èìÿ");
		return;
	}


	MyConvert::System_String_To_MyString(tmp_PhoneNumber, m[1]->Text);
	try
	{
		if (!Only_Num_In_String(tmp_PhoneNumber))
		{
			throw - 1;
		}
		if (tmp_PhoneNumber.Len() != 11)
		{
			throw 0.0;
		}

	}
	catch (const int)
	{
		MessageBox::Show("Ââåäåí íåêîğğåêòíûé íîìåğ");
		return;
	}
	catch (const double)
	{
		MessageBox::Show("Íîìåğ äîëæåí ñîñòîÿòü èç 11 öèôğ");
		return;
	}
	MyConvert::System_String_To_MyString(tmp_Adress, m[2]->Text);
	if (tmp_Adress.Len() < 2)
	{
		MessageBox::Show("Ââåä¸í íåêîğğåêòíûé àäğåññ");
	}
	MyConvert::System_String_To_MyString(tmp_TypeOfBuilding, m[3]->Text);
	try
	{
		MyConvert::System_String_To_MyString(tmp_Price, Convert::ToString(m[4]->Text));
		if (!Only_Num_In_String(tmp_Price) || tmp_Price.Len() < 2)
		{
			throw - 1;
		}

	}
	catch (const int i)
	{
		MessageBox::Show("Ââåäåíà íåêîğğåêòíàÿ öåíà");
		return;
	}


	try
	{
		MyConvert::System_String_To_MyString(tmp_Day, Convert::ToString(m[5]->Text));
		MyConvert::System_String_To_MyString(tmp_Month, Convert::ToString(m[6]->Text));
		MyConvert::System_String_To_MyString(tmp_Year, Convert::ToString(m[7]->Text));
		if (!Only_Num_In_String(tmp_Day) || tmp_Day.Len() > 2 || tmp_Day.Len() == 0)
		{
			throw 0;
		}
		if (!Only_Num_In_String(tmp_Month) || tmp_Month.Len() > 2 || tmp_Month.Len() == 0)
		{
			throw 1;
		}
		if (!Only_Num_In_String(tmp_Year) || tmp_Year.Len() > 4 || tmp_Year.Len() == 0)
		{
			throw 2;
		}
		if (!MyDate::valid(MyString_to_Int(tmp_Day), MyString_to_Int(tmp_Month), MyString_to_Int(tmp_Year)))
		{
			throw 3;
		}

	}
	catch (const int i)
	{
		if (i == 0)
		{
			MessageBox::Show("Ââåäåí íåêîğğåêòíûé äåíü");
		}
		if (i == 1)
		{
			MessageBox::Show("Ââåä¸í íåêîğğåêòíûé ìåñÿö");
		}
		if (i == 2)
		{
			MessageBox::Show("Ââåä¸í íåêîğğåêòíûé ãîä");
		}
		if (i == 3)
		{
			MessageBox::Show("Ââåäåíà íåêîğğåêòíàÿ äàòà");
		}

		return;
	}
	//êëèåíò èç òåêñò áîêñîâ
	Users tmp_user(tmp_Name, tmp_PhoneNumber, tmp_Adress, tmp_TypeOfBuilding, MyString_to_Int(tmp_Price), MyDate(MyString_to_Int(tmp_Day), MyString_to_Int(tmp_Month), MyString_to_Int(tmp_Year)));



	MyString tmp_Name1;
	MyString tmp_PhoneNumber1;
	MyString tmp_Adress1;
	MyString tmp_TypeOfBuilding1;
	MyDate tmp_Date1;

	//listView1->FocusedItem->SubItems[i]->Text;		
	int Price;
	MyConvert::System_String_To_MyString(tmp_Name1, listView1->FocusedItem->SubItems[0]->Text);
	MyConvert::System_String_To_MyString(tmp_PhoneNumber1, listView1->FocusedItem->SubItems[1]->Text);
	MyConvert::System_String_To_MyString(tmp_Adress1, listView1->FocusedItem->SubItems[2]->Text);
	MyConvert::System_String_To_MyString(tmp_TypeOfBuilding1, listView1->FocusedItem->SubItems[3]->Text);
	MyConvert::System_String_To_Int(Price, listView1->FocusedItem->SubItems[4]->Text);

	MyString tmp_date;
	MyConvert::System_String_To_MyString(tmp_date, listView1->FocusedItem->SubItems[5]->Text);
	tmp_Date1 = MyString_to_Date(tmp_date);
	Users user(tmp_Name1, tmp_PhoneNumber1, tmp_Adress1, tmp_TypeOfBuilding1, Price, tmp_Date1);

	//ïğîâåğêà íà ñîâïàäàşùèõ êëèåíòîâ ñ êëèåíòîì èç òåêñò áîêñîâ
	for (int i = 0; i < t.GetSize(); i++)
	{
		if (t[i] == tmp_user)
		{
			MessageBox::Show("İòîò ïîëüçîâàòåëü óæå åñòü â ñïèñêå");
			return;
		}
	}

	for (int i = 0; i < t.GetSize(); i++)
	{
		if (t[i]==user)
		{
			t[i] = tmp_user;
			break;
		}
	}

	âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);


}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	while (n.GetSize()!=0)
	{
		n.DeleteUser(0);
	}
	listView1->Items->Clear();
}
private: System::Void âèäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* file = fopen("data.txt", "w");
	if (file == NULL)
	{
		MessageBox::Show("Íåâîçìîæíî îòêğûòü ôàéë äëÿ çàïèñè");
		return;
	}
	for (int i = 0; i < t.GetSize(); i++)
	{
		fprintf(file, "%s\n%s\n%s\n%s\n%d\n%d %d %d\n", t[i].GetName().GetStr(), t[i].GetPhoneNumber().GetStr(),t[i].GetAdress().GetStr(),t[i].GetTypeOfBuilding().GetStr(),t[i].GetPrice(),t[i].GetDate().GetDay(),t[i].GetDate().GetMonth(),t[i].GetDate().GetYear());
	}
	
	fclose(file);
}
private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* file = fopen("data.txt", "r");
	if (file == NULL)
	{
		MessageBox::Show("Íåâîçìîæíî îòêğûòü ôàéë äëÿ ÷òåíèÿ");
		return;
	}
	while (t.GetSize()!=0)
	{
		t.DeleteUser(0);
	}

	listView1->Items->Clear();
	
	Users user;
	char tmp_Name[80];
	char tmp_PhoneNumber[80];
	char tmp_Adress[80];
	char tmp_TypeOfBuilding[80];
	char tmp_Price[80];
	char tmp_Date[80];
	int tmp_Day;
	int tmp_Month;
	int tmp_Year;

	while (!feof(file))
	{
		fgets(tmp_Name, 79, file);
		fgets(tmp_PhoneNumber, 79, file);
		fgets(tmp_Adress, 79, file);
		fgets(tmp_TypeOfBuilding, 79, file);
		fgets(tmp_Price, 79, file);
		fscanf(file, "%d", &tmp_Day);
		fscanf(file, "%d", &tmp_Month);
		fscanf(file, "%d\n", &tmp_Year);
		tmp_Name[strlen(tmp_Name) - 1] = '\0';
		tmp_PhoneNumber[strlen(tmp_PhoneNumber) - 1] = '\0';
		tmp_Adress[strlen(tmp_Adress) - 1] = '\0';
		tmp_TypeOfBuilding[strlen(tmp_TypeOfBuilding) - 1] = '\0';
		tmp_Price[strlen(tmp_Price) - 1] = '\0';


		user.ChangeName(MyString(tmp_Name));
		user.ChangePhoneNumber(MyString(tmp_PhoneNumber));
		user.ChangeAdress(MyString(tmp_Adress));
		user.ChangeTypeOfBuilding(MyString(tmp_TypeOfBuilding));
		user.ChangePrice(MyString_to_Int(tmp_Price));
		user.ChangeDate(MyDate(tmp_Day,tmp_Month,tmp_Year));
		t.AddUser(user);

		System::String^ s;
		array<String^ >^ ms = gcnew array< System::String^ >(8);
		ms[0] = gcnew String(tmp_Name);
		ms[1] = gcnew String(tmp_PhoneNumber);
		ms[2] = gcnew String(tmp_Adress);
		ms[3] = gcnew String(tmp_TypeOfBuilding);
		ms[4] = gcnew String(tmp_Price);
		MyString str, str1, str2;
		
		str = tmp_Day / 10 +'0';
		str += tmp_Day % 10 + '0';
		str += '.';
		str += tmp_Month / 10 + '0';
		str += tmp_Month % 10 + '0';
		str += '.';
		str += tmp_Year / 1000 + '0';
		str += tmp_Year / 100 % 10 + '0';
		str += tmp_Year / 10 % 10 + '0';
		str += tmp_Year % 10 + '0';

		ms[5] = gcnew String(str);

		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
		listView1->Items->Add(listViewItem0);

	}
	


	fclose(file);

		
}
private: System::Void âûâåñòèÂñåõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	listView1->Items->Clear();
	for (int i = 0; i < t.GetSize(); i++)
	{

		System::String^ s;
		array<String^ >^ ms = gcnew array< System::String^ >(8);
		ms[0] = gcnew String(t[i].GetName().GetStr());
		ms[1] = gcnew String(t[i].GetPhoneNumber().GetStr());
		ms[2] = gcnew String(t[i].GetAdress().GetStr());
		ms[3] = gcnew String(t[i].GetTypeOfBuilding().GetStr());
		ms[4] = t[i].GetPrice().ToString();
		MyString str, str1, str2;

		str = t[i].GetDate().GetDay() / 10 + '0';
		str += t[i].GetDate().GetDay() % 10 + '0';
		str += '.';
		str += t[i].GetDate().GetMonth() / 10 + '0';
		str += t[i].GetDate().GetMonth() % 10 + '0';
		str += '.';
		str += t[i].GetDate().GetYear() / 1000 + '0';
		str += t[i].GetDate().GetYear() / 100 % 10 + '0';
		str += t[i].GetDate().GetYear() / 10 % 10 + '0';
		str += t[i].GetDate().GetYear() % 10 + '0';

		ms[5] = gcnew String(str);

		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
		listView1->Items->Add(listViewItem0);
	}
}
private: System::Void listView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	int i;
	for (i = 0; i < 5; i++)
	{
		m[i]->Text = listView1->FocusedItem->SubItems[i]->Text;
	}
	MyString tmp_date;
	MyConvert::System_String_To_MyString(tmp_date, listView1->FocusedItem->SubItems[i]->Text);
	MyDate Date = MyString_to_Date(tmp_date);
	m[i++]->Text = gcnew String(Date.GetDay().ToString());
	m[i++]->Text = gcnew String(Date.GetMonth().ToString());
	m[i]->Text = gcnew String(Date.GetYear().ToString());

}
private: System::Void listView1_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {
	
}
private: System::Void ïîÈìåíèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (n.GetSize() == 0)
	{
		t.Sort_Name();
		âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	}
	else
	{
		n.Sort_Name();

		listView1->Items->Clear();
		for (int i = 0; i < n.GetSize(); i++)
		{

			System::String^ s;
			array<String^ >^ ms = gcnew array< System::String^ >(8);
			ms[0] = gcnew String(n[i].GetName().GetStr());
			ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
			ms[2] = gcnew String(n[i].GetAdress().GetStr());
			ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
			ms[4] = t[i].GetPrice().ToString();
			MyString str, str1, str2;

			str = n[i].GetDate().GetDay() / 10 + '0';
			str += n[i].GetDate().GetDay() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetMonth() / 10 + '0';
			str += n[i].GetDate().GetMonth() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetYear() / 1000 + '0';
			str += n[i].GetDate().GetYear() / 100 % 10 + '0';
			str += n[i].GetDate().GetYear() / 10 % 10 + '0';
			str += n[i].GetDate().GetYear() % 10 + '0';

			ms[5] = gcnew String(str);

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
		}
	}
}
private: System::Void ïîÍîìåğóÒåëåôîíàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n.GetSize() == 0)
	{
		t.Sort_PhoneNumber();
		âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	}
	else
	{
		n.Sort_PhoneNumber();

		listView1->Items->Clear();
		for (int i = 0; i < n.GetSize(); i++)
		{

			System::String^ s;
			array<String^ >^ ms = gcnew array< System::String^ >(8);
			ms[0] = gcnew String(n[i].GetName().GetStr());
			ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
			ms[2] = gcnew String(n[i].GetAdress().GetStr());
			ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
			ms[4] = t[i].GetPrice().ToString();
			MyString str, str1, str2;

			str = n[i].GetDate().GetDay() / 10 + '0';
			str += n[i].GetDate().GetDay() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetMonth() / 10 + '0';
			str += n[i].GetDate().GetMonth() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetYear() / 1000 + '0';
			str += n[i].GetDate().GetYear() / 100 % 10 + '0';
			str += n[i].GetDate().GetYear() / 10 % 10 + '0';
			str += n[i].GetDate().GetYear() % 10 + '0';

			ms[5] = gcnew String(str);

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
		}
	}
}
private: System::Void ïîÀäğåññóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n.GetSize() == 0)
	{
		t.Sort_Adress();
		âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	}
	else
	{
		n.Sort_Adress();

		listView1->Items->Clear();
		for (int i = 0; i < n.GetSize(); i++)
		{

			System::String^ s;
			array<String^ >^ ms = gcnew array< System::String^ >(8);
			ms[0] = gcnew String(n[i].GetName().GetStr());
			ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
			ms[2] = gcnew String(n[i].GetAdress().GetStr());
			ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
			ms[4] = t[i].GetPrice().ToString();
			MyString str, str1, str2;

			str = n[i].GetDate().GetDay() / 10 + '0';
			str += n[i].GetDate().GetDay() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetMonth() / 10 + '0';
			str += n[i].GetDate().GetMonth() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetYear() / 1000 + '0';
			str += n[i].GetDate().GetYear() / 100 % 10 + '0';
			str += n[i].GetDate().GetYear() / 10 % 10 + '0';
			str += n[i].GetDate().GetYear() % 10 + '0';

			ms[5] = gcnew String(str);

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
		}
	}
}
private: System::Void ïîÂèäóÍåäâèæèìîñòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n.GetSize() == 0)
	{
		t.Sort_TypeOfBuilding();
		âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	}
	else
	{
		n.Sort_TypeOfBuilding();

		listView1->Items->Clear();
		for (int i = 0; i < n.GetSize(); i++)
		{

			System::String^ s;
			array<String^ >^ ms = gcnew array< System::String^ >(8);
			ms[0] = gcnew String(n[i].GetName().GetStr());
			ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
			ms[2] = gcnew String(n[i].GetAdress().GetStr());
			ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
			ms[4] = t[i].GetPrice().ToString();
			MyString str, str1, str2;

			str = n[i].GetDate().GetDay() / 10 + '0';
			str += n[i].GetDate().GetDay() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetMonth() / 10 + '0';
			str += n[i].GetDate().GetMonth() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetYear() / 1000 + '0';
			str += n[i].GetDate().GetYear() / 100 % 10 + '0';
			str += n[i].GetDate().GetYear() / 10 % 10 + '0';
			str += n[i].GetDate().GetYear() % 10 + '0';

			ms[5] = gcnew String(str);

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
		}
	}
}
private: System::Void ïîÖåíåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n.GetSize() == 0)
	{
		t.Sort_Price();
		âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	}
	else
	{
		n.Sort_Price();

		listView1->Items->Clear();
		for (int i = 0; i < n.GetSize(); i++)
		{

			System::String^ s;
			array<String^ >^ ms = gcnew array< System::String^ >(8);
			ms[0] = gcnew String(n[i].GetName().GetStr());
			ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
			ms[2] = gcnew String(n[i].GetAdress().GetStr());
			ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
			ms[4] = t[i].GetPrice().ToString();
			MyString str, str1, str2;

			str = n[i].GetDate().GetDay() / 10 + '0';
			str += n[i].GetDate().GetDay() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetMonth() / 10 + '0';
			str += n[i].GetDate().GetMonth() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetYear() / 1000 + '0';
			str += n[i].GetDate().GetYear() / 100 % 10 + '0';
			str += n[i].GetDate().GetYear() / 10 % 10 + '0';
			str += n[i].GetDate().GetYear() % 10 + '0';

			ms[5] = gcnew String(str);

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
		}
	}
}
private: System::Void ïîÄàòåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (n.GetSize() == 0)
	{
		t.Sort_Date();
		âûâåñòèÂñåõToolStripMenuItem_Click(sender, e);
	}
	else
	{
		n.Sort_Date();

		listView1->Items->Clear();
		for (int i = 0; i < n.GetSize(); i++)
		{

			System::String^ s;
			array<String^ >^ ms = gcnew array< System::String^ >(8);
			ms[0] = gcnew String(n[i].GetName().GetStr());
			ms[1] = gcnew String(n[i].GetPhoneNumber().GetStr());
			ms[2] = gcnew String(n[i].GetAdress().GetStr());
			ms[3] = gcnew String(n[i].GetTypeOfBuilding().GetStr());
			ms[4] = t[i].GetPrice().ToString();
			MyString str, str1, str2;

			str = n[i].GetDate().GetDay() / 10 + '0';
			str += n[i].GetDate().GetDay() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetMonth() / 10 + '0';
			str += n[i].GetDate().GetMonth() % 10 + '0';
			str += '.';
			str += n[i].GetDate().GetYear() / 1000 + '0';
			str += n[i].GetDate().GetYear() / 100 % 10 + '0';
			str += n[i].GetDate().GetYear() / 10 % 10 + '0';
			str += n[i].GetDate().GetYear() % 10 + '0';

			ms[5] = gcnew String(str);

			ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
			listView1->Items->Add(listViewItem0);
		}
	}
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
