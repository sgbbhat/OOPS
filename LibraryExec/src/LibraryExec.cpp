//============================================================================
// Name        : LibraryExec.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Book
{
protected:
	string title;
	string author;
	double price;
	int accNum;
	bool checkOutStatus;
	int claimantId;

public:

};

class Patron:public Book
{
protected:
	string name;
	char address[1000];
	int uniqueId;
	int numBooksCheckedOut;
	int claimedBookAccNum;

public:

};

int main() {
	return 0;
}
