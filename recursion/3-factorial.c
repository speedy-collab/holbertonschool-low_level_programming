#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: the number whose factorial is to be calculated
*
* Return: factorial of n, or -1 if n is lower than 0
*/
int factorial(int n)
{
if (n < 0)  /* Error case: if n is negative */
{
return (-1);
}
else if (n == 0)  /* Base case: factorial of 0 is 1 */
{
return (1);
}
else  /* Recursive case: n * factorial of (n-1) */
{
return (n * factorial(n - 1));
}
}
