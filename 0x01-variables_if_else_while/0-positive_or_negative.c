#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns number to int n everytime and check if + or - or equals zero
 * it executes, and prints it
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive \n ", n);
	if (n < 0)
		printf("%i is negative  \n ", n);
	if (n == 0)
		printf("%i is is zero \n ", n);
	return (0);
}
