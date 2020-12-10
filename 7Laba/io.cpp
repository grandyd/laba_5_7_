#pragma once
#include "Obj.h"
#include <iostream>
using namespace std;

class InOut :public Obj {
public:
	virtual int input(istream& is = cin) = 0;
	virtual void output(ostream& os = cout) = 0;
	friend ostream& operator<<(ostream&, InOut&);
	friend istream& operator>>(istream&, InOut&);
};