#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char letter;

	letter = '0';

	while (letter <= '9')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
