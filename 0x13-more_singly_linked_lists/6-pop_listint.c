#include "lists.h"

/**
 * pop_listint - pops head of list
 * @head: head of list
 * Return: value of popped node or zero
 */

int pop_listint(listint_t **head)
{
	listint_t *old;
	int n;

	if ((*head)->next == NULL)
		return (0);
	old = *head;
	n = old->n;
	*head = (*head)->next;
	free(old);
	return (n);
}
