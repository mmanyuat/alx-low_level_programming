#include "lists.h"
#include <stdio.h>
/**
 * print_list - function of the list of the items
 * @h: the pointer to the list
 * Return:nothing
 */

size_t print_list(const list_t *h)
{
	size_t iterate;

	while (h != NULL)
	{
	if (h->str != NULL)
	printf("[%d] %s\n", h->len, h->str);
	else
	printf("[0] (nil)\n");
	iterate++;
	h = h->next;
	}
	return (iterate);
}

