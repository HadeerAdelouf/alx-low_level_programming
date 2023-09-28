#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the position to set the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		{
		return (-1);
		}
	unsigned long int bit;

	bit = 1 << index;
	if (*n & bit)
		*n ^= bit;
	return (1);
}
