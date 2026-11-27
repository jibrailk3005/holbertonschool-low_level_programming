
#include <stdio.h>
#include <stdarg.h>

/**
 * print_separator - Prints a separator when needed
 * @count: Number of values already printed
 */
void print_separator(int *count)
{
	if (*count > 0)
		printf(", ");
	(*count)++;
}

/**
 * print_all - Prints anything
 * @format: List of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	int number;
	double decimal;
	int letter;
	int count;

	va_start(args, format);
	i = 0;
	count = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			print_separator(&count);
			letter = va_arg(args, int);
			printf("%c", letter);
			break;
		case 'i':
			print_separator(&count);
			number = va_arg(args, int);
			printf("%d", number);
			break;
		case 'f':
			print_separator(&count);
			decimal = va_arg(args, double);
			printf("%f", decimal);
			break;
		case 's':
			print_separator(&count);
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			if (str != NULL)
				printf("%s", str);
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

