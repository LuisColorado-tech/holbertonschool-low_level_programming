#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - c a of c
 * @c: type char
 * @size: type unsigned int 
 * Return: Null i
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int z;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		p[z] = c;
	return (p);
}
