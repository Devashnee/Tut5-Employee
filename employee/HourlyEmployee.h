#pragma once
#include "Employee.h"

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
class HourlyEmployee :public Employee{
protected:
float hours;
float rate;
public:
	void setHourlyRate();
	void setHoursWorked();
	void salary();
};
#endif 

