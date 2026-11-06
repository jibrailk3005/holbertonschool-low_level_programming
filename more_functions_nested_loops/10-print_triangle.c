#include "main.h"

/**
 * print_triangle - prints a triangle using the # character
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row;
	int column;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		row = 0;
		while (row < size)
		{
			spaces = size - row - 1;
			column = 0;

			while (column < spaces)
			{
				_putchar(' ');
				column++;
			}

			column = 0;
			while (column <= row)
			{
				_putchar('#');
				column++;
			}

			_putchar('\n');
			row++;
		}
	}
}
