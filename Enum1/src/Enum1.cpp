//============================================================================
// Name        : Enum1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum enum_t
{
	sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

int main() {
	enum_t e1;
	e1 = tuesday;
	cout << e1 << endl;
	return 0;
}
