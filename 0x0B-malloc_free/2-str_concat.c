#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j, m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (m = 0; m < i; m++)
		s3[m] = s1[m];

	n = j;
	for (j = 0; j <= n; m++, j++)
		s3[m] = s2[j];

	return (s3);
}
