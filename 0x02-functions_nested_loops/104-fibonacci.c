#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 *
 */

int main(void)
{
	int i;
	unsigned int f1 = 1, f2 = 2, n;

	printf("%u, %u", f1, f2);

	for (i = 3; i <= 98; i++)
	{
		n = f1 + f2;
		printf(", %u", n);
		f1 = f2;
		f2 = n;
	}

	return (0);
}
