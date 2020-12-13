#include "lists.h"

/**
 * print_dlistint - prints elements in doubly linked list
 * @h: head of list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++, h = h->next)
		printf("%d\n", h->n);
	return (count);
}
