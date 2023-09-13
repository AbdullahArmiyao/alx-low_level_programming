#include  <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	int i, s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			s += i;
		printf("%d\n", s);
	}
}
