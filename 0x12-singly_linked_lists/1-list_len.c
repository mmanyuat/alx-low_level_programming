#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * list_len - function to give number of the elements
 * @h:ptr to the head
 * Return:the number of the elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
