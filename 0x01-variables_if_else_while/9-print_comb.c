#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * Return: (0) success
 */

int main(void)
{
	int d1 = 0, d2 = 0;

	while (d1 <= 9)
	{
		while (d2 <= 9)
		{
			putchar(d1 + '0');
			putchar(',' + ' ');
			putchar(d2 + '0');
			d2++;
		}
		d1++;
		d2 = 0;
	}
	putchar('\n');
	return (0);
}
