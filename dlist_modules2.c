#include "monty.h"

/**
 * sub_topnode - subtracts top stack
 * @stack: pointer to head of stack_t list
 * Return: Nothing
 */
void sub_topnode(stack_t **stack)
{
	stack_t *temp = *stack;
	int data = 0;

	data = temp->n;
	(temp->next)->n -= data;
	delete_dnodeint_at_index(stack, 0);
}

/**
 * div_topnode - divides second top element by top element of stack
 * @stack: Pointed to head of a list
 * Return: Nothing
 */
void div_topnode(stack_t **stack)
{
	stack_t *temp = *stack;
	int data = 0;

	data = temp->n;
	if (data == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", gl_line_number);
		exit(EXIT_FAILURE);
	}
	(temp->next)->n = (temp->next)->n / data;
	delete_dnodeint_at_index(stack, 0);
}
