#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: pointer to the list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}


