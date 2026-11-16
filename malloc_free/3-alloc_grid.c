#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(ptr[j]);
				j++;
			}
			free(ptr);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
