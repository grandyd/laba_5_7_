#include "MyConvert.h"
//#using <mscorlib.dll>
using namespace System::Runtime::InteropServices;
//
//MyString Int_To_MyString(int in)
//{
//	MyString str;
//	str+=
//}

MyConvert::MyConvert(void) {}

MyConvert::~MyConvert(void) {}

void MyConvert::copyto(ListViewItem^ l, array<TextBox^>^ t, int count)
{
	for (int i = 0; i < count; i++)
	{
		l->SubItems[i]->Text = t[i]->Text;
	}
}

void MyConvert::copyto(array<TextBox^>^ t, ListViewItem^ l, int count)
{
	for (int i = 0; i < count; i++)
	{
		t[i]->Text = l->SubItems[i]->Text; 
	}
}

void MyConvert::copyto(array<TextBox^>^ t, array<String^ >^ s, int count)
{ 
	for (int i = 0; i < count; i++)
	{
		t[i]->Text = s[i]; 
	}
}

void MyConvert::copyto(array<TextBox^>^ t, String^ s, int count)
{ 
	for (int i = 0; i < count; i++)
	{
		t[i]->Text = s;
	}
}

void MyConvert::copyto(array<String^ >^ s, array<TextBox^>^ t, int count)
{ 
	for (int i = 0; i < count; i++)
	{
		s[i] = t[i]->Text; 
	}
}

void MyConvert::System_String_To_MyString(MyString& ms, System::String^ ss)
{
	char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(ss);
	ms = str2;
}

void MyConvert::System_String_To_Int(int& mi, System::String^ ss)
{
	mi = Convert::ToInt32(ss);
}

void MyConvert::System_String_To_MyDate(MyDate& md, System::String^ ss1, System::String^ ss2, System::String^ ss3)
{
	md = MyDate(Convert::ToInt32(ss1), Convert::ToInt32(ss2), Convert::ToInt32(ss3));
}

void MyConvert::MyString_To_System_String(System::String^ ss, MyString& ms)
{
	ss = gcnew String(ms.GetStr());
}

void MyConvert::Int_To_System_String(System::String^ ss, int mi)
{
	ss = mi.ToString();
}

void MyConvert::MyDate_To_System_String(System::String^ ss, MyDate& d)
{
	//MyString ms = MyString(d.To_Char());
	//MyConvert::MyString_To_System_String(ss, ms);
}
