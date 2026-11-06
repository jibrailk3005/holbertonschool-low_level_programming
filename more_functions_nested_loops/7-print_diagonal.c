#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int spaces;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		spaces = 0;

		while (n > 0)
		{
			i = 0;

			while (i < spaces)
			{
				_putchar(' ');
				i++;
			}

			_putchar('\\');
			_putchar('\n');

			spaces++;
			n--;
		}
	}
}
