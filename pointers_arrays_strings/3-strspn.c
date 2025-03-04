#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: the string to be searched.
* @accept: the substring containing the characters to match.
*
* Return: the number of bytes in the initial segment of s which consist
*         only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;  /* Stop the inner loop if we find a match */
}
}

/* If we reached the end of 'accept' without finding a match, stop */
if (accept[j] == '\0')
{
break;
}
}

return (count);
}
