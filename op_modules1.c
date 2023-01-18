#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (dlistint_len(*stack) >= 2)
	{
		swap_nd(*stack);
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n",
	gl_line_number);
	exit(EXIT_FAILURE);
}

/**
 * nop - doesnt do anything
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
