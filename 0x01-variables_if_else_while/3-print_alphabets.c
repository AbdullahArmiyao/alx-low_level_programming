#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: (0) success
 */

int main(void)
{
	char ls = 'a';
	char LS = 'A';

	while (ls <= 'z')
	{
		putchar(ls);
		ls++;
	}
	while (LS <= 'Z')
	{
		putchar(LS);
		LS++
	}
	putchar('\n');
	return (0);
}
