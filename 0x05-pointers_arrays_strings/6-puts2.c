#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - P o c o of 2 of a s
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
