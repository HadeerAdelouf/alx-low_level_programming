#include"lists.h"
/**
 * dlistint_len - return length of dlist
 * @h:adress of head ptr
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
