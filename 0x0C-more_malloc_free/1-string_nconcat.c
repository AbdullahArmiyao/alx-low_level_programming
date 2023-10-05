#include "main.h"

/**
 * string_nconcat - function that concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters to concatenate
 *
 * Return: new_str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i = 0;
	char *new_str;

	/* check if s1 and s2 are null and treat them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calculating string length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	/*if n>=len2, use the entire string s2 */
	if (n >= len2)
		n = len2;

	/* allocating a memory to the new string */
	new_str = malloc(sizeof(char) * (len1 + n + 1));

	/* checking if memory allocation failed */
	if (new_str == NULL)
		return (NULL);

	/* assigning values of s1 to new_str */
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	/* concatenating n number of characters to new string */
	while (i < n)
	{
		new_str[len1 + i] = s2[i];
		i++;
	}
	/* add null terminator */
	new_str[len1 + i] = '\0';
	return (new_str);
}
