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
	int i;

	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("%s", (*d).name);
		}
		else
		{
			printf("Name: (nil)");
		}
		if ((*d).age != NULL)
		{
			printf("%d", (*d).age);
		}
		else
		{
			printf("Age: (nil)");
		}
		if ((*d).owner != NULL)
		{
			printf("%s", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
