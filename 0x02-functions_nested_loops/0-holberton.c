#include "holberton.h"
/**
 * main - P H, F B A N L.
 * Description: use _putchar.c
 * Return: 0
 */
int main(void)

{
	char holberton[] = "Holberton";
	int a = 0;

	while (holberton[a] != '\0')
	{
		_putchar(holberton[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
