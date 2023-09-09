#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: (0) success
 */

int main(void)
{
	int a = 01;

	while (a <= 89)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
