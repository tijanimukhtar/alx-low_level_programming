#include "lists.h"

/**
 * free_listp - this frees a linked list
 * @head: this is the head of a list.
 *
 * Return: gives no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp_;
	listp_t *curr_;

	if (head != NULL)
	{
		curr_ = *head;
		while ((temp_ = curr_) != NULL)
		{
			curr_ = curr_->next;
			free(temp_);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - this prints a linked list.
 * @head: this is the head of a list.
 *
 * Return: returns number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (n_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}

	free_listp(&hptr);
	return (n_nodes);
}
