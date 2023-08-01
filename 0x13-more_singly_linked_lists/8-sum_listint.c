#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a listint_t linked list
 * @head: pointer to the first node of lisint_t list
 *
 * Return: sum of all data in each node or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
