#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds new node
 * @head:the head
 * @n:the integer
 * Return:NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
	return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
	return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
