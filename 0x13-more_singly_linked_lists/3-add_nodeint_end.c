#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the begining of a list
 * @head: pointer to the first element in the node
 * @n: new element added to the node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
