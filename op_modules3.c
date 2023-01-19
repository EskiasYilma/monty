#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line
 * @stack: pointer to head of stack
 * @line_number: number of the line in the bytecode file
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;

	(void)line_number;
	if (top == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pchar, stack empty\n",
			gl_line_number);
		exit(EXIT_FAILURE);
	}
	if ((top->n) >= 0 || (top->n) <= 127)
	{
		printf("%c\n", (char)(top->n));
		return;
	}
	dprintf(STDERR_FILENO, "L%d: can't pchar, value out of range\n",
			gl_line_number);
	exit(EXIT_FAILURE);
}
