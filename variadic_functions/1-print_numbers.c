#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separated by a separator
 * @separator: string printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	i = 0;
	while (i < n)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(numbers, int));
		i++;
	}

	va_end(numbers);

	printf("\n");
}
