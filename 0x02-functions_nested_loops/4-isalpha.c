#include "main.h"

/**
 * _isalpha - checks if c  alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 if alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
