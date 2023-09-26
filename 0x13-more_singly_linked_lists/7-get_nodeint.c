#include "lists.h"

/**
 * get_nodeint_at_index - func to get node @index
 * @head:the ptr
 * index:the index
 * Return:the nth element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
	if (head == NULL)
	return (NULL);
	head = head->next;
	}
	return (head);
}
