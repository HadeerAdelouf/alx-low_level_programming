#include"function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints its own opcodes
 * @argc:number of arguments
 *@argv:argument vector
 *Return:always 0
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *) main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
