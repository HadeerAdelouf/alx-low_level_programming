
#include"lists.h"

/**
 * print_list - prints elements of a list
 * @h:linked list pointer
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
		else
		printf("[%d] %s\n", 0, "(nill)");
		counter++;
	h = h->next;
	}
	return (counter);
}
