//============================================================================
// Name        : Union.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

union union_test
{
	int a;
	char b;
	float c;
};

int main() {
	union_test x;
	x.a = 1234;
	x.b = 'c';
	cout<<x.a<<endl;
	cout<<x.b<<endl;
	return 0;
}
