#include "holberton.h"

/**
 * _strncat - c t s
 * @dest: type char str
 * @src: type char str
 * @n: number of elements concatenate
 * Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
