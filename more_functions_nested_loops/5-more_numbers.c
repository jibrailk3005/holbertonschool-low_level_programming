
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int row;
	int column;

	row = 0;
	while (row < 10)
	{
		column = 0;
		while (column <= 14)
		{
			if (column >= 10)
				_putchar(column / 10 + '0');

			_putchar(column % 10 + '0');
			column++;
		}
		_putchar('\n');
		row++;
	}
}

