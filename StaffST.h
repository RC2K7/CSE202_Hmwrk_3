#ifndef STAFFST_H
#define STAFFST_H

#include "Staff.h"
#include "Student.h"

class StaffST : public Staff, public Student
{
	public:
	  StaffST(string name, string address, string telenumber, string email, string yr, string office, double salary, string dateHired, string jobTitle, int creditHours);
	  virtual string whatami() { return "StaffST"; }
	private:
	  int creditHours;
};
#endif
