#include "lists.h"

/**
 * free_list - frees list
 * @head: head of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *place;

	while (head != NULL)
	{
		place = head;
		head = head->next;
		free(place->str);
		free(place);
	}
}
