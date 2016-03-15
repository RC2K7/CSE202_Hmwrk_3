#include <string>
#include <vector>
#include <iostream>

#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "Staff.h"

using namespace std;

int main()
{
	Person tst("Person Test", "1111 Pine Str.", "951-111-5687", "PersonTest@gmail.com");
	cout << "===PERSON===" << endl;
	cout << " Name:      " << tst.getName() << endl;
	cout << " Address:   " << tst.getAddress() << endl;
	cout << " Telephone: " << tst.getTeleNum() << endl;
	cout << " Email:     " << tst.getEmail() << endl << endl;

	Student student("Student Test", "2222 Pine Str.", "951-222-5678", "StudentTest@gmail.com", "Freshman");
	cout << "===STUDENT===" << endl;
	cout << " Name:      " << student.getName() << endl;
        cout << " Address:   " << student.getAddress() << endl;
        cout << " Telephone: " << student.getTeleNum() << endl;
        cout << " Email:     " << student.getEmail() << endl;
	cout << " Year:      " << student.getYear() << endl << endl;

	Employee employee("Employee Test", "3333 Pine Str.", "951-333-6789", "EmployeeTest@gmail.com", "Office 1A", 220.00, "10/31/12");
	cout << "===EMPLOYEE===" << endl;
        cout << " Name:      " << employee.getName() << endl;
        cout << " Address:   " << employee.getAddress() << endl;
        cout << " Telephone: " << employee.getTeleNum() << endl;
        cout << " Email:     " << employee.getEmail() << endl;
	cout << " Office:    " << employee.getOffice() << endl;
	cout << " Salary:    " << employee.getSalary() << endl;
	cout << " DateHired: " << employee.getDateHired() << endl << endl;

	Faculty faculty("Faculty Test", "4444 Pine Str.", "951-444-6789", "FacultyTest@gmail.com", "Office 5F", 1250.00, "06/26/10", "Novice", "Vacation");
	cout << "===FACULTY===" << endl;
        cout << " Name:      " << faculty.getName() << endl;
        cout << " Address:   " << faculty.getAddress() << endl;
        cout << " Telephone: " << faculty.getTeleNum() << endl;
        cout << " Email:     " << faculty.getEmail() << endl;
        cout << " Office:    " << faculty.getOffice() << endl;
        cout << " Salary:    " << faculty.getSalary() << endl;
        cout << " DateHired: " << faculty.getDateHired() << endl;
	cout << " Rank:      " << faculty.getRank() << endl;
	cout << " Status:    " << faculty.getStatus() << endl << endl;

	Staff staff("Staff Test", "5555 Pine Str.", "951-555-6789", "StaffTest@gmail.com", "Office 320", 5000.00, "03/12/10", "Teacher");
	cout << "===STAFF===" << endl;
        cout << " Name:      " << staff.getName() << endl;
        cout << " Address:   " << staff.getAddress() << endl;
        cout << " Telephone: " << staff.getTeleNum() << endl;
        cout << " Email:     " << staff.getEmail() << endl;
        cout << " Office:    " << staff.getOffice() << endl;
        cout << " Salary:    " << staff.getSalary() << endl;
        cout << " DateHired: " << staff.getDateHired() << endl;
	cout << " JobTitle:  " << staff.getJobTitle() << endl << endl;
}
