#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to first node in th list
 * @idx: index of the list where new node will be added
 * @n: is data content of the new node
 *
 * Return: address pof the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *ptr;
	unsigned int i;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	i = 0;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);


}
