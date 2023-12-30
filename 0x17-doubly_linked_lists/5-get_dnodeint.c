#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list
 * @head: pointer to the first element of the list
 * @index: is the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list or NULL if the node
 * does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == i)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
