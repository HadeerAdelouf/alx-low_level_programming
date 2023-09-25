#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a list.
 * @idx: index of list where the new node is added
 * @n: integer element
 * Return: the address of the new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *ptr2;

	ptr2 = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr2 != NULL; i++)
		{
			ptr2 = ptr2->next;
		}
	}

	if (ptr2 == NULL && idx != 0)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		ptr->next = ptr2->next;
		ptr2->next = ptr;
	}
	return (ptr);
}
