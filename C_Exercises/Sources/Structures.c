#include <stdio.h>
#include <stdlib.h>

#define NUL 0

void PrintStruct(struct String32);
void PrintCharArray(char*);

struct String32 {

	char* characters;
	int len;
};

int main()
{
	struct String32 my_string;

	my_string.characters = calloc(21, sizeof(char));
	my_string.characters = "Hello! I am a struct!";
	my_string.len = 21;

	char* local_string = "I am not a struct." + NUL;

	PrintStruct(my_string);
	PrintCharArray(local_string);

	return 0;
}

void PrintStruct(struct String32 string) // Passed by value!
{
	printf("Printing:\n");
	for (int i = 0; i < string.len; ++i)
		putchar(string.characters[i]);
	printf("\nIt has length %d.\n\n", string.len);
}

void PrintCharArray(char* string)
{
	printf("Printing:\n");
	char* curr_car = string;
	while (*curr_car != NUL)
		putchar(*(curr_car++));
	printf("\nI can\'t tell what it\'s length is without help!\n\n");
}