#include "holberton.h"
/**
 *print_most_numbers - P t n e 2 a 4
 *
 *Return: void
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if ((c != '2') && (c != '4'))
		{
			_putchar(c);
			c++;
		}

		else
			c++;
	}
	_putchar('\n');
}
