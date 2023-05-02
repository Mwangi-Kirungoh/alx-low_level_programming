#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to a pointer to the head of the listint_t list
 * @n: Integer to be added to the new node
 *
 * Return: Pointer to the new node, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
