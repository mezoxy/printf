#include "main.h"
/**
 * check_format - A function that checks the format
 * @format: A pointer to a string
 * Return: -1
 */
int check_format(const char *format)
{
	if (!format || (*format == '%' && !(format + 1)))
	{
		return (-1);
	}
	if (*format == '%' && *(format + 1) == ' ' && !(format + 2))
	{
		return (-1);
	}
	return (0);
}
