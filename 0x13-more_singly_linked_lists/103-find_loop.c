#include "lists.h"
/**
 * find_listint_loop - find the loop in a linked list
 * @head: parameter
 * Return: null
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}
	}

	return (NULL);
}
