#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function to add new node to the list
 * @head:the begining of the linked list
 * @str:the string
 * Return:the first element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
