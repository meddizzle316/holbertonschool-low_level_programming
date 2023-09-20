#include <stdio.h>
/**
 * main - learning char signs
 *
 * Return: just a zero
 */
int main(void)
{
	printf("Size of a char: %c bytes(s)\n", sizeof(char));
	printf("Size of an int: %u bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %llu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %f bytes(s)\n", sizeof(float));
	return (0);
}
