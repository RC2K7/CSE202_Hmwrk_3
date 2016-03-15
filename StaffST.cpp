#include "StaffST.h"

StaffST::StaffST(string name, string address, string telenumber, string email, string yr, string office, double salary, string dateHired, string jobTitle, int creditHours) : Student( name, address, telenumber, email, yr), Staff( name, address, telenumber, email, office, salary, dateHired, jobTitle)
{
	this->creditHours = creditHours;
}
