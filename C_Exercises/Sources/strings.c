#include <stdio.h>
#include <stdlib.h>

int main()
{
    char heart[] = "I love Tillie!"; // heart is a array of characters
    char *head = "I love Tillie!"; // *head is a pointer pointing to the first character in this string

    int i;

    for (i = 0; i < 6; i++) // print out the string using the array of characters
        putchar( heart[i] );
    putchar('\n');

    for (i = 0; i < 6; i++) // print out the string using the pointer, but with similar syntax
        putchar( head[i] );
    putchar('\n');

    for (i = 0; i < 6; i++) // print out the string by pointing to the character i pointers away from heart[0]
        putchar( *(heart + i) );
    putchar('\n');

    for (i = 0; i < 6; i++) // print out the string by pointing to the character i pointers away from head
        putchar( *(head + i) );
    putchar('\n');

    while (*(head) != '\0') // \0 is the end of line character
        putchar(*(head++)); // print character, advance pointer. Only possible with the pointer declaration

    return 0;
}
