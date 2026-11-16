
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: Pointer to the original string
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	length = i;

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < length + 1)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}

