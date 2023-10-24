#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: parameter
 * @idx: int
 * @n: int
 * Return: Null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i == idx)
	{
		new_node->next = current;
		prev->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}

