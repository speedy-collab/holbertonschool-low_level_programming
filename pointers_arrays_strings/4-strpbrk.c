#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: the string to be searched.
* @accept: the string containing the bytes to search for.
*
* Return: a pointer to the first occurrence in the string s of any of the
*         bytes in the string accept, or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);  /* Return the pointer to the matching byte in s */
}
}
}

return (NULL);  /* Return NULL if no matching byte is found */
}
