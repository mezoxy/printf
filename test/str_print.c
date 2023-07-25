#include "main.h"
/**
 * prt_str - A function that prints a string
 * @string: A string to be printed
 * Retun: Number of char printed
 */
int prt_str(char *string)
{
	int k = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		k += 1;
	}
	return (k);
}
