#include "variadic_functions.h"

/**
 * print_numbers - function o print numbers followed by a new line
 * @separator: pointer to char
 * @n: number of integers to pass
 * @...: allows the function to take multiple variables
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare counter */
	unsigned int i = 0;

	/* declare type as args */
	va_list args;

	/* initialize args with n */
	va_start(args, n);

	while (i < n)
	{
		/* retrieve argument from args and assign it to num */
		int num = va_arg(args, int);

		printf("%d", num);

		/* if separator is not null and we are not at the end of */
		/* arguments, print separator */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
