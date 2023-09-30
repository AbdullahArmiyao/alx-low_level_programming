#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int c, n, sum = 0;
	int null = 0;
	char *f;

	if (argc < 2)
	{
		printf("%d\n", null);
	}
	
	for (c = 1; argv[c]; c++)
	{
		n = strtol(argv[c], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum = sum + n;
		}
	}

	printf("%d\n", sum);
	return (0);
}
