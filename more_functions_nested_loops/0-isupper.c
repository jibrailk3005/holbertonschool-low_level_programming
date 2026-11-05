#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char letter;

	letter = 'A';

	while (letter <= 'Z')
	{
		if (c == letter)
			return (1);

		letter++;
	}

	return (0);
}
