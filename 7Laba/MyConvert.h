#pragma once
#include "MyString.h"
#include "MyDate.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace cli;

ref class MyConvert
{
public:
	MyConvert(void);
	~MyConvert(void);
	static void copyto(ListViewItem^ l, array<TextBox^>^ t, int count);
	static void copyto(array<TextBox^>^ t, ListViewItem^ l, int count);
	static void copyto(array<TextBox^>^ t, array<String^ >^ s, int count);
	static void copyto(array<TextBox^>^ t, String^ s, int count);
	static void copyto(array<String^ >^ s, array<TextBox^>^ t, int count);

	static void System_String_To_MyString(MyString& ms, System::String^ ss);
	static void System_String_To_Int(int& mi, System::String^ ss);
	static void System_String_To_MyDate(MyDate& md, System::String^ ss1, System::String^ ss2, System::String^ ss3);

	static void MyString_To_System_String(System::String^ ss, MyString& ms);
	static void Int_To_System_String(System::String^ ss, int mi);
	static void MyDate_To_System_String(System::String^ ss, MyDate& d);
};

