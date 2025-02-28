#include "main.h"

/**
* print_most_numbers - prints the numbers from 0 to 9, except 2 and 4,
* followed by a new line.
*/
void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
_putchar(c);  /* Print each number except 2 and 4 */
}
}

_putchar('\n');  /* Print a new line */
}
