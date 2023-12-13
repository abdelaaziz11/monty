#include "monty.h"

/**
 * print_stack - Prints to the stack
 * @stack: Pointer to a pointer
 * @line_number: line number
 * Return: nothing
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *itm;

	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	itm = *stack;
	while (itm != NULL)
	{
		printf("%d\n", itm->n);
		itm = itm->next;
	}
}
