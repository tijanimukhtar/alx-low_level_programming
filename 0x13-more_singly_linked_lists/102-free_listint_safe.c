#include "lists.h"

/**
 * free_listp2 - this frees a linked list
 * @head: this is the head of a list.
 *
 * Return: gives no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - this frees a linked list.
 * @h: this is the head of a list.
 *
 * Return: returns the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (n_nodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		n_nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (n_nodes);
}
