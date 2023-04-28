#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of the linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
