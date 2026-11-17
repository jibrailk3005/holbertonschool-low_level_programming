
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

