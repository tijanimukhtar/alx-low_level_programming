#include "lists.h"

/**
 * free_listint - this frees a linked list
 * @head: this is the head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *t_emp;

	while ((t_emp = head) != NULL)
	{
		head = head->next;
		free(t_emp);
	}
}
