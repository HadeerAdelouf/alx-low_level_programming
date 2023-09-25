#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of list
 * @head: pointer to head of a list.
 * Return: sum ofthe data
 */
int sum_listint(listint_t *head)
{
	int data_sum;

	data_sum = 0;
	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}
