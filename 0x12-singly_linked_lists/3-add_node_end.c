#include "lists.h"

/**
 * add_node_end - adds node at the end of list
 * @head: head of the list
 * @str: string to store in the list.
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t counter;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (counter = 0; str[counter]; counter++)
		;

	new_node->len = counter;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}

