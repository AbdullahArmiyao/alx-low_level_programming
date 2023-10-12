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
	unsigned int i = 0;

	va_list args;

	va_start(args, n);
	
	if (n == 0)
		return;

	while (i < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
}
