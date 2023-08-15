#include"main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times from a to z
 *
 */

void print_alphabet_x10(void)
{
	int line;
	int ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
