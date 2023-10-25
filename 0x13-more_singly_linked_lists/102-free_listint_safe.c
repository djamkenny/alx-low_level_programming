#include <stddef.h>
#include "lists.h"
/**
 * free_listint_safe - free a listint_t list
 * @h: parameter
 * Return: size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current;

	while (*h != NULL)
	{
		current = *h;
		*h = (*h)->next;
		free(current);
		size++;
	}

	return (size);
}

