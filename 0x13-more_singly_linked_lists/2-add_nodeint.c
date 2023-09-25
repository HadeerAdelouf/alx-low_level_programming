#include "lists.h"

/**
 *add_nodeint - adds new_node node at beginning of linkedList.
 *@head: A pointer to the head of the list
 *@n: the integer for the new_node node to contain
 *Return:address of new element or null if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
