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
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					string = va_arg(args, char *);
					if (string == NULL)
					{
						string = "(nil)";
						printf("%s(nil)", separator);
					}
					else
					{
						printf("%s%s", separator, string);
					}
				}
				break;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
