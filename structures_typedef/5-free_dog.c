#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function description
 * @d: a dog to be freed
 * Return: a freed dog
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
