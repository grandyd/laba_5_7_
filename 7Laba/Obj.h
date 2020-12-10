#pragma once
#include "MyString.h"
class Obj {
public:
	~Obj() {}
	virtual MyString* ToMyString() = 0;
	virtual Obj* copy() = 0;
	virtual void dispose() = 0;
	virtual int cmp(Obj&) = 0;
	virtual int equal(Obj&) = 0;
};
