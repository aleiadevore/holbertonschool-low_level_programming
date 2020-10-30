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
		printf("clear mem for: %s", head->str);
		place = head;
		head = head->next;
		free(place->str);
		free(place);
	}
}
