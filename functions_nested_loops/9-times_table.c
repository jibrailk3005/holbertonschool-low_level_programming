#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int row;
	int column;
	int result;

	row = 0;

	while (row < 10)
	{
		column = 0;

		while (column < 10)
		{
			result = row * column;

			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			column = column + 1;
		}

		_putchar('\n');
		row = row + 1;
	}
}
