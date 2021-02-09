#include "holberton.h"
/**
 * print_alphabet - prints the letters from a to z in lowercase
 * Description: use _putchar.c
 * Return: 0 H
 */
void print_alphabet(void)
{
	int letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
		}
		_putchar('\n');
}
