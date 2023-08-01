#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beggining of a linked list
 * @head: pointer to the first node in the list
 * @n: element to be added to the begining of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
	       return (NULL);
	}
	else
	{
		temp->n = n;
		temp->next = (*head);
		(*head) = temp;
	}

	return (temp);
}
