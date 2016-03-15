#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

#include "Person.h"

using namespace std;

class Employee : virtual public Person
{
	public:
	  Employee(string name, string address, string telenumber, string email, string office, double salary, string dateHired);
	  string getOffice() const { return this->office; }
	  double getSalary() const { return this->salary; }
	  string getDateHired() const { return this->dateHired; }
	  virtual string whatami() { return "Employee"; }
	private:
	  string office;
	  double salary;
	  string dateHired;
};
#endif
