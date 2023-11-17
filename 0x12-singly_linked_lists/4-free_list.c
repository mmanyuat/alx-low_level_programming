#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free a node
 * @head:the node pointer
 * Return:nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
	free(head);;
	}
}
