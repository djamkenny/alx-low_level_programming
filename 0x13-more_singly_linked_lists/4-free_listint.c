#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint-list
 * @head: a parameter
 * Return: Alwasy 0
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

