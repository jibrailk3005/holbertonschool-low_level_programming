#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
        const char *str;

        va_start(args, n);

        i = 0;
        while (i < n)
        {
                if (i > 0 && separator != NULL)
                        printf("%s", separator);

                str = va_arg(args, const char *);

                if (str != NULL)
                        printf("%s", str);
                else
                        printf("(nil)");

                i++;
        }

        va_end(args);
        printf("\n");
}
