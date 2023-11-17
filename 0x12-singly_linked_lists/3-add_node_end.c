#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - fuction to add the last node
 * @head:ptr
 * @str:the string
 * Return:address of the last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	*head = new_node;
	return(new_node);       	
	last_node = *head;
	while (last_node->next != NULL)
	{
	last_node = last_node->next;
	}
	last_node->next = new_node;
	return (last_node);
}
