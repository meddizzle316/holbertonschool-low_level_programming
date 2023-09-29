
#include "main.h"
/**
 * function name - function description
 * @parameters: description
 * eeturn: return value 
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] !=0; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
