#include <stdio.h>
#include <unistd.h>

/**
 * main - prints without using printf or puts
 * we use write command and 59 is number of the characters
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
