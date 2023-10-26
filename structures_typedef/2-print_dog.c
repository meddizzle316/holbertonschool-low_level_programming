#include "main.h"
#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - prints a struct called dog
 * @d: pointer to dog struct to be printed
 * Return: a printed dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (d->age != 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if ((*d).owner != NULL)
		{
			printf("Owner %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
