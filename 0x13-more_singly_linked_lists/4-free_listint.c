#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free
 * @head:the head
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
	next = head->next;
	free(head);
	head = next;
	}

}
