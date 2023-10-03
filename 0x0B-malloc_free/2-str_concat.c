#include "main.h"

/**
 * str_concat - function that concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *strcon;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	strcon = malloc((len1 + len2 + 1) * sizeof(char));

	if (strcon == NULL)
		return (0);

	while (i < len1)
	{
		strcon[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		strcon[len1 + j] = s2[j];
		j++;
	}

	strcon[len1 + len2] = '\0';
	return (strcon);
}
