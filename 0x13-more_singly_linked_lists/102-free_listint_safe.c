#include "lists.h"

/**
 * free_listint_safe - frees a linked list listint_t
 * @h: pointer to the fist node in the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int differnce;
	size_t len = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		differnce = *h - (*h)->next;
		if (differnce > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
