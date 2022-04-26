#include "lists.h"

/**
 * print_listint - this print all elements of a list.
 * @h: this is the head of a list.
 *
 * Return: the numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
