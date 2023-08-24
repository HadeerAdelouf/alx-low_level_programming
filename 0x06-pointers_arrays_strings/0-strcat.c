#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{

	int i = 0, j = 0;

	while (dest[i])
		i++;
	for (j = 0 ; src[j] ; j++)
		dest[i] = src[j];
	i++;
	return (*dest);
}
