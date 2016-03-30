#include "HourlyEmployee.h"
#include "Employee.h"


void HourlyEmployee::setHourlyRate(){
	float x = rate;
	
}
void  HourlyEmployee::setHoursWorked(){
	float y = hours;
}
void  HourlyEmployee::salary()
{
	money = hours*rate;
	cout << "hourly emp salary " << hours*rate << endl;
}