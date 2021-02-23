#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - F t c t s.
 * @s1: type str
 * @s2: type str
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)

{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		return (s1[a] - s2[a]);
	}
	return (0);
}
