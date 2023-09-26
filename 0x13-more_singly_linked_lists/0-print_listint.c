#include "lists.h"

/**
 * print_listint - function to print
 * @h:the header
 * Return:the print
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	if (h == NULL)
	return (0);
	for (c = 0; h != NULL; c++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	return (c);
}
