#include <iostream>

//declare an array with six places inside of it.
//Use a pointer to initialize all values int int nums to a one.
//void ReverseArray(int*ptr, int size)
//{
//	int temp;
//	int*first;
//	int*last;
//
//	first = ptr;
//	last = &ptr[size - 1];
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		temp = *first;
//		*first = *last;
//		*last = temp;
//
//		first++;
//		last--;
//	}
//}
//


//6

/*Write a function for each of the following descriptions.
For each function, use the pointer notation ONLY.
Do NOT use the array index[] notation.*/

//A
/*Write a function RevString(char* array) which reverses array.
The function returns nothing.*/

/* Utility function to print an array */

void RevString(char* first)
{
	/*size will increase as last increases.*/
	int temp;
	int size = 0;
	char* last = first;
	/*while last is not equal to 0 it will increase.*/
	while (*last != '\0')
	{
		last++;
		size++;
	}
	for (int i = 0; i < size/2; i++)
	{
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}
}

//B
/*Write a function CountEven(int* array, int array_len) which receives an integer
array and its size, and returns the number of even numbers in the array*/
int countEven(int* arr, int arr_len)
{

	int countEven = 0;
	for (int i = 0; i < arr_len; i++) 
	{
		if (*arr % 2 != 0) 
		{
			countEven++;
		}
	}
	return countEven;
}

//C
/*Write a function Maximum(double* array, int array_size) that returns a pointer to the 
maximum value of an array of doubles.If the array is empty, return nullptr*/

double* Maximum(double* array, int array_size)
{
	if (array == nullptr)
		return nullptr;
	double* array2 = array;


	for (int i = 0; i < array_size; i++)
	{
		if (*array > *array2)
		{
			*array2 = *array;

		}
	}
	return array2;
}


////D
///*Write a function Contains(char* array, char search_value) which returns true if the 
//1st parameter contains the 2nd parameter, or false otherwise.*/

bool Contains(char*array, char search_value)
{
	while (*array != '\0')
	{
		if (search_value == *array)
			return true;
		else
			array++;
	}
	return false;
}


int main()
{
	int nums[4] = { 5, 3, 15, 6 };
	//C
	double array[] = {5.5, 3.5, 15.5, 6.5};
	//A
	char letters[9] = { 'H', 'A', 'L', 'L', 'O', 'W', 'E', 'E', 'N' };
	char*ptr = &letters[0];
	RevString(ptr);

	//B
	int testB[4] = {2, 3, 4, 5};
	int*arr = &testB[0];
	countEven(arr, 4);
}