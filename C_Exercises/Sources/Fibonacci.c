#include <stdio.h>
#include <stdlib.h>

void fibonacci(int);

int main()
{
    int input;
    printf("Hello! Enter the number for sequences for\nour Fibonacci sequence to calculate: ");
    scanf("%d", &input);

    fibonacci(input);
    return 0;
}

void fibonacci(int a)
{
    int lastOne = 1, lastTwo = 1, currentNumber, i;
    printf("1 1 ");

    for (i = 0; i < a; i++)
    {
        currentNumber = lastOne + lastTwo;
        lastTwo = lastOne;
        lastOne = currentNumber;
        printf("%d ", currentNumber);
    }
}
