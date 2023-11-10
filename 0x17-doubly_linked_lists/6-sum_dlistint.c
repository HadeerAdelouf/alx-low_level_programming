include"lists.h"
/**
 * sum_dlistint - show us the sum of all the data (n) in a dLL
 * @head: a pointer to the head of the dLL
 * Return: if empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
		int add_sum = 0;

			while (head != NULL)
			{
				add_sum += head->n;
				head = head->next;
			}
			return (add_sum);
}
