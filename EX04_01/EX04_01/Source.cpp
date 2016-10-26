/////////////////////////
//Program Name: Liang 11.1
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/18/2016
///////////////////////

#include "Header.h"



int main()
{
	//size of array
	cout << "Enter the size of the array: ";
	int s;
	cin >> s;
	cout << endl;

	//sets size of array into function
	int* array = alloc_array(s);

	//reads in values for array
	for (int i = 0; i < s;i++)
	{
		cout << "Enter an array value: ";
		cin >> array[i];
	}
	cout << endl;

	//read out the array
	//for (int i = 0; i < s; i++)
	//	cout << array[i] << endl;
	//cout << endl;

	//compute sum and then average of values in array
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < s;i++)//sum of array values
	{
		sum += array[i];
	}
	avg = sum / s;//average of array values
	cout << "Average is: " << avg << endl;
	cout << endl;

	int count = 0;
	for (int i = 0;i < s;i++)//how many values above the average
	{
		
		if (array[i] >= avg)
			count++;
	}
	cout << "Number of values above the average: " << count << endl << endl;




	delete[] array;
	return 0;
}
