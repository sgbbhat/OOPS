//============================================================================
// Name        : ConstDerivedClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base
{
public:
	int id;
	float balance;

	Base(int identity, float bal){
		id = identity ;
		balance = bal;
	}

	void printinfo()
	{
		cout<<"Printing in base"<<endl;
		cout<<"Id = "<<id<<endl;
		cout<<"Bal = "<<balance<<endl;
	}
};

class Savings
{
public:

	int age;
	long int ATM;

	Savings(int x, long int y):age(x), ATM(y)
	{
		cout<<"Derived Constructor"<<endl;
	}

	void printinfo()
	{
		cout<<"Printing in base"<<endl;
		cout<<"Age = "<<age<<endl;
		cout<<"ATM = "<<ATM<<endl;
	}

};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
