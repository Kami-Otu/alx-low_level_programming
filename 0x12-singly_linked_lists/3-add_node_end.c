#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to list_t list
 * @str: string to put the new node into
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_code;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_code = malloc(sizeof(list_t));
	if (!new_code)
	return (NULL);

	new_code->str = strdup(str);
	new_code->len = len;
	new_code->next = NULL;

	if (*head == NULL)
	{
	*head = new_code;
	return (new_code);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new_code;

	return (new_code);
}
