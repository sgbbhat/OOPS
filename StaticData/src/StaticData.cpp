//============================================================================
// Name        : StaticData.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Point{
private:
	int x, y;

public:
	static int count;

	Point(){
		x = 0 ;
		y = 0 ;
		count++;
		return;
	}

	Point(int a, int b){
		x = a;
		y = b;
		count++;
		return;
	}
};

int Point::count = 0;

int main() {
	Point p1(10,20);
	cout<<Point::count<<endl;
	return 0;
}
