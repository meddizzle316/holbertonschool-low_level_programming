#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @src: a given string
 * Return: the newly capitalized string
 */
char *cap_string(char *src)
{
	int i;
	int isNewWord;

	src[-1] = 0;
	isNewWord = 0;
	for (i = 0; src[i]; i++)
	{
		if (src[i - 1] <= 64)
		{
			isNewWord = 1;
		}
		else if (src[i - 1] >= 91 && src[i - 1] <= 96)
		{
			isNewWord = 1;
		}
		else if (src[i - 1] >= 123)
		{
			isNewWord = 1;
		}
		if (src[i] >= 97 && src[i] <= 122 && isNewWord == 1)
		{
			src[i] -= 32;
			isNewWord = 0;
		}
		else if (src[i] < 97 || src[i] > 122)
		{
			isNewWord = 0;
		}
	}
	return (src);
}
