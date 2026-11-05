#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		if (letter != '2' && letter != '4')
			_putchar(letter);
	}
	_putchar('\n');
}
