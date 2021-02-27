#include "holberton.h"
#include <stdio.h>

/**
 * factorial - R t l of a s
 * @n: type int
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
