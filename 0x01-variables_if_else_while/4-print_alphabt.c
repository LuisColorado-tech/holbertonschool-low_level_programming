#include <stdio.h>
/**
 * main - Entry point
 * LG
 * exept q and e
 * Return: Always 0 F
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar (c);
		c++;
		if (c == 'e' || c == 'q')
			c++;
	}
	{
		putchar ('\n');
	}
	return (0);
}
