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

	while (src[i] != '\0')
{
		mix[j] = src[i];
		i++;
		j++;
}
while (dest[i] != '\0')
{
		mix[j] = dest[i];
		i++;
		j++;
}
	mix[j] = '\0';

	printf("\nConcatenated string: %s", mix);
	return (dest);
}
