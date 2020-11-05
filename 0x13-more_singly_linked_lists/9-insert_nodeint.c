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
	unsigned int i = 0, len = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	tmp = *head;
	for (; tmp != NULL; len++)
		tmp = tmp->next;
	if (idx > len)
	{
		free(node);
		return (NULL);
	}
	tmp = *head;
	for (i = 0; tmp->next != NULL && i < (idx - 1); i++)
	{
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		node->next = NULL;
	else
		node->next = tmp->next;
	tmp->next = node;
	node->n = n;
	return (node);
}
