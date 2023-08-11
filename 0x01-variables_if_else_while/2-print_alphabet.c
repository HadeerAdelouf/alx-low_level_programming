#include <stdio.h>
/**
 * main - it prints the alphabet in lowercase
 * Return: 0 (if success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
return (0);
}
