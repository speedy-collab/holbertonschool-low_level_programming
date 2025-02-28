#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: number of times the character _ should be printed.
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');  /* Print a newline if n is 0 or less */
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');  /* Print the character _ n times */
}
_putchar('\n');  /* Print a newline after the line */
}
}
