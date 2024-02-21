#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints list in a doubly linked list
 * @h:a pointer
 * Return:the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
