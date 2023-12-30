#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: double pointer to the first element in the list
 * @n: new elemet to bbe added to the list
 *
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		temp->next = ptr;
		ptr->prev = temp;
		*head = temp;
	}
	return (temp);
}
