#include "monty.h"

/**
 * print_stack - Prints to the stack
 * @stack: Pointer to a pointer
 * @line_number: line number
 * Return: nothing
 */
void print_stack(stack_t **stack,
		__attribute__ ((unused))unsigned int line_number)
{
	stack_t *itm;

	if (!stack)
		exit(EXIT_FAILURE);
	itm = *stack;
	while (itm)
	{
		printf("%d\n", itm->n);
		itm = itm->next;
	}
}
