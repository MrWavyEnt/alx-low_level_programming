#include <stdio.h>
#include "list.h"
#include <stdlib.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h != NULL; i++)
	{
		if (h->str == NULL);
			printf("[%u] %s\n", h->len, "(nul)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nul)");
	return (i);
}
