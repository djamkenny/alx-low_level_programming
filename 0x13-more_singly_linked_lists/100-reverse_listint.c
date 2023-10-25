#include "lists.h"
/**
 * reverse_listint - reverse a listint_t linked list
 * @head: parameter
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	first = *head;
	rest = first->next;

	rest = reverse_listint(&rest);

	first->next->next = first;
	first->next = NULL;

	*head = rest;

	return (*head);
}

