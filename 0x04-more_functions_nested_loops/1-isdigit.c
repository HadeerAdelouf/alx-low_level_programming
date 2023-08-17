#include"main.h"

/**
 * int _isdigit - checks for a digit (0 to 9)
 *
 * @c: input number
 * Return 1 if c is a digit 0 othrwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
		return (0);
}
