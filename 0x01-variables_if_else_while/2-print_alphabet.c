#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 * Return: (0) success
 */

int main(void)
{
	char chs = 'a';

	while (chs <= 'z')
	{
		putchar(chs);
		chs++;
	}
	putchar('\n');
	return (0);
}
