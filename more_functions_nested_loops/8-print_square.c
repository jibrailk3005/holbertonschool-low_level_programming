#include "main.h"

/**
 * print_square - prints a square using the # character
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 0;
		while (row < size)
		{
			column = 0;
			while (column < size)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
