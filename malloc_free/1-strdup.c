#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Copy a string
 * @str: A pointer to the original string
 * Return: Pointer to the duplicated string, or NULL if it fail
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc((strlen(str) + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < strlen(str) + 1)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}
