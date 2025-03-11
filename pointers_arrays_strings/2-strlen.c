#include "main.h"

/**
* _strlen - returns the length of a string
* @s: pointer to the string
*
* Description: This function takes a pointer to a string and returns the
* number of characters in the string, not counting the null terminator.
*
* Return: the length of the string.
*/
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

return (length);
}
