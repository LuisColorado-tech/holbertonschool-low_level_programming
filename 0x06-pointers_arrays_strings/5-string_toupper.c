#include "holberton.h"

/**
 * string_toupper - F that r the c of an a of int
 * @a: Type int
 * Return: string a
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] > 96 && a[x] < 123)
		{
			a[x] -= 32;
		}
	}
	return (a);
}
