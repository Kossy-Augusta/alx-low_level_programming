#include "lists.h"

size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);

}
