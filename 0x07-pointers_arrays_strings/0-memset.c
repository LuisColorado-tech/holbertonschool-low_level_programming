#include "holberton.h"
#include <stdio.h>

/**
 * _memset - F t f m w a c b
 * @s: char pointer
 * @b: char pointer
 * @n: type char bytes of mem pointed by s with constant byte b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
