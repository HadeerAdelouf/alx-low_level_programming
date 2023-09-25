#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at certin index of list
 * @head: head of a list.
 * @index:given position where to delete node
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *next_node;
	unsigned int i;

	prev_node = *head;

	if (prev_node == NULL || (prev_node->next == NULL && index != 0))
	{
		return (-1);
	}

		if (index != 0)
	{
		for (i = 0; i < index - 1 && prev_node != NULL; i++)
		{
			prev_node = prev_node->next;
		}
	}
			next_node = prev_node->next;

	if (index != 0)
	{
		prev_node->next = next_node->next;
		free(next_node);
	}
	else
	{
		free(prev_node);
		*head = next_node;
	}

	return (1);
}
