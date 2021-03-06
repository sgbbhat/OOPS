//============================================================================
// Name        : CopyConstructor1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Line{
private:
	int * ptr;

public:
	int getLength(void);
	void setlength(int len);
	Line(int len);
	Line(const Line &obj);
	~Line();
};

Line::Line(int len){
	cout<<"Normal Constructor"<<endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line &obj){
	cout<<"Copy constructor"<<endl;

	ptr = new int;
	*ptr = *obj.ptr;
}

int Line::getLength( void ) {
   return *ptr;
}

void display(Line obj){
	cout << "Length of line : " << obj.getLength() <<endl;
}


void Line::setlength(int len){
	*ptr = len;
}

Line::~Line(){

}

int main()
{
	Line line1(10);
	Line line2 = line1; // This also calls copy constructor
	display(line1);
	display(line2);

	line1.setlength(20);

	display(line1);
	display(line2);

	return 0;
}
