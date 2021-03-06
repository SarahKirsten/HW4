//#pragma once
#ifndef COURSE_H
#define COURSE_H
/////////////////////////
//Program Name: EX04_05
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/23/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	~Course();
	//Course(const Course&);
	string getCourseName() const;
	void Course::Resize(int newcap);
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	void clear();
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};


#endif
