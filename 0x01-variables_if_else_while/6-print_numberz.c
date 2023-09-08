#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: (0) success
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
