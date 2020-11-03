#include "lists.h"

/**
 * sum_listint - sums list of ints
 * @head: head of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
