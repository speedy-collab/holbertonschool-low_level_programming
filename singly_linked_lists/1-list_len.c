#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{

		current = current->next;
		count++;
	}

	return (count);
}