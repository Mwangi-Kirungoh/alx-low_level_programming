#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list.
 * @head: pointer to the head node.
 *
 * Return: sum of the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
