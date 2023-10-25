#ifndef MAIN_H
#define MAIN_H

typedef struct
{
	char *name;
	int age;
	char *owner;
} dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
