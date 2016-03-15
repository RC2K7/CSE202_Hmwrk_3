#include "Faculty.h"
#include <string>

Faculty::Faculty(string name, string address, string telenumber, string email, string office, double salary, string dateHired, string rank, string status) : Employee(name, address, telenumber, email, office, salary, dateHired)
{
	this->rank = rank;
	this->status = status;
	setPerson(name, address, telenumber, email);
}
