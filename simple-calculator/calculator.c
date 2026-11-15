
#include <stdio.h>

/**
 * display_menu - Display the Simple Calculator Menu
 *
 * Return: Nothing.
 */
void display_menu(void)
{
	printf("Welcome to my Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

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
	int calculated;

	/* Repeat the menu until the user chooses 0 */

	choice = 1;

	while (choice != 0)
	{
		calculated = 0;

		display_menu();

		printf("Choice: ");
		scanf("%d", &choice);

		/* If the user chooses an invalid menu choice, display Invalid Choice */

		if (choice < 0 || choice > 4)
		{
			printf("Invalid Choice\n");
		}

		if (choice > 0 && choice <= 4)
		{
			printf("A: ");
			scanf("%lf", &num1);

			printf("B: ");
			scanf("%lf", &num2);
		}

		/*
		 * calculated = 1; indicates that the addition, subtraction,
		 * multiplication or division operation has been completed successfully.
		 */

		/* Addition */

		if (choice == 1)
		{
			result = num1 + num2;
			calculated = 1;
		}

		/* Subtraction */

		if (choice == 2)
		{
			result = num1 - num2;
			calculated = 1;
		}

		/* Multiplication */

		if (choice == 3)
		{
			result = num1 * num2;
			calculated = 1;
		}

		/* Division */

		if (choice == 4)
		{
			/* Prevent division by zero */

			if (num2 == 0)
			{
				printf("Error: division by zero\n");
			}
			else
			{
				result = num1 / num2;
				calculated = 1;
			}
		}

		if (calculated == 1)
		{
			printf("Result: %f\n", result);
		}

		/* If the user chooses 0, display Bye */

		if (choice == 0)
		{
			printf("Bye!\n");
		}
	}

	return (0);
}

