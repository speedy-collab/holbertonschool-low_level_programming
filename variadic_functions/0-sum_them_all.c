#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - Returns the sum of all its parameters
* @n: The number of parameters
* @...: The parameters to sum
*
* Return: The sum of all parameters, or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...);
{
	va_list args;
	unsigned int i;

	va_start(args, count);

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	sum = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum);
{
	va_ends(args)
}
	if (n == 0)
	return(0)
}
