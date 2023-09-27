#include "lists.h"

/**
 * free_list - func to free a list
 * @head:the head of the list
 * Return:nothing
 */
void free_list(list_t **head)
{
	list_t *tmp;
	list_t  *cur;

	if (head != NULL)
	{
	cur = *head;
	while ((tmp = cur) != NULL)
	{
	cur = cur->next;
	free(tmp);
	}
	*head = NULL;
	}
}
/**
 * print_listint_safe - function to print linkedlist
 * @head: the first ptr
 * Return:the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t snode = 0;
	list_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	exit(98);
	new->p = (void *)head;
	new->next = ptr;
	ptr = new;
	add = ptr;
	while (add->next != NULL)
	{
	add = add->next;
	if (head == add->p)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		free_list(&ptr);
		return (snode);
	}
	}
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	snode++;

	}
	free_list(&ptr);
	return (snode);
}
