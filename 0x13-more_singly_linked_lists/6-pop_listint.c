#include "lists.h"
/**
 * pop_listint - deletes the head node of the linkedList
 * @head: double pointer to the head of the list
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	int data = 0;

		if (*head == NULL)
		return (0);
		else
		{
			listint_t *temp = head;

			data = (*head)->n;
			head = (*head)->next;
			free(temp);
			temp(NULL);
		}
		return (data);
}
