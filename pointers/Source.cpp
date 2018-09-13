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