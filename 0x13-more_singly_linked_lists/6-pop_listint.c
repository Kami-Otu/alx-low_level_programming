#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (node);
}
