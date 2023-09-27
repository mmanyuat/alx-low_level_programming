#include "lists.h"

/**
 * find_listint_loop - func
 * @head: the ptr
 * Return:null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1;
	listint_t *ptr0;

	ptr1 = head;
	ptr0 = head;
	while (head && ptr1 && p1->next)
	{
	head = head->next;
	ptr1 = ptr1->next->next;
	if (head == ptr1)
	{
	head = ptr0;
	ptr0 = ptr1;
	while (1)
	{
	ptr1 = ptr0;

	while (ptr1->next != head && ptr1->next != ptr0)
	{
	ptr1 = ptr1->next;
	}
	if (ptr1->next == head)
	break;
	head = head->next;
	}
	return (ptr1->next);
	}
	}
	return (NULL);
}
