#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint - function to print a list
 * @head:the pointer to the head
 *
 * Description: i frees the linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}
}
