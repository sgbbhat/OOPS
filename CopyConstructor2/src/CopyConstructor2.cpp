//============================================================================
// Name        : CopyConstructor2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class channel
{
private:
	char * c;

public:
	channel(char ch){
		c = new char;
		*c = ch;
	}

	channel(const channel &obj){
		c = new char;
		*c = *obj.c;
	}

	void setchar(char ch){
		*c = ch;
	}

	char getchar(){
		return *c;
	}
};

int main() {
	channel c1('a');
	cout<<"c1 : "<<c1.getchar()<<endl;
	channel c2 = c1;
	cout<<"c2 : "<<c2.getchar()<<endl;

	c2.setchar('b');
	cout<<"c1 : "<<c1.getchar()<<endl;
	cout<<"c2 : "<<c2.getchar()<<endl;

	return 0;
}
