#include "lists.h"

/**
 * add_dnodeint - add node to beginning of linked list
 * @head: head of linked list
 * @n: value of node
 * Return: pointer to node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
