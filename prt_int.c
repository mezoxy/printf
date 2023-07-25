#include "main.h"
#include <stdarg.h>
/**
 * _printf_int - A function that prints d and i
 * @format: A string
 * Return: Int
 */
int _printf_int(const char *format, ...)
{
	int i = 0, k;
	va_list y;

	va_start(y, format);
	if (format)
	{
		while (*format)
		{
			if (*format == '%')
			{
				format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					k = va_arg(y, int);
					if (k < 0)
					{
						fun_int(k);
						i++;
					}
					fun_int(k);
					break;
				default:
					i += _putchar(*format);
			}
			}
			else
				i += _putchar(*format);
			format++;
		}
	}
	else
	{
		return (-1);
	}
	va_end(y);
	return (i);
}
