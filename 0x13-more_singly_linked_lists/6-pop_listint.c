#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list and returns its data
* @head: pointer to the head of the list
*
* Return: the data of the head node, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = temp->next;
free(temp);

return (data);
}
