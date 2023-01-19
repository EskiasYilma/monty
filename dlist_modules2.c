#include "monty.h"

/**
 * sub_topnode - subtracts top stack
 * @stack: pointer to head of stack_t list
 */
void sub_topnode(stack_t **stack)
{
	stack_t *temp = *stack;
	int data = 0;

	data = temp->n;
	(temp->next)->n -= data;
	delete_dnodeint_at_index(stack, 0);
}
