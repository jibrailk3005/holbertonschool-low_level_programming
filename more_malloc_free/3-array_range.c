
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly allocated array, or NULL
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;

	ptr = malloc(j * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < j)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}

