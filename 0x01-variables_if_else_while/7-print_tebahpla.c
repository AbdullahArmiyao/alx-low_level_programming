#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * Return: (0) success
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
