#include "lists.h"

/**
 * add_dnodeint_end - adds node to end
 * @head: head of linked list
 * @n: value to put into node
 * Return: pointer to node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		*head = new;
		return (new);
	}
	while (node->next != NULL)
	{
		node = node->next;
	}
	new->prev = node;
	new->next = NULL;
	new->n = n;
	node->next = new;
	return (new);
}
