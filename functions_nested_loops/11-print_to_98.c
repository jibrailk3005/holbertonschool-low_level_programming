#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints integers from n to 98
 * @n: starting integer
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", 98);
}
