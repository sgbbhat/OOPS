//============================================================================
// Name        : StructWithinStruct.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Point
{
	double x,y;
};

struct Disk
{
	Point center;
	double radius;
};

int main() {
	Disk d1;
	d1.center.x = 5;
	cout << d1.center.x << endl; // prints !!!Hello World!!!
	return 0;
}
