#ifndef STAFF_H
#define STAFF_H

#include <string>

#include "Employee.h"

using namespace std;

class Staff : public Employee
{
	public:
	  Staff(string name, string address, string telenumber, string email, string office, double salary, string dateHired, string jobTitle);
	  string getJobTitle() const { return this->jobTitle; }
	  virtual string whatami() { return "Staff"; }
	private:
	  string jobTitle;
};
#endif
