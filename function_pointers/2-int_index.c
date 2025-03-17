#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array
* @array: The array to search
* @size: The number of elements in the array
* @cmp: A pointer to the comparison function
*
* Return: Index of the first element for which cmp doesn't return 0,
*         -1 if no element matches or if size <= 0
*
* Description: This function searches for an integer in an array by applying
* the comparison function to each element.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
