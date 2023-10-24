#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: parameter
 * Return: data
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int data;
	listint_t *temp;

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}

