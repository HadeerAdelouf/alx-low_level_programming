#include"main.h"
/**
 * get_bit - gets the bit at the given index
 * @n: number of index
 * @index: is the index, starting from 0 of the bit to get
 * Return:the value of the bit at index index or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
		if (index >= sizeof(n) * 8)
		{
		return (-1);
		}
		unsigned long int bit = n >> index & 1;

		return (bit);
}
