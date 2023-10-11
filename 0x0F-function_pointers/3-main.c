#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, char **argv)
{
	/* declare variables for the numbers, operation sign, answer */
	/* and pointer to function that will be used to call the operation */
	int num1, num2, ans;
	char operation;
	int (*func)(int, int);

	/* if the arguments are less than or more than 4, it is an error */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert the values of num1 and num2 to integers from strings */
	/* the values are the arguments at position 1 and 3 */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* calling the function at the second cmd line argument which is */
	/* the operator */
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* obtaining the operator */
	operation = *argv[2];
	/* if n%0 or n/0, it is an error */
	if ((operation == '/' || operation == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* depending on the operator, perform the corresponding function */
	ans = func(num1, num2);

	/* print the answer */
	printf("%d\n", ans);

	return (0);
}
