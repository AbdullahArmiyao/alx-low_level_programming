#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all arguments
 * @n: number of arguents to be passed
 * @...: can accept any number of arguments passed after n
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	/* counter or index */

	int sum = 0;
	/* sum of all numbers */

	va_list arguments;
	/* declare type as arguments */

	va_start(arguments, n);
	/* initialize arguments to point at first variable n + 1 */

	if (n == 0)
		return (0);

	while (i < n)
	{
		/* retrieve integer from arguments and store it in number */
		int number = va_arg(arguments, int);

		sum += number;
		i++;
	}

	/* free va_list */
	va_end(arguments);

	return (sum);
}
