//============================================================================
// Name        : Mult_Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Shape
{
protected:
	int height, width;

public:
	void set_height(int h)
	{
		height = h;
	}
	void set_width(int w)
	{
		width = w;
	}
};

class paintCost
{
public:
	int get_cost(int area)
	{
		return 60*area;
	}
};

class Rectangle:public Shape, public paintCost
{
	int get_area()
	{
		return height * width;
	}
};





int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
