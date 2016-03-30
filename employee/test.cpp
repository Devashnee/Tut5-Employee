#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Employee.h"
int main(){
	SalaryEmployee se;
	HourlyEmployee hm;
	Employee *sal1;
	Employee *sal;
	Employee *names;
	Employee *numstaff;
	hm.setHourlyRate(20);
	hm.setHoursWorked(5);
	se.setSalary(200);
	sal1 = &se;
	sal = &hm;
	sal1->salary();
	sal->salary();


}