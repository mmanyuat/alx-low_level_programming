#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to free
 * @head:the head
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
	head = head->next;
	free(temp);
	}

}
