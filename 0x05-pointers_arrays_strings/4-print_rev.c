/*#include <string.h>*/
#include "main.h"

/**
 * print_rev - main function
 *
 * @s: value to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
