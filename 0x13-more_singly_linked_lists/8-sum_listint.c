#include "lists.h"

/**
 * sum_listint - func that all list of the data
 * @head:the ptr
 * Return:add
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
	add += head->n;
	head = head->next;
	}
	return (add);
}
