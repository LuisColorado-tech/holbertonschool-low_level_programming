#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - P a s in r f by a n l
 * @s: Type char pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, b;
	int let;

	for (a = 0; s[a] != 0; a++)
	{
	}
	b = 0;
	a = a - 1;
	while (b < a)
	{
		let = s[a];
		s[a] = s[b];
		s[b] = let;
		b++;
		a--;
	}
}
