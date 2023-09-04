#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates arry of chars
 * @size:size of array
 * @c:array chars
 * Return:pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
