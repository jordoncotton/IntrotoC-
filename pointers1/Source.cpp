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

/* Utility function to print an array */
void RevString(char* arr[], int size)
{
	{
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";

		std::cout << std::endl;
	}
}

void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
/* Function to test above functions */
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	// To print original array
	rvereseArray(arr, 6);

	// Function calling
	rvereseArray(arr, 0, 5);

	std::cout << "Reversed array is" << std::endl;

	// To print the Reversed array
	rvereseArray(arr, 6);
}

//B
/*Write a function CountEven(int* array, int array_len) which receives an integer
array and its size, and returns the number of even numbers in the array*/
void countEven(int* arr[], int arr_len)
{
	int countEven;

	int countEven = 0;
	for (int i = 0; i < arr_len; i++) 
	{
		if (arr_len[i] % 2 != 0) 
		{
			countEven++;
		}
	}
	return;
}

//C
/*Write a function Maximum(double* array, int array_size) that returns a pointer to the 
maximum value of an array of doubles.If the array is empty, return nullptr*/

void Maximum(double* array, int array_size)
{
	if (array_size <= 0)
		return;

	int max = array_size;
	

	for (int i = 1; i < array_size; i++)
	{
		if (array_size[] > max)
		{
			max = array_size;
			array = (array_size + i);
		}
	}

	int main()
	{
		int nums[4] = { 5, 3, 15, 6 };
		int *ptr;

		array = &array_size[0];
		findMax(nums, 4, ptr);

		std::cout << "The maximum is at address " << ptr << std::endl;
		std::cout << "It's at index " << ptr - nums << std::endl;
		std::cout << "Its value is " << *ptr << std::endl;
	}
}

//D
/*Write a function Contains(char* array, char search_value) which returns true if the 
1st parameter contains the 2nd parameter, or false otherwise.*/

void Contains(char*array, char search_value)
{
	char input()
	{
		char input[80];
		getline(cin, choice);
		return input;
	}

	int main()
	{
		char choice[80];
		char* pointer;
		input(pointer);
	}
}
