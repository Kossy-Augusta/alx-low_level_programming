#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elem;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_elem = malloc(sizeof(list_t));
	if (!new_elem)
		return (NULL);

	new_elem->str = strdup(str);
	new_elem->len = len;
	new_elem->next = NULL;

	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_elem;

	return (new_elem);
}

