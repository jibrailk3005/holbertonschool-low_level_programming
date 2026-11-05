#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int row, column, result;

	row = 0;
	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			result = row * column;
			if (column > 0 && result < 10)
				_putchar(' ');
			if (result < 10)
				_putchar(result + '0');
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
			column++;
		}
		_putchar('\n');
		row++;
	}
}
