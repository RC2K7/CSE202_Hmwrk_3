#ifndef FACULTY_H
#define FACULTY_H

#include <string>

#include "Employee.h"

using namespace std;

class Faculty : public Employee
{
	public:
	  Faculty(string name, string address, string telenumber, string email, string office, double salary, string dateHired, string rank, string status);
	  string getRank() const { return this->rank; }
	  string getStatus() const { return this->status; }
	  virtual string whatami() { return "Faculty"; }
	private:
	  string rank;
	  string status;
};
#endif
