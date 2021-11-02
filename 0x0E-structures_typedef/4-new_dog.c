#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - points to a space in heap containg the string parameter
 * @str: string to be duped
 *
 * Return: pointer to memory space in heap
 */
char *_strdup(char *str)
{
	char *ptr;
	int size, j;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++)
	{
	}
	size++;
	ptr = (char *) malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	for (j = 0; j <= size; j++)
		ptr[j] = str[j];
	return (ptr);
}
/**
 * new_dog - creates a new dog. Saves name and owner
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;
	char *o;
	char *n;

	doggy = malloc(sizeof(dog_t));
		if (!doggy)
			return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	n = _strdup(name);
	if (!n)
	{
		free(n);
		free(doggy);
		return (NULL);
	}
	o = _strdup(owner);
	if (!o)
	{
		free(n);
		free(o);
		free(doggy);
		return (NULL);
	}
	return (doggy);
}
