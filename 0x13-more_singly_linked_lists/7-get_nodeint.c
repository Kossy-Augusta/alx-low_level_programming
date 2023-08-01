#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the linked list
 * @index: index of node to be returned starting fro 0
 *
 * Return: pointer to node at index or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	ptr = head;
	while (ptr && count < index)
	{
		ptr = ptr->next;
		count++;
	}

	if (ptr)
		return (ptr);
	return (NULL);
}
