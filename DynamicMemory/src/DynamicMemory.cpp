//============================================================================
// Name        : DynamicMemory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printArray(int * p)
{
	for(int i=0 ; i<10; i++)
	{
		cout<<
	}
}

int main() {
	int * p;
	p = new int[10];

	for(int i=0; i < 10 ; i++)
	{
		p[i] = i;
	}

	printArray(p);

	return 0;
}
