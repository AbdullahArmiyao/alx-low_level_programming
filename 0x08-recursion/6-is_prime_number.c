#include "main.h"

/**
 * _check_prime - function to check primality
 *
 * @n: increments to check primality
 * @i: user input
 *
 * Return: int
 */

int _check_prime(int n, int i)
{
	if (i <= 1)
	{
		return (0);
	}
	if (i == 2)
		return (1);
	if (i % n == 0)
	{
		return (0);
	}
	if (n * n > i)
		return (1);

	return (_check_prime(n + 1, i));
}

/**
 * is_prime_number - function that returns 1 if the
 * input integer is a prime number
 *
 * @n: number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_check_prime(2, n));
}
