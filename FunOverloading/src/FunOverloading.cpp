//============================================================================
// Name        : FunOverloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

class FunOv
{
public:
	void print(int val)
	{
		cout<<"Value passed is "<< (val)<<" is of type int"<<endl;
	}

	void print(double val)
	{
		cout<<"Value passed is "<< val<<" is of type float"<<endl;
	}

	void print(char val)
	{
		cout<<"Value passed is "<< val<<" is of type char"<<endl;
	}

};

int main() {
	FunOv f1;
	f1.print('x');
	f1.print(12.50);
	f1.print(12);
	return 0;
}
