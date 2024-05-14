#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function that frees list
 * @head: the pointer to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
	return;

	current = *head;
	while (head != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}
	*head = NULL;
}
