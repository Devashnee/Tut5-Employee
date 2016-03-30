#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
protected:
	string names;
	int num;
	

public:
	float money;
	/*a. name() returns a C++ string
b. staffNumber() returns a POSTIVE integer
c. salary() returns the amount of money paid at the end of the month
d. name and staffNumber can ONLY be set when the object is created; they CANNOT be changed
e. There should be a STATIC variable numberOfEmployees which keeps track of the total number of employees currently*/
	//virtual string name(string)=0;
	//virtual int staffNumber(int)=0;
	virtual void salary(){};
};


