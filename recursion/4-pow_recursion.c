#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: the base number
* @y: the exponent
*
* Return: x raised to the power of y, or -1 if y is less than 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)  /* Error case: if y is negative */
{
return (-1);
}
else if (y == 0)  /* Base case: x^0 is 1 */
{
return (1);
}
else  /* Recursive case: x^y = x * x^(y-1) */
{
return (x * _pow_recursion(x, y - 1));
}
}
