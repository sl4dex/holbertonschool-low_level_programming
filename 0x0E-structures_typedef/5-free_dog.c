#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog pointers
 * @d: First member
 */
void free_dog(dog_t *d)
{	if (d)
	{
		free(d->name);
		free(&(d->age));
		free(d->owner);
		free(d);
	}
}
