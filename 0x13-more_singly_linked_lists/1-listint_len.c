#include "lists.h"

/**
 * listint_len - function to print length of a node
 * @h:the pointer to the node header
 * Return:the number of the nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
