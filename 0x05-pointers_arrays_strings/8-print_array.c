#include "main.h"
/**
 * print_array - prints n element of an array of integers
 * @n: int to check
 * @a: int to check
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
		printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
printf("\n");
}
