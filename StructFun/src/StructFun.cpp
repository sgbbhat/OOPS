//============================================================================
// Name        : StructFun.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct foo {
  int bar;
  foo() : bar(3) {}   //look, a constructor
  int getBar()
  {
    return bar;
  }
};


int main() {
	foo f;
	int y = f.getBar(); // y is 3
	cout<<y<<endl;

	const float x = 3.23;

	x = 5.34;

	printf("b = %f", x );

	int a = 5;
	float b = a/2;

	printf("b = %f", b );
	return 0;
}
