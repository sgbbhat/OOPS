//============================================================================
// Name        : UnaryOpOverload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	int inches;

public:
	Distance();
	Distance(int f, int i);
	void Display_Distance();

	Distance operator-();
};

Distance::Distance(){
	feet = 0;
	inches = 0;
}

Distance::Distance(int f, int i){
	feet = f;
	inches = i;
}

void Distance::Display_Distance(){
	cout<<"Feet : "<< this->feet<<" inches : "<<this->inches<<endl;
}

Distance Distance::operator- ()
{
	return Distance(-feet, -inches);
}

int main() {
	Distance D1(11, 10), D2(-5, 11);
	D1.Display_Distance();

	cout<<"apply negation"<<endl;
	-D1;                     // apply negation
	D1.Display_Distance();    // display D1
	D2.Display_Distance();
	-D2;                     // apply negation
	D2.Display_Distance();    // display D2

	return 0;
}
