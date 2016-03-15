#include "Student.h"
#include <string>

Student::Student(string name, string address, string telenumber, string email, string yr) : Person(name, address, telenumber, email)
{
	this->yr = yr;
}
