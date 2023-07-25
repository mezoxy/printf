#include <unistd.h>
#include "main.h"
/**
 * fun_int - A function that prints an int
 * @d: An integer
 */
void fun_int(int d)
{
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	if (d % 10 != 0)
	{
		fun_int(d / 10);
	}
	_putchar('0' + d % 10);
}
