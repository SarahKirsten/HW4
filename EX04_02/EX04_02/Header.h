/////////////////////////
//Program Name: Liang 11.3
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/18/2016
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


int* doubleCapacity(const int* list, int size)
{
	int *p = new int[size];
	for (int i = 0; i < size;i++)
	{
		p[i] = list[i];
	}

	return p;
}


//int * alloc_array(int size)
//{
//	// Allocate array
//	int* pintarray = new int[size];
//
//	// Initialize array
//	for (int i = 0; i < size; i++)
//		pintarray[i] = 42;
//
//	// return array pointer
//	return pintarray;
//}
//
//
//void prompt_count(int* size) {
//	cout << "how many numbers will you enter? ";
//	cin >> *size;
//}
//
//void populate_numbers(int* numbers, int size) {
//	for (int* curr = numbers; curr < numbers + size; curr++) {
//		cout << "Enter number: ";
//		cin >> *curr;
//	}
//}
//
//
//int* doubleCapacity(const int* list, int size)
//{
//	int* printarray = alloc_array(size);
//
//	for (int i = 0; i < size; i++)
//		printarray[i] = 47;
//
//	return printarray;
//
//}
//
//void populate_doubleCapacity(int* numbers, int size) {
//	for (int i = size/2;i < size;i++) {
//		cout << "Enter number: ";
//		cin >> numbers[i];
//	}
//}

#pragma once
