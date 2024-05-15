#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function to insert a node at specific index
 * @head: the pointer to the head
 * @idx:the index
 * @n:the data
 * Return:address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	ptr2->data = n;
	ptr2->next = NULL;

	idx--;
	while (idx != 1)
	{
	ptr= ptr->next;
	idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2
}
