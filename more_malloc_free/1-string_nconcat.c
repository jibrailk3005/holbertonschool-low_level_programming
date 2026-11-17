
#include "main.h"
#include <stdlib.h>

/**
 * string_length - Calculates the length of a string
 * @str: String to measure
 *
 * Return: Length of the string
 */
unsigned int string_length(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy from s2
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int lengths1, lengths2, len2;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lengths1 = string_length(s1);
	lengths2 = string_length(s2);

	if (n < lengths2)
		len2 = n;
	else
		len2 = lengths2;

	s3 = malloc(lengths1 + len2 + 1);
	if (s3 == NULL)
		return (NULL);

	i = 0;
	while (i < lengths1)
	{
		s3[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < len2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';

	return (s3);
}

