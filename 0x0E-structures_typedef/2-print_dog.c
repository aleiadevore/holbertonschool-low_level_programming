#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints values of struct dog
 * @d: name of structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->owner != NULL)
		printf("Name: %s\n", d->owner);
	else
		printf("Name: (nil)");
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");

}
