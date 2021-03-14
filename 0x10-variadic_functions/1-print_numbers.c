#include "variadic_funtion.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers
* Return : Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list num;

    va_start(num, n);
    for (i = 0; i < n; i++)
    {
        printf("%i", va_arg(num, n));
        if (separator != 0)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
    va_end

}
