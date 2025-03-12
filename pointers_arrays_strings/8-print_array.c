#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: pointer to the array
* @n: number of elements to be printed
*
* Description: This function prints the first n elements of the array,
* with each number followed by a comma and space, except for the last element,
* which is followed by a new line.
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != n - 1)
{
printf(", ");
}
}

printf("\n");
}
