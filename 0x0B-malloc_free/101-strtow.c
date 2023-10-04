#include "main.h"

/**
 * str_len - function to check string length
 * @s: string
 * Return: int len
 */

int str_len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * cnt_word - function to count words
 *
 * @str: string
 *
 * Return: int cnt
 */

int cnt_word(char *str)
{
	/* word count declaration as well as current word */
	int i = 0, cnt = 0, cur_word = 0;

	/* loop through to see if the current position is a space */
	/* and then increase the word count if not as long as str is not \0 */
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			cur_word = 0;
		}
		else if (!cur_word)
		{
			cnt++;
			cur_word = 1;
		}
		i++;
	}
	return (cnt);
}

/**
 * cpy_wd - function to copy words
 *
 * @str: string
 * @strt: start indices
 * @end: end indices
 *
 * Return: word
 */

char *cpy_wd(char *str, int strt, int end)
{
	int i = 0, len = end - strt + 1;
	char *word;

	word = malloc((len + 1) * sizeof(char));

	if (word == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		word[i] = str[strt + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}


/**
 * strtow - function that splits strings to words
 *
 * @str: string
 *
 * Return: char
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	/*count words and store it n_word and allocate memory for pointers to words*/
	int n_word = cnt_word(str);
	char **word = (char **)malloc((n_word + 1) * sizeof(char *));
	/* declaring word index, current word and position */
	int i = 0, i_word = 0, pos = 0, cur_word;

	if (word == NULL)
	{
		return (NULL);
	}
	/*iterates through the string such that */
	/*[1] if it encounters ' ' it checks if it was in the*/
	/*middle of a word. If so, it calls the cpy_wd function to copy the word*/
	/*[2] If it encounters words and cur_word = 0 it sets the strt index to the*/
	/*current position and marks that it is in the middle of a word*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (cur_word)
			{
				word[i_word++] = cpy_wd(str, pos, i - 1);
				cur_word = 0;
			}
		} else if (!cur_word)
		{
			pos = i;
			cur_word = 1;
		}
	}
	if (cur_word)
	{
		word[i_word] = cpy_wd(str, pos, str_len(str) - 1);
	}
	word[i_word] = NULL;
	return (word);
}
