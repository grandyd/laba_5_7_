#pragma once
#include "MyDate.h"

class MyString
{

	char* str;
public:
	MyString();
	MyString(const MyString&);
	MyString(const char*);
	MyString(const char);
	~MyString();


	operator char* ()
	{
		return str;
	}



	MyString Slice(int n1, int n2) const;

	void Copy(const MyString&);
	void Copy(const char*);
	void Copy(const char);

	void SetStr(const char*);
	void SetStr(const MyString&);
	void SetStr(const char);
	char* GetStr();

	friend int StrCmp(const MyString&, const MyString&);
	friend int StrCmp(const MyString&, const char*);
	friend int StrCmp(const char*, const MyString&);
	friend int StrCmp(const MyString&, const char);
	friend int StrCmp(const char, const MyString&);

	int Len() const;
	void Clear();
	bool Empty();
	void PushBack(const char);
	void PopBack();
	void Append(const char*);
	void Append(const char);
	void Replace(const char, const char);
	void Replace(const char*, const char);

	MyString& operator=(const MyString&);
	MyString& operator=(const char*);
	MyString& operator=(const char);

	friend bool EqualStr(const MyString& str1, const MyString& str2);
	friend bool EqualStr(const MyString& str1, const char*);
	friend bool EqualStr(const MyString& str1, const char);

	MyString operator+(const MyString&);
	MyString operator+(const char*);
	MyString operator+(const char);

	MyString operator*(const int);

	bool In_String(const MyString& str) const;//èùåò this->str â str;

	friend MyString& operator+=(MyString&, const MyString&);
	friend MyString& operator+=(MyString&, const char*);
	friend MyString& operator+=(MyString&, const char);

	friend bool operator>(const MyString&, const MyString&);
	friend bool operator>(const MyString&, const char*);
	friend bool operator>(const char*, const MyString&);
	friend bool operator>(const MyString&, const char);
	friend bool operator>(const char, const MyString&);

	friend bool operator>=(const MyString&, const MyString&);
	friend bool operator>=(const MyString&, const char*);
	friend bool operator>=(const char*, const MyString&);
	friend bool operator>=(const MyString&, const char);
	friend bool operator>=(const char, const MyString&);

	friend bool operator<(const MyString&, const MyString&);
	friend bool operator<(const MyString&, const char*);
	friend bool operator<(const char*, const MyString&);
	friend bool operator<(const MyString&, const char);
	friend bool operator<(const char, const MyString&);

	friend bool operator<=(const MyString&, const MyString&);
	friend bool operator<=(const MyString&, const char*);
	friend bool operator<=(const char*, const MyString&);
	friend bool operator<=(const MyString&, const char);
	friend bool operator<=(const char, const MyString&);

	friend bool operator==(const MyString&, const MyString&);
	friend bool operator==(const MyString&, const char*);
	friend bool operator==(const MyString&, const char);
	friend bool operator==(const char*, const MyString&);
	friend bool operator==(const char, const MyString&);

	friend bool operator!=(const MyString&, const MyString&);
	friend bool operator!=(const MyString&, const char*);
	friend bool operator!=(const MyString&, const char);
	friend bool operator!=(const char*, const MyString&);
	friend bool operator!=(const char, const MyString&);


	char operator[](int index) const;
};


//
//bool Num_In_String(const MyString& str)
//{
//	for (int i = 0; i < str.Len(); i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//int MyString_to_Int(const MyString& str)
//{
//	int tmp = 0;
//	for (int i = 0; i < str.Len(); i++)
//	{
//		tmp += str[i] - '0';
//		tmp *= 10;
//	}
//	return tmp;
//}
//
//bool Char_Is_Num(const char c)
//{
//	if (c >= '0' && c <= '9')
//	{
//		return true;
//	}
//	return false;
//}
//
//
//
//bool Only_Num_In_String(const MyString& str)
//{
//	for (int i = 0; i < str.Len(); i++)
//	{
//		if (str[i] < '0' || str[i] > '9')
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//bool MyString_is_Date(const MyString& str)
//{
//	if (Char_Is_Num(str[0]) && Char_Is_Num(str[1]) && Char_Is_Num(str[3]) && Char_Is_Num(str[4]) && Char_Is_Num(str[6]) && Char_Is_Num(str[7]) && Char_Is_Num(str[8]) && Char_Is_Num(str[9]) && ((str[2] == ' ' && str[5] == ' ') || (str[2] == '.' && str[5] == '.')))
//	{
//		return true;
//	}
//	return false;
//}
//
