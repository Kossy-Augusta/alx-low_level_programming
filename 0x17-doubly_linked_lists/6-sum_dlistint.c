#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all the data (n) of a dlistint_t
 * linked list, if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
