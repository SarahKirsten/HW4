#include "Header.h"

int main()
{
	
	int size, *list, *newlist, doubleSize, i, j, value;
	cout << "Enter the size of the array: ";
	cin >> size;

	list = new int[size];

	cout << "Enter integer values: ";
	for (i = 0;i < size;i++)
	{
		cin >> value;
		*(list + i) = value;

	}

	doubleSize = size * 2;

	newlist = doubleCapacity(list, doubleSize);

	cout << "Array gets double in size, so enter more values: ";
	for (i = size;i < doubleSize;i++)
	{
		cin >> value;
		*(newlist + i) = value;
	}

	cout << "Array elements after double in size: ";
	for (j = 0;j < doubleSize;j++)
	{
		cout << *(newlist + j) << " ";
	}

	cout << endl;
	//int nums;

	//prompt_count(&nums);
	//// we’ve seen this one
	//int* numbers = alloc_array(nums);
	//populate_numbers(numbers, nums);


	//int nums2 = nums * 2;//doubles the ammount of numbers available.
	//int* doubleCapacity = alloc_array(nums2);
	//populate_doubleCapacity(numbers, nums2);

	//for (int i = 0; i < nums;i++)
	//	cout << numbers[i] << endl;

	//cout << endl;

	//for (int i = 0; i < nums2;i++)
	//	cout << doubleCapacity[i] << endl;

	//delete[] numbers;
	//delete[] doubleCapacity;
	return 0;
}