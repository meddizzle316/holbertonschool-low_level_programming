#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_do - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: return value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *stored_name;
	char *stored_owner;

	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
	new_dog = (dog_t *)malloc(sizeof(dog_t));
	stored_name = (char *)malloc(sizeof(char) * len1 + 1);
	stored_owner = (char *)malloc(sizeof(char) * len2 + 1);
	if (new_dog == NULL || stored_name == NULL || stored_owner == NULL)
	{
		free(stored_owner);
		free(stored_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(stored_name, name);
	new_dog->name = stored_name;
	new_dog->age = age;
	strcpy(stored_owner, owner);
	new_dog->owner = stored_owner;
	return (new_dog);
}
