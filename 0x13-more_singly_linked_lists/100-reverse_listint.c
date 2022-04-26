#include "lists.h"

/**
 * reverse_listint - this reverses a linked list.
 * @head: this is the head of a list.
 *
 * Return: this pointer pointing to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
