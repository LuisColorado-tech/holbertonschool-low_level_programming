#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_i - print numbers
 *@number: number to be printed
 */
void print_i(va_list number)
{
	printf("%d", va_arg(number, int));
}
/**
 * print_s - prints strings
 *@string: string to print
 */
void print_s(va_list string)
{
	if (string == NULL)
	{
		printf("(nil)");
	}
		printf("%s", va_arg(string, char*));
}
/**
 * print_f - prints float numbers
 *@decimal: number to print
 */
void print_f(va_list decimal)
{
	printf("%f", va_arg(decimal, double));
}
/**
 * print_c - prints chars
 *@arguments: chart to print
 */
void print_c(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * print_all - prints anything
 *@format: entry format defined by user
 */
void print_all(const char * const format, ...)
{
	_print print_any[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{00, 00}
	};
	va_list arguments;
	int x = 0, i = 0;
	
		va_start(arguments, format);
	while (format && format[x])
	{
		i = 0;
		while (print_any[i].dt)
		{
			if (*print_any[i].dt == format[x])
			{
				print_any[i].f(arguments);
				printf(",");
				printf(" ");
			}
			i++;
		}
		x++;
	}
	printf("\n");
	va_end(arguments);
}
