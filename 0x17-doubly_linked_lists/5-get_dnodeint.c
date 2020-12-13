#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of linked list
 * @index: index to access
 * Return: pointer to node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	if (index > i)
		return (NULL);
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;
	return (head);
}
