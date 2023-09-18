#include "main.h"

/**
 *  rev_string -  reverses a string.
 *  @s: char arg
 *  Return: nothing
 */

void rev_string(char *s)
{
	int counter, length = 0, length_1 = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	length_1 = length - 1;

	for (counter = 0; counter < length / 2; counter++)
	{
		temp = s[counter];
		s[counter] = s[length_1];
		s[length_1--] = temp;
	}
}
