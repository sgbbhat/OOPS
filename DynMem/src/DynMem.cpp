//============================================================================
// Name        : DynMem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int* readQuizMarks(int n)
{
	int * marks;
	marks = new int[n];
	if(marks == NULL)
		return NULL;

	for(int i=0; i<n; i++)
	{
		cin>>marks[i];
	}

	return marks;
}

int main() {
	int NumOfStudents;
	int * qMarks;
	cout<<"Enter number of students : "<<endl;
	cin>>NumOfStudents;
	cout<<"Enter marks of students : "<<endl;
	qMarks = readQuizMarks(NumOfStudents);

	// printing marks
	for(int i=0; i<NumOfStudents; i++)
	{
		cout<<"Marks : "<<qMarks[i]<<endl;
	}

	return 0;
}
