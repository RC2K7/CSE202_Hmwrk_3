#include "Employee.h"
#include <string>

Employee::Employee(string name, string address, string telenumber, string email, string office, double salary, string dateHired) : Person(name, address, telenumber, email)
{
	this->office = office;
	this->salary = salary;
	this->dateHired = dateHired;
}
