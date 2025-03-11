#include "main.h"

/**
* print_rev - prints a string in reverse followed by a new line
* @s: pointer to the string to be reversed and printed
*
* Description: This function takes a string, prints it in reverse order,
* and then prints a new line.
*/
void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

while (length > 0)
{
length--;
_putchar(s[length]);
}

_putchar('\n');
}
