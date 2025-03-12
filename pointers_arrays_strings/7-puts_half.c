#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: pointer to the string to be printed
*
* Description: This function prints the second half of the string.
* If the number of characters is odd, it prints the last n characters,
* where n = (length_of_the_string + 1) / 2.
*/
void puts_half(char *str)
{
int len = 0, i;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
i = len / 2;
}
else
{
i = (len + 1) / 2;
}

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
