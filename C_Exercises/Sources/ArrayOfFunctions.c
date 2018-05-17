#include <stdio.h>

int function_1(int);
int function_2(int);
int function_3(int);

typedef int (*ArrayOfFunc[])(int);

int main()
{
	ArrayOfFunc functions = {function_1, function_2, function_3};

	int value = 0;

	printf("Here we go...\n\n");

	value = functions[0](value);
	printf("Value is now %d.\n\n", value);

	value = functions[1](value);
	printf("Value is now %d.\n\n", value);

	value = functions[2](value);
	printf("Value is now %d.\n\n", value);

	return 0;
}

int function_1(int val)
{
	printf("Executing function 1. Val is %d.\n", val);
	return val + 1;
}

int function_2(int val)
{
	printf("Executing function 2. Val is %d.\n", val);
	return val += 2;
}

int function_3(int val)
{
	printf("Executing function 3. Val is %d.\n", val);
	return val -= 3;
}