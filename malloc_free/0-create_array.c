#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: number of elements in the array
 * @c: character used to initialize the array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)

	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	if (ar == NULL)

	{
		return (NULL);
	}

	i = 0;

	while (i < size)

	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
