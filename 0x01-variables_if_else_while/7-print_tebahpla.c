#include <stdio.h>
/**
 * main - it prints the alphabet in lowercase from z to a
 * Return: 0 (if success)
*/

int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
return (0);
}
