
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the new string, or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int lengths1;
	unsigned int lengths2;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	lengths1 = i;

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	lengths2 = j;

	s3 = malloc((lengths1 + lengths2 + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < lengths1)
	{
		s3[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < lengths2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';

	return (s3);
}

