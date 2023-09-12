#include "main.h"

/**
 * main - Entry Point
 * Return: (0) success
 * print_alphabet is the function responsible for printing the alphabets
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}