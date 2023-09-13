#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, s;

	for (i = 0; i < 4000000; i++)
	{
		if ((i % 2) == 0)
		{
			s = f1 + f2;
			printf("%lu", s);
			f1 = f2;
			f2 = s;

			if (i != 3999998)
				printf(", ");
			else
				printf("\n");
		}
	}
	return (0);
}
