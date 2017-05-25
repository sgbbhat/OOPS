//============================================================================
// Name        : StaticVar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void func()
{
	static int count = 0 ;
	count++;
	//cout<<count<<endl;
}

int main() {
	for(int i=0; i< 10; i++){
		func();
	}
	int array[5] = {1,2,3,4,5};

	for(int i=0; i<10; i++)
	{
		cout<<array[i]<<endl;
	}

	return 0;
}
