#include <stdio.h>
/**
 * main - Entry point
 * description: pnob16
 * LG
 * Return: Always 0  P
 */
int main(void)
{
	int c;
	char a[16] = "0123456789abcdef";
	char b;

	c = 0;
	while (c < 16)
	{
		b = a[c];
		putchar(b);
		c++;
	}
	putchar('\n');
	return (0);
}
