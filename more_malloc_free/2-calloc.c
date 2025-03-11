#include <stdlib.h>

/**
* _calloc - allocates memory for an array using malloc
* and initializes it to zero.
* @nmemb: the number of elements in the array.
* @size: the size of each element.
*
* Return: a pointer to the allocated memory, or NULL if failure occurs.
*         If nmemb or size is 0, returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}
