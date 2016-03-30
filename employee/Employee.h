#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	string names;
	int num;
	float money;

public:
	/*a. name() returns a C++ string
b. staffNumber() returns a POSTIVE integer
c. salary() returns the amount of money paid at the end of the month
d. name and staffNumber can ONLY be set when the object is created; they CANNOT be changed
e. There should be a STATIC variable numberOfEmployees which keeps track of the total number of employees currently*/
	//virtual string name(string)=0;
	//virtual int staffNumber(int)=0;
	virtual float salary(float)=0;
};
/*From Employee DERIVE three classes SalaryEmployee, HourlyEmployee, CommissionEmloyee
a. SalaryEmployee has a FIXED monthly salary
i. setSalary() where salary is a floating point number
b. HourlyEmployee has an hourly rate and number of hours worked
i. setHourlyRate() where hourly rate is a floating point number
ii. setHoursWorked() where hours worked is an integer
c. CommissionEmployee has a base salary PLUS commission based on percentage of total revenue generated
i. setBaseSalary() where base salary is a floating point number
ii. setRate() where rate is a floating point number
iii. setRevenue()
d. You do NOT need ACCESSOR methods for the purpose of this example*/

class SalaryEmployee :public virtual Employee{
	
public:
	float setSalary(float x){
		x = money;
	}
	float salary(float){
		return money;
	}
};
class HourlyEmployee :public virtual Employee{
protected:
	float hours;
	float rate;
public:
	float setHourlyRate(float x){
		x = rate;
	}
	float setHoursWorked(float y){
		y = hours;
	}
	float salary(float money)
	{
		money = hours*rate;
		return money;
	}
};
