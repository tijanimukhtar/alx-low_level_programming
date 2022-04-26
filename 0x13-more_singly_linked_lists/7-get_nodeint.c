#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of a linked list
 * @head: this is the head of a list.
 * @index: this is the index of the node.
 *
 * Return: this returns the nth node. 
 * If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
