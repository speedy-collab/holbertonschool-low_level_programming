#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: pointer to the string to be converted
*
* Description: This function converts the first occurrence of a number in the
* string pointed to by s to an integer. It takes into account any preceding
* '+' or '-' signs and handles situations where there are no numbers in the string.
* If no numbers are found, the function returns 0.
*
* Return: the integer value of the first number found in the string,
* or 0 if no number is found
*/
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;

while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
{
if (s[i] == '-')
{
sign *= -1;
}
if (s[i] == '+' && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
{
sign = 1;
}
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}

return (num *sign);
}
