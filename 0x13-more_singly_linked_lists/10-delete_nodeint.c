#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index to delete
 * Return: 1 on success or -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *node, *after;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	before = *head;
	node = (*head)->next;
	if (index == 0)
	{
		*head = node;
		free(before);
		return (-1);
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
	free(node);
	return (1);
}
