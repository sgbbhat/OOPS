//============================================================================
// Name        : CopyConst.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Line
{
private:
	int * ptr;

public:

	Line(int len){
		ptr = new int;
		*ptr = len;
	}

	Line(const Line &obj){
		ptr = new int;
		*ptr = *obj.ptr;
	}

	int getLength( void ) {
	   return *ptr;
	}

	void setLength( int length ) {
	   *ptr = length ;
	}

	~Line(void) {
	   delete ptr;
	}
};

int main()
{
	Line L1(10);
	cout<<"L1 : "<<L1.getLength()<<endl;
	Line L2 = L1;
	cout<<"L2 : "<<L2.getLength()<<endl;
	L1.setLength(20);

	cout<<"L2 : "<<L2.getLength()<<endl;

	cout<<"L1 : "<<L1.getLength()<<endl;
	return 0;
}
