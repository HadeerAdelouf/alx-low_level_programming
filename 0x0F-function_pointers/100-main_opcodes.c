#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints its own opcodes
 * @argc:number of arguments
 *@argv:argument vector
 *Return:always 0
 */
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n");
	exit(1);
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (b--)
		printf("%02hhx%s", *ptr++, b ? " " : "\n");
	return (0);
}
