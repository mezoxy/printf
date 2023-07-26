#include <stdio.h>
#include "main.h"
int main()
{
	int i, j;

	i = _printf("%s%s", NULL, NULL);
	printf("\n");
	j = printf("%s%s", NULL, NULL);
	printf("\n");
	printf("this is i = %d\nthis is j = %d\n", i, j);
	return (0);
}
