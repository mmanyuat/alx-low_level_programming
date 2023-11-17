#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function to add new node to the begining of the linked list
 * @head:the ptr
 * @str:the string data
 * Return:the address of the new elment
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node == NULL)
	return (NULL);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
