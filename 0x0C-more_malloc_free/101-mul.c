#include <stdio.h>
#include "main.h"

/* helper functions */
#define _atoi(c) (c - '0')
#define _itoa(i) ((i % 10) + '0')
#define _isdigit(c) ((c >= '0' && c <= '9') ? 1 : 0)

/**
 * mem_set - function that fills memory with const byte
 *
 * @str: string buffer
 * @b: byte to write
 * @n: number of bytes
 *
 * Return: pointer to memory area s
 */
void *mem_set(void *str, int b, unsigned int n)
{
	unsigned int i = 0;
	char *temp = (char *) str;

	while (i < n)
	{
		temp[i] = b;
		i++;
	}
	return (str);
}

/**
 * err_mess - function to print error message
 */
void err_mess(void)
{
	printf("Error");
	exit(98);
}

/**
 * str_len - function to calculate string length
 *
 * @str: string
 *
 * Return: string length
 */
unsigned int str_len(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * main - function that multiples two positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *num1, *num2;
	int num1_len, num2_len, t_len;
	int start = 0, prod, rem, i, j;
	char  *res;

	if (argc != 3)
		err_mess(); /* check if argc is more or less than 2 numbers */

	num1 = argv[1]; /* value for the first number */
	num2 = argv[2];/* value for second number */

	num1_len = str_len(num1); /* length of first number */
	num2_len = str_len(num2); /* length of second number */


	t_len = num1_len + num2_len; /* total length */
	res = malloc(sizeof(char) * (t_len + 1)); /* allocate memory to the result */

	if (res == NULL) /* check if malloc failed */
		err_mess();

	mem_set(res, '0', t_len); /* initialize result array with zeroes */
	res[t_len] = '\0';

	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			/* check if both inputs are digits else clean up memomry */
			if (!_isdigit(num1[i]) && !_isdigit(num2[j]))
			{
				free(res);
				err_mess();
			}
			/* multiply both numbers */
			prod = _atoi(num1[i]) * _atoi(num2[j]);
			rem = _atoi(res[i + j + 1]) + prod;
			/* update results */
			res[i + j + 1] = _itoa(rem);
			res[i + j] = (_atoi(res[i + j]) + _itoa(rem / 10));
		}
	}

	/* find the first none zero digit to determine starting point */
	while (start < t_len && res[start] == '0')
		start++;
	if (start == t_len)
		puts("0\n"); /* answer is  0 */
	else
		printf("%s\n", res + start); /* print result without theleading zero*/

	free(res);

	return (0);
}
