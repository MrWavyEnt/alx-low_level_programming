#include "list.h"
#include <stdlib.h>
#include <string.h.h>
/**
 * add_node - add node at the beginning
 * @head: head of node
 * @str: atring of store
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	newn = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str + strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
