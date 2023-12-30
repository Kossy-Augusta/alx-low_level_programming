#include "lists.h"

/**
 * dlistint_len - Function that returns the number of
 * elements in a linked dlistint_t list
 * @h: ponted to first element in the list
 *
 * Return: number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	if (temp == NULL)
	{
		return (num);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		num++;
	}

	return (num);
}
