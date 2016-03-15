#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
	public:
	  Person();
	  Person(string name, string address, string telenumber, string email);
	  void setPerson(string name, string address, string telenumber, string email);
	  string getName() const { return this->name; }
	  string getAddress() const { return this->address; }
	  string getTeleNum() const { return this->telenumber; }
	  string getEmail() const { return this->email; }
	  virtual string whatami() { return "Person"; }
	private:
	  string name;
	  string address;
	  string telenumber;
	  string email;
};
#endif
