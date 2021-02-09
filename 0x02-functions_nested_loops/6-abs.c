#include "holberton.h"
#include <stdio.h>
/**
 * * abs
 *   
 * Valor abs
 * 
 * Return: 0 Siempre
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    else
    {
        return (n);
    }
}
