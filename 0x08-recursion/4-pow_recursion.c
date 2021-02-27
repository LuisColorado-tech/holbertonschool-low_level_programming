#include "holberton.h"

/**
 * _pow_recursion - F t r t v of x  of y.
 * @x: type int
 * @y: type int
 * Return: y lower than 0 function -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
