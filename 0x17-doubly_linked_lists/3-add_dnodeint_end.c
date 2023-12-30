#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of a
 * dlistint_t list
 * @head: double pointer to the first element in the list
 * @n: new element to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *ptr = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		temp->prev = ptr;
		ptr->next = temp;
	}

	return (temp);
}
