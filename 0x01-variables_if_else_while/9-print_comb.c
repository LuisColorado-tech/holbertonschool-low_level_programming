#include <stdio.h>
/**
 * main - Ep
 * description: p c o s d-n
 * Return: Always 0 P
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
		i++;
	}
	putchar('\n');
	return (0);
}
