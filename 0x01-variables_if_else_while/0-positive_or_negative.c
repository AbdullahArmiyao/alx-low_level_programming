#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Return: (0) success
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n);
	if(n > 0)
		printf("The number is positive\n");
	if(n = 0)
		printf("The number is zero\n");
	if(n < 0)
		printf("The number is negative\n");
	return (0);
}
