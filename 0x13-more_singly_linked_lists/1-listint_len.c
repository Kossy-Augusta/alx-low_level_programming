#include "lists.h"

/**
 * listint_len - Returns num of elements in listint_t
 * @h: pointer to linked nodes of listint_t
 *
 * Return: number of nodes in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
