#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/**
 * sum_listint - function to list sum of a number
 * @head:the head of the linked list
 * Return:the sum total
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
	{
	return (0);
	}
	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}
	return (sum);
}
