//============================================================================
// Name        : OperatorOvload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Box
{
private:
	double height;
	double length;
	double breadth;

public:
	Box();
	Box(double len, double bt, double ht);
	double getVolume();
	void setlength(double len);
	void setBreadth(double bt);
	void setHeight(double ht);

	Box operator+(const Box &b);
};

Box::Box()
{
	this->breadth = 0;
	this->height = 0;
	this->length = 0;
}

Box Box::operator +(const Box &b){
	Box B1;
	B1.length = this->length + b.length;
	B1.height = this->height + b.height;
	B1.breadth = this->breadth + b.breadth;

	return B1;
}

Box::Box(double len, double bt, double ht){
	this->height = ht;
	this->breadth = bt;
	this->length = len;
}

double Box::getVolume(){
	return height*breadth*length;
}

void Box::setlength(double len){
	this->length = len;
}

void Box::setBreadth(double len){
	this->length = len;
}

void Box::setHeight(double len){
	this->length = len;
}

int main() {
	Box Box1(3.5,4.0,5.0);
	Box Box2(7.5,8.0,9.0);
	Box Box3;

	Box3 = Box1 + Box2 ;

	cout<<"Volume of Box1 : "<<Box1.getVolume()<<endl;
	cout<<"Volume of Box2 : "<<Box2.getVolume()<<endl;
	cout<<"Volume of Box3 : "<<Box3.getVolume()<<endl;

	return 0;
}
