#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements of linked list
 * @h:the pointer to head
 * Return:the number of pointer
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (count);
}
