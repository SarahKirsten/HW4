/////////////////////////
//Program Name: EX04_03
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/23/2016	
///////////////////////

#include "Header.h"
#include <algorithm>

int main()
{
	int list[] = {1,2,4,5,10,100,2,-22};
	printArray(list, 8);

	*std::min_element(list, list + 8);
	cout << "The min value is " << *std::min_element(list, list+8) << " at index " << (std::min_element(list, list+8) - list) << endl;


	return 0;
}
