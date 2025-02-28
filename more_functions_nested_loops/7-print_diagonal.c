#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal.
* @n: the number of times the character \ should be printed.
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');  /* Print a newline if n is 0 or less */
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');  /* Print spaces before the \ */
}
_putchar('\\');  /* Print the diagonal character \ */
_putchar('\n');  /* Print a newline after each \ */
}
}
}

