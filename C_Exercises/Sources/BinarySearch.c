#include <stdio.h>

void PrintArray();
int FindIndexBinarySearch(int);

int numbers[] = {0, 2, 4, 8, 9, 19, 20, 22, 30, 34, 50};

int main()
{
	int value = 0;

	PrintArray();
	printf("\nWhat number would you like to search for?\n");
	scanf("%d", &value);
	int index = FindIndexBinarySearch(value);

	if (index != -1)
		printf("\n%d was found at index %d!\n", value, index);
	else
		printf("\n%d was not found in the array.\n", value);

	return 0;
}

void PrintArray()
{
	int numbers_size = sizeof(numbers) / sizeof(numbers[0]);

	printf("Printing numbers...\n");
	for (int i = 0; i < numbers_size; ++i)
		printf("%d ", numbers[i]);
}

int FindIndexBinarySearch(int val)
{
	int numbers_size_b = sizeof(numbers);
	int numbers0_size_b = sizeof(numbers[0]);
	int numbers_size = numbers_size_b / numbers0_size_b;
	printf("numbers is %d btes. numbers[0] is %d bytes. Therefore numbers is %d ints long.", numbers_size_b, numbers0_size_b, numbers_size);
	int index = numbers_size / 2;

	for (int i = 0; i < 8; ++i)
	{
		if (numbers[index] == val)
			return index;

		if (numbers[index] > val)
			index = (index) / 2;
		else
			index = (numbers_size + index) / 2;
	}

	return -1;
}