//============================================================================
// Name        : VirtualFunctionEx.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee
{
protected:
	double salary = 0;
	int grade = 0;
public:
	void virtual raise_salary(){
		salary = salary + 0.1*salary;
	}

	void virtual promote(){
		grade = grade + 1;
	}

	void set_salary(double sal)
	{
		salary = sal;
	}

	void set_grade(int grd){
		grade = grd;
	}

	double get_salary()
	{
		return salary ;
	}

	int get_grade(){
		return grade;
	}

	virtual ~Employee()
	{
		cout<<"Base class destructor called"<<endl;
	}
};

class Manager:public Employee
{
public:
	void virtual raise_salary(){
		salary = salary + 0.1*salary;
	}

	void virtual promote(){
		grade = grade + 1;
	}

};

int main() {
	Employee *e = new Employee[3];
	Employee *m = new Manager[3];

	for(int i = 0 ; i < 3 ; i++)
	{
		e[i].set_grade(1);
		e[i].set_salary(1234.56);
		m[i].set_grade(4);
		m[i].set_salary(22234.56);
	}

	cout<<"Before the raise"<<endl;
	for(int i = 0 ; i < 3 ; i++)
	{
		cout<<"Salary of employee no "<<i<<" = "<<e[i].get_salary()<<" ";
		cout<<"Grade of employee no "<<i<<" = "<<e[i].get_grade()<<endl;
		cout<<"Salary of manager no "<<i<<" = "<<m[i].get_salary()<<" ";
		cout<<"Grade of manager no "<<i<<" = "<<m[i].get_grade()<<endl;
	}

	for(int i = 0 ; i < 3 ; i++)
	{
		e[i].raise_salary();
		e[i].promote();
		m[i].raise_salary();
		m[i].promote();
	}

	cout<<"After the raise"<<endl;
	for(int i = 0 ; i < 3 ; i++)
	{
		cout<<"Salary of employee no "<<i<<" = "<<e[i].get_salary()<<" ";
		cout<<"Grade of employee no "<<i<<" = "<<e[i].get_grade()<<endl;
		cout<<"Salary of manager no "<<i<<" = "<<m[i].get_salary()<<" ";
		cout<<"Grade of manager no "<<i<<" = "<<m[i].get_grade()<<endl;
	}

	return 0;
}
