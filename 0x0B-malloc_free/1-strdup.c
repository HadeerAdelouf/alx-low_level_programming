#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *n;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		i++;
	n = malloc(sizeof(char) * i);
	if (n == 0)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		n[j] = str[i];
	}
	return (n);
}
