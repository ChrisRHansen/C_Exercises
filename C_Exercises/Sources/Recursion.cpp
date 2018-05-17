#include <iostream>
#include <stdio.h>

using namespace std;

/* This program is a good example of how recursion works */

void up_and_down (int);

int main()
{
    up_and_down(1); /* call to recurseive function */
    return 0;
}

void up_and_down (int n)
{
    printf("Level %d: n location %p\n", n, &n); /* first level */
    if (n < 4)
        up_and_down(n + 1); /* recursive call */
    printf("LEVEL %d: n location %p\n", n, &n); /* second level */
}
