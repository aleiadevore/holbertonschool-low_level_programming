#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *node, *after;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	before = *head;
	node = (*head)->next;
	if (index == 0)
	{
		if (node != NULL)
			node->prev = NULL;
		*head = node;
		free(before);
		return (1);
	}
	for (i = 0; node->next != NULL && i < (index - 1); i++)
	{
		before = before->next;
		node = node->next;
	}
	if (node->next == NULL && i < (index - 1))
		return (-1);
	after = node->next;
	before->next = after;
	after->prev = before;
	free(node);
	return (1);
}
