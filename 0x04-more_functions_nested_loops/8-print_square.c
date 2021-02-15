#include "holberton.h"

/**
 * print_square - P  s f by a l.
 *@size: type int
 * Return: Always 0.
 */
void print_square(int size)
{
	int hashtag, clm;

	hashtag = 0;

	if (size < 1)
		_putchar('\n');

	while (clm < size)
	{
		hashtag = 0;
		while (hashtag < size)
		{
			_putchar('#');
			hashtag++;
		}
		_putchar('\n');
		clm++;
	}
}
