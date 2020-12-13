#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: head of linked list
 * Return: null
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
