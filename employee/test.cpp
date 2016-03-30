#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Employee.h"
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"
int main(){
	
	SalaryEmployee se;
	HourlyEmployee hm;
	Employee *sal1;
	Employee *sal;
	//Employee *obj;
//	Employee *names;
	//Employee *numstaff;
	hm.setHourlyRate();
	hm.setHoursWorked();
	se.setSalary();
	sal1 = &se;
	sal = &hm;
	sal1->salary();
	sal->salary();

	//cout << "salary" << sal1->salary();
		
}