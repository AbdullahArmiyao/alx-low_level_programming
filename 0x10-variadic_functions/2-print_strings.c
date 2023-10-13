#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 *
 * @separator: pointer to char
 * @n: number of arguments
 * @...: shows function can handle more than one arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* counter */
	unsigned int i = 0;

	/* declare variable type */
	va_list args;

	/* initialize args with n */
	va_start(args, n);

	while (i < n)
	{
		/* get the string argument */
		const char *str = va_arg(args, char *);

		/* print (nil) if string is empty */
		if (str == NULL)
		{
			printf("(nil)");
		}

		/* print the string */
		printf("%s", str);

		/* print the separator as long as the conditions are met */
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
