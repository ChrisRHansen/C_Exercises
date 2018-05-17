#include <stdio.h>

void PassByValue(int);
void PassByReference(int*);

int main()
{
	int a = 5;

	printf("Passing a (%d) by Value...", a);
	PassByValue(a);
	printf("\n\na is now %d", a);

	printf("\n\nPassing a (%d) by Reference...", a);
	PassByReference(&a);
	printf("\n\na is now %d\n", a);

	return 0;
}

void PassByValue(int value)
{
	printf("\n\nFunction received %d (0x%p)", value, (void*)&value);

	value += 3;
	printf("\n0x%p is now %d... leaving", (void*)&value, value);

	return;
}

void PassByReference(int* value)
{
	printf("\n\nnFunction received %d (0x%p)", *value, (void*)value);

	*value += 3;
	printf("\n0x%p is now %d... leaving", (void*)value, *value);

	return;
}