#include "monty.h"

/**
 * print_top - Prints the top
 * @stack: Pointer to a pointer
 * @line_number: Interger representing
 * Return: nothing
 */
void print_top(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
		more_err(6, line_number);
	printf("%d\n", (*stack)->n);
}
