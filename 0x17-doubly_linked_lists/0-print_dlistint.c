#include "lists.h"

/**
 * print_dlistint - Print all elements of a dlistint_t list
 * @h: Pointer to the head of the doubly-linked list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	
	count = 0;
	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL && h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
