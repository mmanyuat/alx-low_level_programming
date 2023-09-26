#include "lists.h"

/**
 * listint_len - function that prints list of the elements
 * @h:the header
 * Return:the number of the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
	h = h->next;
	c++;
	}
	return (c);
}
