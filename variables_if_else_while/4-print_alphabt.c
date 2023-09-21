#include <stdio.h>
/**
 * main - printing alphabet in lowercase
 *
 * Return: ditto
 */
int main(void)
{
	char counter;

	for (counter = 97; counter < 123; counter++)
	{
		if (counter == 113 || counter == 101)
		{
			continue;
		}
		else
		{
			putchar(counter);
		}
	}
	putchar('\n');
	return (0);
}
