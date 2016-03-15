main: main.o Person.o Student.o Employee.o Staff.o Faculty.o StaffST.o
	g++ -o main main.o Person.o Student.o Employee.o Staff.o Faculty.o StaffST.o

main.o: main.cpp
	g++ -c main.cpp

Person.o: Person.cpp
	g++ -c Person.cpp

Student.o: Student.cpp
	g++ -c Student.cpp

Employee.o: Employee.cpp
	g++ -c Employee.cpp

Staff.o: Staff.cpp
	g++ -c Staff.cpp

Faculty.o: Faculty.cpp
	g++ -c Faculty.cpp

StaffST.o: StaffST.cpp
	g++ -c StaffST.cpp

clean:
	rm main main.o Person.o Student.o Employee.o Staff.o Faculty.o StaffST.o
