/////////////////////////
//Program Name: EX04_05
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/23/2016
///////////////////////

#include "Course.cpp"

int main()
{
	Course course1("Data Structures", 10);
	Course course2("Database Systems", 2);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");
	course1.addStudent("Susan Kennedy");
	course1.addStudent("John Kennedy");
	course1.addStudent("Kim Johnson");
	course1.addStudent("S1");
	course1.addStudent("S2");
	course1.addStudent("S3");
	course1.addStudent("S4");
	course1.addStudent("S5");
	course1.addStudent("S6");
	course1.addStudent("S7");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "Number of students in course1: "
		<< course1.getNumberOfStudents() << endl;

	string *students = course1.getStudents();

	for (int i = 0;i < course1.getNumberOfStudents();i++)
		cout << students[i] << ", ";

	cout << endl;

	cout << "Number of students in course2: " 
		<< course2.getNumberOfStudents() << endl;

	course1.dropStudent("S1");
	cout << "Number of students in course1: "
		<< course1.getNumberOfStudents() << endl;

	students = course1.getStudents();

	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	cout << endl;
	course1.clear;
	cout << "number of students in course1: " << course1.getNumberOfStudents() << endl;


	return 0;
}


