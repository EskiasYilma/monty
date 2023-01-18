#include "monty.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * stack_t linked list.
 * @head: pointer to the head node of a Doubley linked list
 * @index: index of node to delete
 * Return: Null
 */

void delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *temp, *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", gl_line_number);
		exit(EXIT_FAILURE);
	}

	ptr = *head;
	if (index == 0 && ptr->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	if (index == 0 && ptr->next != NULL)
	{
		*head = ptr->next;
		(*head)->prev = NULL;
		free(ptr);
		return;
	}
	while (i < index - 1 && ptr && ptr->next)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
		return;

	temp = ptr->next;
	ptr->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = ptr;
	free(temp);
	dprintf(STDERR_FILENO, "L%d: can't pop an empty stack\n", gl_line_number);
	exit(EXIT_FAILURE);
}
