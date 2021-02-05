#include <stdio.h>
/**
 * main - Ep
 * description: p c o s d-n
 * Return: Always 0 P
 */
int main(void)
{
	int i, f;

	i = '0';
	while (i <= '9')
	{
		f = '0';
		while (f <= '9')
		{
			putchar(i);
			putchar(f);
			if ((i == '9') && (f == '9'))
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			f++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
