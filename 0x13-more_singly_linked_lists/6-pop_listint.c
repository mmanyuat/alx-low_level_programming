#include "lists.h"
#include  <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function to delete the head node
 * @head: the first pointer to the head node
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
	{
	return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
