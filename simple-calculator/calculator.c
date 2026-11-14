
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Declare variables for menu selection and decimal calculations */
	int choice;
	double num1;
	double num2;
	double result;

	/* Repeat the menu until the user chooses 0 */
	choice = 1;
	while (choice != 0)
	{
		printf("Welcome to my Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		scanf("%d", &choice);

		/* If the user chooses an invalid menu choice, display Invalid Choice */
		if (choice < 0 || choice > 4)
		{
			printf("Invalid Choice\n");
		}

		/* Addition */
		if (choice == 1)
		{
			printf("A: ");
			scanf("%lf", &num1);
			printf("B: ");
			scanf("%lf", &num2);
			result = num1 + num2;
			printf("Result: %f\n", result);
		}

		/* Subtraction */
		if (choice == 2)
		{
			printf("A: ");
			scanf("%lf", &num1);
			printf("B: ");
			scanf("%lf", &num2);
			result = num1 - num2;
			printf("Result: %f\n", result);
		}

		/* Multiplication */
		if (choice == 3)
		{
			printf("A: ");
			scanf("%lf", &num1);
			printf("B: ");
			scanf("%lf", &num2);
			result = num1 * num2;
			printf("Result: %f\n", result);
		}

		/* Division */
		if (choice == 4)
		{
			printf("A: ");
			scanf("%lf", &num1);
			printf("B: ");
			scanf("%lf", &num2);

			/* If user chooses 0 for num2, display error to prevent division by zero */
			if (num2 == 0)
			{
				printf("Error: division by zero\n");
			}
			else
			{
				result = num1 / num2;
				printf("Result: %f\n", result);
			}
		}

		/* If user chooses 0 for choice, display Bye */
		if (choice == 0)
		{
			printf("Bye!\n");
		}
	}

	return (0);
}

