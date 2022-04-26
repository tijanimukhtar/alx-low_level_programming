#include "lists.h"

/**
 * add_nodeint_end - this adds a new node at the end
 * of a linked list
 * @head: this is the head of a list.
 * @n: this is the n element.
 *
 * Return: this returns address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *bac;
	listint_t *see;

	(void)see;

	bac = malloc(sizeof(listint_t));

	if (bac == NULL)
		return (NULL);

	bac->n = n;
	bac->next = NULL;
	see = *head;
	if (*head == NULL)
	{
		*head = bac;
	}
	else
	{
		while (see->next != NULL)
		{
			see = see->next;
		}
		see->next = bac;
	}

	return (*head);
}
