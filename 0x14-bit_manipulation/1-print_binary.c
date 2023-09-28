#include "main.h"

/**
 * print_binary - prints the binary repres of a long number
 * @n: unsigned long int
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		bit = n >> shift;

		if (bit & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || shift == 0)
		{
			_putchar('0');
		}
		shift--;
	}
}
