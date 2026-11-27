#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 if an argument is invalid
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;
	i = 1;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		result = result + atoi(argv[i]);
		i++;
	}

	printf("%d\n", result);

	return (0);
}
