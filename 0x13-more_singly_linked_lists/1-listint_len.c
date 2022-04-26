#include "lists.h"

/**
 * listint_len - this  returns the number of elements in
 * a linked list.
 * @h: this is the head of a list.
 *
 * Return: this returns the numbers of node.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
