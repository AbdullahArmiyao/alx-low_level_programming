#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * Return: (0) success
 */

int main(void)
{
	int d1 = 0;

	while (d1 <= 9)
	{
		putchar(d1 + '0');
		if (d1 < 9)
		{
			putchar(',');	
			putchar(' ');
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
