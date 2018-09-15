#include <iostream>

//declare an array with six places inside of it.
//Use a pointer to initialize all values int int nums to a one.
void ReverseArray(int*ptr, int size)
{
	int temp;
	int*first;
	int*last;

	first = ptr;
	last = &ptr[size - 1];

	for (int i = 0; i < size / 2; i++)
	{
		temp = *first;
		*first = *last;
		*last = temp;

		first++;
		last--;
	}
}

int main()
{
	//{
	//	int nums[6];
	//	int*ptr;
	//	
	//	ptr = &nums[6];
	//	for (int = i; i < 6; i++)
	//	{
	//		*nums = 1;
	//		*nums++;
	//	}

	//Reverse the elements that ptr prints to;
	//Expected result nums => 6, 4, 2;

	int nums[4] = { 2, 4, 6, 8 };
	int*ptr_nums;

	ptr_nums = &nums[0];
	ReverseArray(ptr_nums, 4);
}

//6

/*Write a function for each of the following descriptions.
For each function, use the pointer notation ONLY.
Do NOT use the array index[] notation.*/

//A
/*Write a function RevString(char* array) which reverses array.
The function returns nothing.*/

void RevString(char* array)
{
	int temp;
	int first;
	int last;

	first = arr;
	last = &arr[Rev - 1];

	for (int i = 0; i < Rev; i++)
	{
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}
}

int main()
{
	char* array[4] = { 'A' , 'B' , 'C' , 'D' };
	char*ptr_array;

	ptr_array = &array[0];
	ReverseArray(ptr_array, 4);
}

//B
/*Write a function CountEven(int* array, int array_len) which receives an integer
array and its size, and returns the number of even numbers in the array*/

