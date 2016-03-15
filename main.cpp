#include <string>
#include <vector>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Staff.h"
#include "Faculty.h"
#include "StaffST.h"

string classify(Person *p);

int main()
{
	//Person p("Rnc Cnr", "Pine", "1909", "@gmail.com");
	//Faculty faculty("Faculty Test", "4444 Pine Str.", "951-444-6789", "FacultyTest@gmail.com", "Office 5F", 1250.00, "06/26/10", "Novice", "Vacation");
	//cout << classify(p) << endl;
	//cout << classify(faculty) << endl;
	vector<Person*> v;
   	v.push_back(new Person("John Adams","Boston","617-555-0000","john@adams.com"));
   	v.push_back(new Student("John Quincy Adams","Boston","617-555-0000","johnq@adams.com","senior"));
   	v.push_back(new Staff("Samuel Adams","Boston","617-555-BEER","sam@adams.com","brewhouse 1",1000,"9-15-1764","Brewer"));
   	v.push_back(new StaffST("Samuel Smith","Boston","617-555-BEER","samsmith@adams.com","junior", "brewhouse 5",100,"9-15-1774","Taster",200));
	v.push_back(new Faculty("Rocky King", "4444 Pine Str.", "951-444-6789", "FacultyTest@gmail.com", "Office 5F", 1250.00, "06/26/10", "Novice", "Vacation"));

    	for (int i=0; i<v.size(); i++)
         {
                cout << v[i]->getName() << "  " << classify(v[i]) << endl;
         }
}

string classify(Person *p) { return p->whatami(); }
