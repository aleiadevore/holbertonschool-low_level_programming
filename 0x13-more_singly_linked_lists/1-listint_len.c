#include "lists.h"

/**
 * listint_len - returns length of list
 * @h: list
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
