#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: pointer to the string.
* @c: the character to locate in the string.
*
* Return: a pointer to the first occurrence of the character c in the
*         string s, or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (c == '\0')  /* If character c is the null terminator */
{
return (s);
}

return ('\0');
}
