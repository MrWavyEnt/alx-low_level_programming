#include "list.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds node to the end of the list
 * @head: head of the node
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new - malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
