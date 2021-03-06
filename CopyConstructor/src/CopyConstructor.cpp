//============================================================================
// Name        : CopyConstructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Disk{
private:
	int * x ;
	int y;
	double r;

public:
	Disk(int xpos, int ypos, double rad);
	Disk(const Disk &obj);
	~Disk();

	void printData();
	void setData(int x, int y, double r);

};

void Disk::setData(int xpos, int ypos, double rad){
	*x = xpos;
	y = ypos;
	r = rad;
}

Disk::Disk(int xpos, int ypos, double rad){
	x = new int;
	*x = xpos;
	y = ypos;
	r = rad;
}

Disk::Disk(const Disk &obj){
	x = new int;
	*x = *obj.x;
	y = obj.y;
	r = obj.r;
}

void Disk::printData()
{
	cout<<"x : "<<*x<<endl;
	cout<<"y : "<<y<<endl;
	cout<<"r : "<<r<<endl;
}

Disk::~Disk()
{
	delete x;
}

int main() {
	Disk D1(10, 20, 3.4);
	D1.printData();

	Disk D2 = D1;

	D1.setData(100, 200, 234.5);

	D1.printData();
	D2.printData();
	return 0;
}
