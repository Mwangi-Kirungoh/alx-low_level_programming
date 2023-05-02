#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of linked list
 * @index: index of node to be returned
 * Return: pointer to the nth node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head != NULL; i++)
	head = head->next;

return (head);
}
