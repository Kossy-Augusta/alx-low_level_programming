#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list list_t
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t st = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		st++;
	}

	return (st);
}
