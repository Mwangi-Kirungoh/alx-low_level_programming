#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to head node of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *temp;

	if (!head)
		exit(98);

	while (curr)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		temp = curr;
		curr = curr->next;
		if (temp <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}
	return (count);
}
