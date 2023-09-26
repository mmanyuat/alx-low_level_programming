#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to print the last node
 * @head:the header ptr
 * @n:the integer
 * Return:NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	temp = *head;
	while
	(temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = new;
	return (new);
}
