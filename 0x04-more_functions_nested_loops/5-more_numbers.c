#include "main.h"

/**
*more_numbers - function printfrom 0 to 14
*10 times
*return: void
 */

void more_numbers(void)
{
int num, i, count;

	for (i = 0 ; i <= 10; i++)
	{
		for (count = 0; count <= 14 ; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
