#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers
* @separator: string
* @n: number of arguments
* Return : Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(num, int));
		if (separator != 0 && i != (n - 1))
		{
			printf("%s", separator);
			}
			}
			printf("\n");
			va_end(num);
			}
