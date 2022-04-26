#include "lists.h"

/**
 * free_listint2 - this free a linked list
 * @head: this is the head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tempp = curr) != NULL)
		{
			curr = curr->next;
			free(tempp);
		}
		*head = NULL;
	}
}
