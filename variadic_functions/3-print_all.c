#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything based on a format string
* @format: A list of types of arguments passed to the function
*
* Description: The format string can contain:
* - 'c': char
* - 'i': integer
* - 'f': float
* - 's': char * (if NULL, print (nil))
* Any other character is ignored. A new line is printed at the end.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str, *sep = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}

va_end(args);
printf("\n");
}
