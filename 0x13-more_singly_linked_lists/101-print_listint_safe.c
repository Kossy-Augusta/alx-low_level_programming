#include "lists.h"
#include <stdio.h>

/**
 * loop_listint_count - coundts the nu,ber of nodes on linked list
 * @head: pointer to first node in the list
 *
 * Return: number of nodes on listint_t or 0 if list is not looped
 */
size_t loop_listint_count(const listint_t *head)
{
	const listint_t *ptr, *ptr2;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	ptr = head->next;
	ptr2 = (head->next)->next;

	while (ptr2)
	{
		if (ptr == ptr2)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				count++;
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			ptr = ptr->next;
			while (ptr != ptr2)
			{
				count++;
				ptr = ptr->next;
			}
			return (count);
		}
		ptr = ptr->next;
		ptr2 = (ptr2->next)->next;
	}

	return (0);


}

/**
 * print_listint_safe - prints a linked list listint_t
 * @head: pointer to first node of the list
 *
 * Return: the number nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, idx = 0;

	count = loop_listint_count(head);
	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < count; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
