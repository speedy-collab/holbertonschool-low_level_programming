#include "main.h"

/**
 * _isalpha - checking alphabetic characters
 * Description: Write a function that checks for alphabetic character
 * @c: The character to check
 * Return: 1 if the character is a letter, lowercase or uppercase ,0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
