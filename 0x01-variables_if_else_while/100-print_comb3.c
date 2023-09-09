#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: (0) success
 */

int main(void)
{
	int a = 0, b = 0;

	while (a <= 8)
	{
		b = a + 1;

		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}

			b++;
		}

		a++;
	}

	putchar('\n');
	return (0);
}
