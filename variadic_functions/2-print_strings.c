#include "variadic_functions.h"
/**
 * print_string? - prints strings followed by newline
 * @separator: separator between strings
 * @n: number of strings passed
 * @...: ellipse representing variable functions
 * Return: a printed string or series of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *placeholder;

	va_list(args);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			placeholder = va_arg(args, const char*);
			if (placeholder != NULL)
			{
				printf("%s", placeholder);
			}
			else
			{
				fputs("(nil)", stdout);
			}
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else if (i == n - 1)
		{
			printf("%s", va_arg(args, const char *));
		}

	}
	putchar('\n');

	va_end(args);
}
