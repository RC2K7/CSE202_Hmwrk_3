#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "Person.h"

using namespace std;

class Student : virtual public Person
{
	public:
	  Student(string name, string address, string telenumber, string email, string yr);
	  string getYear() const { return this->yr; }
	  virtual string whatami() { return "Student"; }
	private:
	  string yr;
};
#endif
