#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: (0) success
 */

int main(void)
{
	char ch = 'a';

	outer:while (ch <= 'z')
	{
		if (ch == 'e' && ch == 'q')
		{
			continue outer;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
