#include "holberton.h"

/**
 * print_line - d a s l i t t.
 * @n: Type int
 * Return:If n is 0 or l o p
 */
void print_line(int n)
{
	int line;

	line = 0;
	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
