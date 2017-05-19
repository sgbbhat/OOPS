//============================================================================
// Name        : InheritBase.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base{
public:
	int id;
	float balence;
	char name[20];

	void printInfo(){
		cout<<"Printing base"<<endl;
		cout<<"Balence : "<<balence <<" Id : "<<id<<endl;
	}
};

class Savings:public Base{
public:
	int age;
	long int ATM;
	void printInfo(){
		Base::printInfo();
		cout<<"Printing Savings"<<endl;
		cout<<"Age : "<<age <<" ATM : "<<ATM<<endl;
	}
};

class Current:public Base{
public:
	int amount;
	int overdraft;

	void printInfo(){
		Base::printInfo();
		cout<<"Printing Current"<<endl;
		cout<<"amount : "<<amount <<" overdraft : "<<overdraft<<endl;
	}
};

int main() {

	return 0;
}
