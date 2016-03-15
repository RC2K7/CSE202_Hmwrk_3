#include "Person.h"
#include <string>

Person::Person()
{
}

Person::Person(string name, string address, string telenumber, string email)
{
	this->name = name;
	this->address = address;
	this->telenumber = telenumber;
	this->email = email;
}

void Person::setPerson(string name, string address, string telenumber, string email)
{
	this->name = name;
	this->address = address;
	this->telenumber = telenumber;
	this->email = email;
}
