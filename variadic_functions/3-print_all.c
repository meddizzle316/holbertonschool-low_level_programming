#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_al? - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: an ellipse that represents the variable arguments passed
 * Return: anything of c, i, f or char* type can be printed
 */
void print_all(const char * const format, ...)
{
	int i;
	char char_placeholder;
	char *string_placeholder;
	int int_placeholder;
	double float_placeholder;
	va_list(ap);

	i = 0;
	if (format != NULL)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			switch(format[i]) {
			case 'c':
				char_placeholder = va_arg(ap, int);
				printf("%c", char_placeholder);
				break;
			case 'i':
				int_placeholder = va_arg(ap, int);
				printf("%d", int_placeholder);
				break;
			case 's':
				string_placeholder = va_arg(ap, char *);
				while (string_placeholder == NULL)
				{
					string_placeholder = "(nil)";
				}
				printf("%s", string_placeholder);
				break;
			case 'f':
				float_placeholder = va_arg(ap, double);
				printf("%f", float_placeholder);
				break;
			}
			if (format[i + 1] != '\0' && ((format[i] == 's' 
			|| format[i] == 'c' 
			|| format[i] == 'i' 
			|| format[i] == 'f')))
			{
				printf(", ");
			}
			i++;
		}
		va_end(ap);
	}
	putchar('\n');
}
