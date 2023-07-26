#include <unistd.h>
#include "main.h"
/**
 * fun_int - A function that prints an int
 * @d: An integer
 */
int fun_int(int d)
{
	int i = 0;

	if (d < 0)
	{
		_putchar('-');
		d = -d;
		i++;
	}
	if (d % 10 != 0)
	{
		fun_int(d / 10);
	}
	_putchar('0' + d % 10);
	return (i);
}
