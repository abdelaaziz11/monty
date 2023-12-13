#include "monty.h"

/**
 * pop_top - Adds a node to the stack.
 * @stack: Pointer to a pointer
 * @line_number: Interger representing
 * Return: nothing
 */
void pop_top(stack_t **stack, unsigned int line_number)
{
	stack_t *itm;

	if (!stack || !(*stack))
		more_err(7, line_number);

	itm = *stack;
	*stack = itm->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(itm);
}
