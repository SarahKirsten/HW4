#include <iostream>
#include "Course.h"
using namespace std;



Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::Resize(int newcap)
{
	string* studentsNew;

	studentsNew = new string[newcap];
	for (int i = 0; i < numberOfStudents;i++)
		studentsNew[i] = students[i];
	delete[] students;
	students = studentsNew;
	capacity = newcap;
}

void Course::addStudent(const string& name)
{
	if (numberOfStudents >= capacity)
		Resize(capacity*2);
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	for (int i = 0;i < numberOfStudents;i++)
	{
		if (students[i] == name)
		{
			numberOfStudents--;
			for (int j = i + 1; j < numberOfStudents + 1;j++)
			{
				students[i] = students[j];
			}
		}
	}
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}

void Course::clear()
{
	delete[] students;
}
