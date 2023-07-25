#include "main.h"
#include <stdarg.h>
/**
 * _printf - A function that prints char and string
 * @format: A string
 * Return: Number of char printed
 */
int _printf(const char *format, ...)
{
	char c, *str;
	int i = 0;
	va_list y;

	va_start(y, format);
	if (format)
	{
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				if (*format == 'c')
				{
					c = va_arg(y, int);
					_putchar(c);
					i++;
				}
				else if (*format == 's')
				{
					str = va_arg(y, char *);
					if (str)
						i += prt_str(str);
					else
					{
						_putchar('\0');
						i++;
					}
				}
				else if (*format == '%')
				{
					_putchar('%');
					i++;
				}
				else
					_putchar(*format);
			}
			else
			{
				_putchar(*format);
				i++;
			}
			format++;
		}
	}
	va_end(y);
	return (i);
}
