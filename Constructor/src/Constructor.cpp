//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Point
{
private:
	double x, y;

public:
	Point(double vx, double vy):x(vx), y(vy) {
		return;
	}
};

class Disk
{
private:
	Point center;
	double radius;

public:
	Disk(double x, double y, double r):center(Point(x,y)), radius(r){
		return;
	}
};

int main() {

	return 0;
}
