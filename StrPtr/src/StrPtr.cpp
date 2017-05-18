//============================================================================
// Name        : StrPtr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct MyStructType
{
	char c;
	int x, y;
};

int main() {
	MyStructType p1;
	MyStructType * ptr1;
	ptr1 = &p1;

	*ptr1 = {'c', 10, 20};

	cout<<"char type c stored in the location : "<< ptr1 <<endl;

	cout<<"char type c stored : "<< (*ptr1).c <<endl;
	cout<<"Integer type x : "<< (*ptr1).x <<endl;
	cout<<"Integer type y : "<< (*ptr1).y <<endl;

	return 0;
}
