//============================================================================
// Name        : FriendFunction.cpp
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
	Point(int xpos, int ypos){
		this->x = xpos;
		this->y = ypos;
	}

	friend bool colinear(Point &p1, Point &p2, Point &p3);
};

bool colinear(Point &p1, Point &p2, Point &p3){
	int temp = p1.x + p2.x + p3.x;
	return (temp == 0);
}

int main() {
	Point p1(12, 20), p2(30,40), p3(50,60);
	cout<<colinear(p1,p2,p3);
	return 0;
}
