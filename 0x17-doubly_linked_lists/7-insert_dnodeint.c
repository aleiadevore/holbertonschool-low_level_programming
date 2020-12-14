#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of linked list
 * @idx: index
 * @n: node value
 * Return: pointer to node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *hold;
	unsigned int i;

	for (i = 0, tmp = *h; tmp != NULL; tmp = tmp->next, i++)
		;
	if (idx > i)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (idx == 0)
	{
		new->prev = NULL;
		new->n = n;
		if (*h == NULL || (*h)->next != NULL)
		{
			if (*h != NULL)
			{
				new->next = *h;
			}
			else
				new->next = NULL;
		}
		else
			new->next = NULL;
		*h = new;
		return (new);
	}
	for (i = 0, tmp = *h; i < idx - 1; i++)
		tmp = tmp->next;
	hold = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	new->n = n;
	new->next = hold;
	return (new);
}
