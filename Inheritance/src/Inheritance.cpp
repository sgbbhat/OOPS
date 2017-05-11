//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class shape
{
protected:
	int height;
	int width;

public:
	void set_height(int h)
	{
		height = h;
		cout<<"Height set to : "<<height<<endl;
	}

	void set_width(int w)
	{
		width = w;
		cout<<"Width set to : "<<width<<endl;
	}
};

class rectangle:public shape
{
public:
	float get_area()
	{
		return width*width;
	}
};

int main() {
	rectangle rect ;
	rect.set_height(10);
	rect.set_width(20);
	rect.get_area();

	return 0;
}
