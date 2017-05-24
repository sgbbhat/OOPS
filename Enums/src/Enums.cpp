//============================================================================
// Name        : Enums.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

// Typedef
typedef char test;

// Using
using integer = int;

// Unions
union mytypes_t {
  char c;
  int i;
  float f;
};

// enumerated type
enum enum_t
{
	black = 10,
	blue = 15,
	green = 20,
	cyan = 25
};

int main() {


	enum_t mycolor;

	mycolor = green;

	cout<<mycolor<<endl;

	if(mycolor == green)
		mycolor = cyan;

	cout<<mycolor<<endl;

	return 0;
}
