//============================================================================
// Name        : VirtualFunction.cpp
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
	Base(){

	}
	void virtual show()
	{
		cout<<"In base class"<<endl;
	}
	~Base(){

	}
};

class Derived:public Base
{
public:
	Derived(){

	}
	void virtual show()
	{
		cout<<"In Derived class"<<endl;
	}

	~Derived()
	{

	}
};

int main() {
	Base *B1 = new Derived;
	B1->show();
	return 0;
}
