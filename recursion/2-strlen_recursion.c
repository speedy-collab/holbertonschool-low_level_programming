#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: string whose length is to be calculated
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')  /* Base case: end of string */
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));  /* Recursive case */
}
}
