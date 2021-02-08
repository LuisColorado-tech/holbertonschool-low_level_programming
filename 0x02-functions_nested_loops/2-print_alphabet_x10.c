#include "holberton.h"
/**
 * main - 
 * Description: use _putchar.c
 * Return: 0
 */
void print_alphabet_x10(void)
{
    int A;
    int B = 0;

    while (B < 10)
    {
        A = 'a';
        while (A <= 'z')
        {
            _putchar(A);
            A++;
        }
        _putchar('\n');
        B++;
    }
    
}