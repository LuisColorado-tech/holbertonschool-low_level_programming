#include "holberton.h"
/**
 * print_numbers - P N F 0 T 9
 * Return: 0 success
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
