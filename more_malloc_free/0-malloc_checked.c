#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc.
* @b: the number of bytes to allocate.
*
* Return: a pointer to the allocated memory.
* If malloc fails, causes normal process termination with status 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
