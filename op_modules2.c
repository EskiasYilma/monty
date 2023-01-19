#include "monty.h"

/**
 * sub - subtracts the top element of the stack from the
 * second top element of the stack
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 */
void sub(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (dlistint_len(*stack) >= 2)
	{
		sub_topnode(stack);
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n",
			gl_line_number);
	exit(EXIT_FAILURE);
}
