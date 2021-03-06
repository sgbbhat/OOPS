//============================================================================
// Name        : Swap.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Swap by pointer
void swapByPtr(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Swap by reference
void swapByRef(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a, b, c, d;
	a = 5;
	b = 10;
	c = 15;
	d = 20;

	cout<<"Before swap : "<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	cout<<"c : "<<c<<endl;
	cout<<"d : "<<d<<endl;

	swapByRef(a, b);

	swapByPtr(&c, &d);

	cout<<"After swap : "<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	cout<<"c : "<<c<<endl;
	cout<<"d : "<<d<<endl;

	return 0;
}
