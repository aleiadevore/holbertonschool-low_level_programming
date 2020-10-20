#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcpy - copies string to buffer
 * @dest: destination
 * @src: source
 * Return: destination value
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, spot;

	while (src[length] != '\0')
	{
		length++;
	}
	for (spot = 0; spot <= length; spot++)
		dest[spot] = src[spot];
	return (dest);
}
/**
 * new_dog - creates new dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to structure or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nmlen, owlen;
	struct dog *puppy;

	puppy = malloc(sizeof(struct dog));
	if (puppy == NULL)
		return (NULL);
	for (nmlen = 0; name[nmlen] != '\0'; nmlen++)
		;
	puppy->name = malloc(sizeof(char) * nmlen + 1);
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	_strcpy(puppy->name, name);
	puppy->age = age;
	for (owlen = 0; owner[owlen] != '\0'; owlen++)
		;
	puppy->owner = malloc(sizeof(char) * owlen + 1);
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	_strcpy(puppy->owner, owner);
	return (puppy);
}
