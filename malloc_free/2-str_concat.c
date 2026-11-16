
#include "main.h"
#include <stdlib.h>

/**
 * string_length - Counts the characters in a string
 * @str: String to count
 *
 * Return: Number of characters
 */
static unsigned int string_length(char *str)
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
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the new string, or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, lengths1, lengths2;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lengths1 = string_length(s1);
	lengths2 = string_length(s2);

	s3 = malloc((lengths1 + lengths2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

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

