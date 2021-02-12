#include "holberton.h"

/**
 * more_numbers - p 10 t n f 0 t 14.
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int row;
	int num;

	row = 0;
	while (row < 10)
	{

		num = 0;
		while (num < 15)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
		row++;
		_putchar('\n');
	}

}
