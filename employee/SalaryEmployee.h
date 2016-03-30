#pragma once
#include "Employee.h"
#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
class SalaryEmployee :public Employee{
protected:
	int x;
public:
	void setSalary();
    void salary();
};
#endif