#include <stdio.h>

#define NUL 0

int main()
{
	char string[256];

	/////////////////////////////////////////////////////////////////////
	printf("Enter your string. please keep it below 255 characters.\n"); 
		// scanf stops at the first whitespace character
		// scanf("%s", &string); 
		// fgets allows you to limit the number of characters read, to avoid overflow
	fgets(string, 255, stdin);

	printf("\n\nYou entered: \n%s", string);
	/////////////////////////////////////////////////////////////////////
	printf("\n\nYou entered: \n");

	char* curr = &string[0];
	do
	{
		putchar(*curr);
		curr++;
	} while (*curr != NUL);
	/////////////////////////////////////////////////////////////////////
	printf("\n\nYou entered: \n");

	for (int i = 0; i < strlen(string)+1; ++i)
		printf("(%c = %d at %p)", string[i], string[i], (void*) string[i]);
	/////////////////////////////////////////////////////////////////////

	return 0;
}

/*
strcpy(s1, s2);
-Copies string s2 into string s1.

strcat(s1, s2);
-Concatenates string s2 onto the end of string s1.

strlen(s1);
-Returns the length of string s1.

strcmp(s1, s2);
-Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

strchr(s1, ch);
-Returns a pointer to the first occurrence of character ch in string s1.

strstr(s1, s2);
-Returns a pointer to the first occurrence of string s2 in string s1.
*/