#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
* @min: the minimum value (inclusive)
* @max: the maximum value (inclusive)
* Return: a pointer to the newly created array, or NULL if malloc fails
*         or if min > max.
*/
int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
{
return (NULL);
}

size = max - min + 1;

arr = malloc(sizeof(int) * size);
if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = min + i;
}

return (arr);
}
