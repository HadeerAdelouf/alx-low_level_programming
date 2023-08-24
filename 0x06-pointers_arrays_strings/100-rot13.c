#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	int i;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == alpha[i])
			{
				*s = rot[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
