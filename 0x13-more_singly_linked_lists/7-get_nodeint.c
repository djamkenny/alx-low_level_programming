#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: parameter
 * @index: integer
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}

