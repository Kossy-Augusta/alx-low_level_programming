#include "lists.h"


/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: double pointer to the first node of the list
 * @idx:index of the list where the new node should be added. Index starts at 0
 * @n: integar to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *new = NULL, *temp2 = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	temp = *h;

	while (temp)
	{
		if (i == idx)
		{
			new->prev = temp2;
			new->next = temp;
			temp->prev = new;
			temp2->next = new;
			return (new);
		}
		temp2 = temp;
		temp = temp->next;
		i++;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
