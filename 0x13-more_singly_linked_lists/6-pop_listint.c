#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to head node
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
