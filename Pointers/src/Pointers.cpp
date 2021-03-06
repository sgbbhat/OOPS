//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void swap(int & a, int & b)
{
	int temp = a;
	a = b;
	b = temp;
}

void ptrfuncArray(vector<int> * A, int n)
{
	vector<int>::iterator it;

	for(it = A->begin(); it != A->end(); it++)
	{
		cout<<*it<<endl;
	}
}

int main() {
	int a = 5;
	int b = 10;

	vector<int> A1 ;

	A1.push_back(4);
	A1.push_back(3);
	A1.push_back(1);
	A1.push_back(2);

	ptrfuncArray(&A1, A1.size());

	cout<<"Before the swap : "<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;

	swap(a, b);

	cout<<"After the swap : "<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;

	int* p1 ;
	p1 = &a;

	int** p2;
	p2 = &p1;
	cout << "Address of a : " << p1 << endl;
	cout << "Content of a : " << *p1 <<endl;
	cout << "Address of p1 : " << p2 << endl;
	cout << "Contents of p2 : " << *p2 << endl;
	cout << "Contents of a from **p2 : " << **p2 << endl;


	// Part 2

	int m, n;
	int *ptr;
	int ** ptrptr;

	ptrptr = &ptr;

	m = 5;
	n = 10;

	ptr = &m ;
	cout<<"Value of m : "<<**ptrptr<<endl;

	ptr = &n ;
	cout<<"Value of n : "<<**ptrptr<<endl;

	ptr = &m ;
	**ptrptr = 12;

	ptr = &n ;
	**ptrptr = 24;

	cout<<"Value of m : "<<m<<endl;
	cout<<"Value of n : "<<n<<endl;



	return 0;
}
