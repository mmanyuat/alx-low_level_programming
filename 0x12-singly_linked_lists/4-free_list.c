#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free a node
 * @head:the node pointer
 * Return:nothing
 */

void free_list(list_t *head)
{
	list_t *next;
	list_t *current;

	if (head == NULL)
	{
	return;
	}
	current = head;
	while (current != NULL)
	{
	next = current->next;
	free(current->str);
	free(current);
	current = next;
	}
}
