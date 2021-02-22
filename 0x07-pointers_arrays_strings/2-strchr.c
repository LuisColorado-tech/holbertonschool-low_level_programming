#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - L a c in a s
 * @s: type char pointer
 * @c: type char memory area
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
