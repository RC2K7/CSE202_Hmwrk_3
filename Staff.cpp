#include "Staff.h"
#include <string>

Staff::Staff(string name, string address, string telenumber, string email, string office, double salary, string dateHired, string jobTitle) : Employee(name, address, telenumber, email, office, salary, dateHired)
{
	this->jobTitle = jobTitle;
	setPerson(name, address, telenumber, email);
}
