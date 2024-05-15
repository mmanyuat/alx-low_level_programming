#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function to get node at an index
 * @head:the  head node
 * @index: the position of the node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
	if (count == index)
	{
	return (current);
	}
	count++;
	current = current->next;
	}
	return (NULL);
}
