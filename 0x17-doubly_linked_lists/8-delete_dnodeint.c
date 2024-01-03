#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index
 * index of a dlistint_t linked list
 * @head: double pointer to the firt node of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fast = NULL, *slow = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	fast = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(fast);
		return (1);
	}
	while (fast)
	{
		if (i == index)
		{
			if (fast->next != NULL)
				fast->next->prev = slow;
			slow->next = fast->next;
			free(fast);
			return (1);
		}
		slow = fast;
		fast = fast->next;
		i++;
	}

	return (-1);
}
