#pragma once
#include "Users.h"
#include "MyList.h"
class Tabl
{
	int size = 0;
	list<Users> arr;
public:
	Tabl() {};

	void Save();
	void Read();
	int GetSize();
	void AddUser(const MyString& Name = MyString(), const MyString& PhoneNumber = MyString(), const MyString& Adress = MyString(), const MyString& TypeOfBuilding = MyString(), const int& Price = 0, const MyDate& Date = MyDate());
	void AddUser(const Users& user);
	void DeleteUser(const int index);
	void ChangeUser(const int index, const Users& User);
	void ChangeName(const int index, const MyString& Name);
	void ChangePhoneNumber(const int index, const MyString& PhoneNumber);
	void ChangeAdress(const int index, const MyString& Adress);
	void ChangeTypeOfBuilding(const int index, const MyString& TypeOfBuilding);
	void ChangePrice(const int index, const int Price);
	void ChangeDate(const int index, const MyDate& Date);

	Users& operator[](int index);

	void Create();

	list<int> Find_Name(const MyString& Name, const list<int>& lst = list<int>());
	list<int> Find_PhoneNumber(const MyString& PhoneNumber, const list<int>& lst = list<int>());
	list<int> Find_Adress(const MyString& Adress, const list<int>& lst = list<int>());
	list<int> Find_TypeOfBuilding(const MyString& TypeOfBuilding, const list<int>& lst = list<int>());
	list<int> Find_Price(int Price, const list<int>& lst = list<int>());
	list<int> Find_Date(const MyDate& Date, const list<int>& lst = list<int>());


	void Sort_Name();
	void Sort_PhoneNumber();
	void Sort_Adress();
	void Sort_TypeOfBuilding();
	void Sort_Price();
	void Sort_Date();
};