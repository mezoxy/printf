#include "main.h"
#include <unistd.h>
/**
 * _putchar - A function that prints char
 * Return: Int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
