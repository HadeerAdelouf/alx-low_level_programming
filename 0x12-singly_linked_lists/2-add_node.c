#include "lists.h"
/**
 * add_node - adds a new node at the beginning of list
 * @head: double pointer
 * @str: pointer to the first node in the list
 * Return:NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	int counter = 0;
	list_t *new_ptr;

	if (!str)
		return (NULL);

	new_ptr = malloc(sizeof(list_t));

	if (new_ptr)
	{
		new_ptr->str = strdup(str);

		if (new_ptr->str)
		{
			while (new_ptr->str[counter])
				counter++;

			new_ptr->len = counter;
			new_ptr->next = *head;
			*head = new_ptr;

			return (new_ptr);
		}

		free(new_ptr);
		return (NULL);
	}

	return (NULL);
}
