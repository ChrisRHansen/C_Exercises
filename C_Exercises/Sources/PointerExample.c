#include <stdio.h>
#include <stdlib.h>

/* This program is a good example of pointers in C */

void swapValuesNoPointers(int, int); /* function prototype */
void swapValuesWithPointers(int *, int *); /* function prototype, note the * or declaring parameters as pointers */

int main()
{
    int x = 5, y = 10;

    printf("Not using Pointers:\n");

    printf("Originally x = %d and y = %d.\n", x, y);
    swapValuesNoPointers(x, y);
    printf("Now x = %d and y = %d.\n\n", x, y);

    printf("Using Pointers:\n");

    printf("Originally x = %d and y = %d.\n", x, y);
    swapValuesWithPointers(&x, &y);
    printf("x = %p and y = %p\n", &x, &y);
    printf("Now x = %d and y = %d.\n\n", x, y);

    return 0;
}

void swapValuesNoPointers(int u, int v) /* function with integers as parameters */
{
    int temp;

    temp = u;
    u = v;
    v = temp;
}

void swapValuesWithPointers(int * u, int * v) /* function with pointers as parameters */
{
    int temp;

    temp = *u; /* set temp equal to the value stored in the address that the pointer u is pointing to */
    *u = *v; /* set the value in the address u is pointing to to the value at the address  is pointing to */
    *v = temp; /* set the value in the address that v is pointing to to the value stored in temp */
}
