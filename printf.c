#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - A function that prints char and string
 * @format: A string
 * Return: Number of char printed
 */
int _printf(const char *format, ...)
{
	char v, *str;
	int i = 0, u;
	va_list y;

	va_start(y, format);
	if (check_format(format) == -1)
		return (-1);
	if (format)
	{
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'c':
						v = va_arg(y, int);
						i += _putchar(v);
						break;
					case 's':
						str = va_arg(y, char *);
						i += str ? prt_str(str) : prt_str("(null)");
						break;
					case '%':
						i += _putchar('%');
						break;
					case 'd':
					case 'i':
						u = va_arg(y, int);
						i += fun_int(u);
						break;
					default:
						i += _putchar('%') + _putchar(*format);
						break;
				}
			}
			else
				i += _putchar(*format);
			format++;
		}
	}
	va_end(y);
	return (i);
}
