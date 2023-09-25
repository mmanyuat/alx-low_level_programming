#include "lists.h"

/**
 * list_len - function to return the number of elements
 * @h:pointer to the linked list
 * Return:NULL or the number of pointer
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count ++;
	h = h->next;
	}
	return (count);
}
