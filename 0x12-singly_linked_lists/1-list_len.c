
#include"lists.h"

/**
 * list_len - prints number ofelements of a list
 * @h:linked list pointer
 * Return:number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
	if (h->str)
		counter++;
	h = h->next;
	}
	return (counter);
}
