#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *fox;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	fox = (head->next)->next;

	while (fox)
	{
		if (turtle == fox)
		{
			turtle = head;
			while (turtle != fox)
			{
				node++;
				turtle = turtle->next;
				fox = fox->next;
			}

			turtle = turtle->next;
			while (turtle != fox)
			{
				node++;
				turtle = turtle->next;
			}

			return (node);
		}

		turtle = turtle->next;
		fox = (fox->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
