#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: an ellipse that represents the variable arguments passed
 * Return: anything of c, i, f or char* type can be printed
 */
void print_all(const char * const format, ...)
{
	int i;
	char *char_placeholder;
	int int_placeholder;
	double double_placeholder;

	i = 0;
	va_list(ap);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char_placeholder = va_arg(ap, char *);
			printf("%s", char_placeholder);
		}
		else if (format[i] == 'i')
		{
			int_placeholder = va_arg(ap, int);
			printf("%d", int_placeholder);
		}
		else if (format[i] == 'f')
		{
			double_placeholder = va_arg(ap, double);
			printf("%lf", double_placeholder);
		}
		else if (format[i] == 's')
		{
			char_placeholder = va_arg(ap, char *);
			printf("%s", char_placeholder);
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
}
