#include "function_pointers.h"
/**
 * array_iterator-executes a function given as a parameter
 *  on each element of an array.
 *  @action:function pointer
 *  @size:array size
 *  @array:input array
 *  Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
