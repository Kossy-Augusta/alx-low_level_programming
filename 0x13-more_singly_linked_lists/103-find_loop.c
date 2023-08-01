#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list listint_t
 * @head: the linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	if (!head)
		return (NULL);

	while (ptr1 && ptr2 && ptr1->next)
	{
		ptr1 = ptr1->next->next;
		ptr2 = ptr2->next;
		if (ptr1 == ptr2)
		{
			ptr2 = head;
			while (ptr2 != ptr1)
			{
				ptr2 = ptr2->next;
				ptr1 = ptr1->next;
			}
			return (ptr1);
		}
	}

	return (NULL);
}
