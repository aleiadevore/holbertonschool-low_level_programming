#include "lists.h"

/**
 * free_listint2 - frees list and sets head to NULL
 * @head: head of list
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
	}
}
