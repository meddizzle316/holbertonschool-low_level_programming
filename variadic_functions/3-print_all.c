#include "variadic_functions.h"
void print_char_string (char * placeholder)
{
	printf("%s", placeholder);
}

void print_int (int placeholder)
{
	printf("%d", placeholder);
}


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
	va_list(ap);

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		char_placeholder = va_arg(ap, char *);
		int_placeholder = va_arg(ap, int);
		while (format[i] == 'c' || format[i] == 's')
		{
			print_char_string(char_placeholder);
		}
		if (format[i] == 'i' || format[i] == 'f')
		{
			print_int(int_placeholder);
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
