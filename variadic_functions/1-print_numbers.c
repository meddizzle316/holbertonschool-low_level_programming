#include "variadic_functions.h"
#include <ctype.h>
/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of variable arguments
 * @...: variable arguments
 * Return: same as description
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list(args);

	x = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (separator != NULL)
			{
				fputs(separator, stdout);
			}
		}
		else if (i == n - 1)
		{
				x = va_arg(args, int);
				printf("%d", x);	
		}
	}
	putchar('\n');
	va_end(args);
}

