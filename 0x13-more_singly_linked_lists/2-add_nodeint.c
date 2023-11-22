#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add new node @ the begining
 * @head:the list head
 * @n:the new data
 * Return:address of the new element or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	if (new_node == NULL)
	return (NULL);
	else
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
