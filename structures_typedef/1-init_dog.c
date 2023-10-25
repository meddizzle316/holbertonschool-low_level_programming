#include "main.h"
#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - initializes a struct of dog type
 * @d: a struct named d
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
