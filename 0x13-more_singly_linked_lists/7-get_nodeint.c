#include "lists.h"
/**
 * get_nodeint_at_index - returns the current node of the linkedList
 * @head: a pointer to the head of the list
 * @index: the index of the node
 * Return:NULL if fails.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (counter == index)
		{
			return (temp);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
