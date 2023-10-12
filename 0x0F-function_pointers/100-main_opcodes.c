#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	/* declare variables for byte, i and the pointer array */
	/* byte is used to determine how many bytes of machine code */
	/* from the function should be printed in hexadecimal */
	int byte, index = 0;
	char *array;

	/* if the arguments are more or less than 2, it is an error */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* convert the second command line argument to an integer */
	byte = atoi(argv[1]);

	/* checks if the byte is negative, if so, it is an error */
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* array is assigned to the address of the main memory */
	array = (char *)main;

	while (index < byte)
	{
		/* to handle last byte */
		if (index == byte - 1)
		{
			/* print the hex representation of the byte stored in array at current index */
			printf("%02hhx\n", array[index]);
			break;
		}

		printf("%02hhx ", array[index]);
		index++;
	}

	return (0);
}
