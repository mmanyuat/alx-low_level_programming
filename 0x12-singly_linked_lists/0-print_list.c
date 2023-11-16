#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - function to print elements of a linked list
 * @h:the header ptr
 * Return:the number of the nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	else
	printf("[%d] %s\n", h->len,  h->str);
	count++;
	h = h->next;
	}
	return (count);
}
