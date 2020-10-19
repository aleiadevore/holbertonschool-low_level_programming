#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to structure or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *puppy;

	puppy = malloc(sizeof(struct dog));
	if (!puppy)
		return (NULL);
	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;
	return (puppy);
}
