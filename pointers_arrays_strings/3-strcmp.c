
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if s1 is greater, -1 if s2 is greater, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}

		if (s1[i] < s2[i])
		{
			return (-1);
		}

		i++;
	}

	return (0);
}

