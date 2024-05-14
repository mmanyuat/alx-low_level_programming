#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - function to add node to the end of the list
 * @head:the pointer to the head node
 * @n:the data of type int
 * Return:the address of the last element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Newnode;
	listint_t *Lastnode;

	Newnode = malloc(sizeof(listint_t));
	if (Newnode == NULL)
	{
	return (NULL);
	}
	Newnode->n = n;
	Newnode->next = NULL;
	if (*head == NULL)
	{
	*head = Newnode;
	}
	else
	{
	Lastnode = (*head);
	while (Lastnode->next != NULL)
	{
	Lastnode = Lastnode->next;
	}
	Lastnode->next = Newnode;
	}
	return (*head);
}
