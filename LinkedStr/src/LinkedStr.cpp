//============================================================================
// Name        : LinkedStr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Driver{
	string name;
	int id;
};

struct LinkedTaxi
{
	int id;
	Driver * drv;
	LinkedTaxi * next;
};

int main()
{
	Driver D[10] = {"Sachin", 123};

	cout<<D[0].name ;

	Driver D1, D2;
	LinkedTaxi LT1, LT2;
	D1 = {"Shekhar", 123};
	D2 = {"Abdul", 456};

	LT1.id = 10;
	LT2.id = 11;

	LT1.drv = &D1;
	LT1.next = NULL;

	LT2.drv = &D2;
	LT2.next = &LT1;
	return 0;
}
