#include "main.h"

/**
* _puts - prints a string followed by a new line
* @str: pointer to the string to be printed
*
* Description: This function takes a string and prints it to the standard
* output (stdout), followed by a new line.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar (*str);
str++;
}
_putchar('\n');
}
