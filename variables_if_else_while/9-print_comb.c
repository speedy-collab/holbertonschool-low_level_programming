#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: Always 0 if success.
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
