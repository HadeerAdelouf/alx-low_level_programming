#include"main.h"
/**
 * binary_to_uint - converts binary num into unsugned int 
 * @b : pointer to a string of 0 and 1 char
 * Retrun : converted num and 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if ( b == NULL)
		return (0);
	while ( *b != NULL)
	{
		if (*b != '0' && *b != '1')
		{
		return (0);
		}
	number = (number * 2) + (*b - '0');
	b++;
	}
	return (0);
}
