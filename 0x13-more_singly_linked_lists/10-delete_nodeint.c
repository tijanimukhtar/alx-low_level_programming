#include "lists.h"

/**
 * delete_nodeint_at_index - this deletes the node at index
 * of a linked list.
 * @head: this is the head of a list.
 * @index: this is index of the list where the node is
 * deleted.
 *
 * Return: returns 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_;
	listint_t *next;

	prev_ = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev_ != NULL; i++)
		{
			prev_ = prev_->next;
		}
	}

	if (prev_ == NULL || (prev_->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev_->next;

	if (index != 0)
	{
		prev_->next = next->next;
		free(next);
	}
	else
	{
		free(prev_);
		*head = next;
	}

	return (1);
}
