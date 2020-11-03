#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: head of node
 * @index: point to return
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (index > i)
		return (NULL);
	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
