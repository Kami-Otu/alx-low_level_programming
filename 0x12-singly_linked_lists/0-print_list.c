#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head of the linked list
 *
 * Return: number of non-null nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		count++;
	}

	return (count);
}
