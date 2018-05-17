#include <stdio.h>
#include <string.h>

#define STRCMP(a, R, b)		(strcmp(a, b) R 0)

typedef char* my_string;


int MyMultiply(const int, const int);
int MyDivide(const int, const int);

int main()
{
	my_string choice;
	int number1, number2;

	do
	{
		printf("Would you like to do multiplication (m) or division (d)?\n");
		scanf("%s", &choice);

		if (STRCMP(&choice, ==, "m"))
		{
			printf("\nYou chose multiplication.");
			printf("\nEnter the first number: ");
			scanf("%d", &number1);

			printf("\nMultiply this many times: ");
			scanf("%d", &number2);

			int result = MyMultiply(number1, number2);
			printf("%d x %d = %d", number1, number2, result);
		}
		else if (STRCMP(&choice, == , "d"))
		{
			printf("\nYou chose division.");
			printf("\nEnter the numerator: ");
			scanf("%d", &number1);

			printf("\nEnter the denominator: ");
			scanf("%d", &number2);

			int result = MyDivide(number1, number2);
			printf("%d / %d = %d", number1, number2, result);
		}
		else
			printf("\nThat was an invalid choice. Try again.");

		printf("\nWould you like to go again? (y/n)");
		scanf("%s", &choice);
	} while (strcmp (&choice, "n"));

	return 0;
}

int MyMultiply(const int n1, const int n2)
{
	int result = 0;
	for (int i = 0; i < n2; ++i)
		result += n1;

	return result;
}

int MyDivide(const int n1, const int n2)
{
	int counter = n1, result = 0;
	while (counter >= n2)
	{
		counter -= n2;
		result++;
	}

	return result;
}