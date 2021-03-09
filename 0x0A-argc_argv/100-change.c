#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: array 
 * @argc: argument count
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int total, devuelta;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
    devuelta = atoi(argv[1]);

if (devuelta < 0)
    printf("0\n");
    return (1);
}
    for (total = 0; devuelta > 0; total++)
	{
		if (devuelta - 25 >= 0)
			devuelta = devuelta - 25;
		else if (devuelta - 10 >= 0)
			devuelta = devuelta - 10;
		else if (devuelta - 5 >= 0)
			devuelta = devuelta - 5;
		else if (devuelta - 2 >= 0)
			devuelta = devuelta - 2;
		else if (devuelta - 1 >= 0)
			devuelta = devuelta - 1;
    
	}
	printf("%d\n", total);
	return (0);
    
}
