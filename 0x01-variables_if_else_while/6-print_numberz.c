#include<stdio.h>

/**
 *main - prints phrase using printf function
 *Return: 0 if exited properly, non zero otherwise
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
