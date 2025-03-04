#include "main.h"

/**
* _strstr - locates a substring in a string.
* @haystack: the string in which to search.
* @needle: the substring to locate in the haystack.
*
* Return: a pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

if (*needle == '\0')
{
return (haystack);  /* If needle is empty, return haystack */
}

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;  /* If characters don't match, break the inner loop */
}
}

if (needle[j] == '\0')  /* If the entire needle was matched */
{
return (haystack + i);  /* Return the pointer to the start of the match */
}
}

return ('\0');  /* Return NULL if the needle is not found */
}

