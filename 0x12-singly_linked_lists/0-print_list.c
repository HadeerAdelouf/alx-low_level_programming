#include"lists_h"

/**
 * print_list - prints elements of a list
 * @h:linked list pointer
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		printf("[%d] %s\n", 0, "(nill)");
	struct list_t *ptr = NULL;

	ptr = h;

	while (h != NULL)
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
		counter++;
		ptr->next;
	}
	return (counter);
}

