#include <stdio.h>
/**
 * main - p n 1 to 100 p n l
 * description: mul of 3 = Fizz, mul of 5 = Buzz.
 * mul of 3 and 5 =  FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
