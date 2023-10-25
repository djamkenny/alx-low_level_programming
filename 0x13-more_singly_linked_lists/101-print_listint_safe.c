#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: parameter
 * Return: node_count
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;

		/* Check for a loop by comparing the addresses */
		if (head >= head->next)
		{
			fprintf(stderr, "Linked list has a loop\n");
			exit(98);
		}

		head = head->next;
	}

	return (node_count);
}

