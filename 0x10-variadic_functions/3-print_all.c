#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0; /* counter */
	char *string, *separator = "";
	va_list args; /* variable argument args */

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				{
					char c = va_arg(args, int);
					printf("%s%c", separator, c);
				}
				break;
			case 'i':
				{
					int n = va_arg(args, int);
					printf("%s%d", separator, n);
				}
				break;
			case 'f':
				{
					double f = va_arg(args, double);
					printf("%s%f", separator, f);
				}
				break;
			case 's':
				{
					string = va_arg(args, char *);
					if (string == NULL)
					{
						printf("%s(nil)", separator);
					}
					printf("%s%s", separator, string);
				}
				break;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
