//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base
{
	int id;
	float balence;

public:
	void virtual printinfo()
	{
		cout<<"Printing base"<<endl;
	}

	virtual ~Base(){

	}
};

class Savings:public Base
{
	int age;
	long int ATM;

public:
	void printinfo()
	{
		cout<<"Printing Savings"<<endl;
	}

};


class Current:public Base
{
	int amount;
	int overdraft;

public:
	void printinfo()
	{
		cout<<"Printing Current"<<endl;
	}

};

int main() {
	Savings s1;
	Base * b1 ;
	Current c1;

	b1 = &s1;
	b1->printinfo();

	b1 = &c1;
	b1->printinfo();

	return 0;
}
