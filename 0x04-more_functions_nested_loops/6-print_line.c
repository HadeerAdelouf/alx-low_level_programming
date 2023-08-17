#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: An input integer describs number of _
 * Return: Always 0
 */
void print_line(int n)
{

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
