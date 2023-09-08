#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: (0) success
 */

int main(void)
{
	int d = 0;
	char l = 'a';

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	while (char <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
