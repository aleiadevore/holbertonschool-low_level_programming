#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 * @head: head of list
 * @n: int to add to struct
 * Return: pointer to new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
