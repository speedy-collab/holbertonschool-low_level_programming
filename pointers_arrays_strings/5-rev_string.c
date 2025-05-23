#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to the string to be reversed
*
* Description: This function takes a pointer to a string
* and reverses it in place.
*/
void rev_string(char *s)
{
int len = 0, i;
char temp;

while (s[len] != '\0')
{
len++;
}

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
