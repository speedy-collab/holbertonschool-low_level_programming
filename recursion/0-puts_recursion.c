#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line
* @s: string to be printed
*
* Return: None
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
{
_putchar('\n');
return;
}
_putchar(*s); /* Print current character */
_puts_recursion(s + 1); /* Recursive call with the next character */
}

