#include <stdio.h>
/**
 * main - prints the alphabet in lower casethen upper case with a new line
 *
 * Return: the whole alphabet twice
 */
int main(void)
{
	char lower;

	char upper;

	for (lower = 'a'; lower == 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper == 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
