#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: head of list
 * @idx: place to add node
 * @n: int for node
 * Return: pointer to new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	if (*head == NULL & idx != 0)
		return (NULL);
	node = malloc(sizeof(listint_t));
	tmp = *head;
	if (!node)
		return (NULL);
	for (i = 0; tmp->next != NULL && i < (idx - 1); i++)
	{
		tmp = tmp->next;
	}
	if (tmp->next == NULL && i < (idx - 1))
	{
		if ((idx - i) <= 2)
		{
			node->next = NULL;
			tmp->next = node;
			node->n = n;
			return (node);
		}
		free(node);
		return (NULL);
	}
	node->next = tmp->next;
	tmp->next = node;
	node->n = n;
	return (node);
}
