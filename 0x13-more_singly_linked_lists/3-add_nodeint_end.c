#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: head of list
 * @n: int
 * Return: pointer to new node or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tail = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = newnode;
	return (newnode);
}
