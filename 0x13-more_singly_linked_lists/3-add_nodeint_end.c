#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of list
 * @head: pointer to head of a list
 * @n: the integer for the new_node node to contain
 * Return: address of the new element NUll if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	if (current)
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
