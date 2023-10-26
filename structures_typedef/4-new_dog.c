#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: return value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	new_dog = (dog_t *)malloc(sizeof(dog_t));
	new_dog->name = (char *)malloc(sizeof(char) * len1 + 1);
	new_dog->owner= (char *)malloc(sizeof(char) * len2 + 1);
	if (new_dog == NULL || new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
