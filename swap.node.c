#include "monty.h"
/**
 * swap_nodes - Swaps the top two elements
 * @stack: Pointer to a pointer
 * @line_number: Interger representing
 * Return: nothing
 */
void swap_nodes(stack_t **stack, unsigned int line_number)
{
	stack_t *itm;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		more_err(8, line_number, "swap");
	
	itm = (*stack)->next;
	(*stack)->next = itm->next;
	if (itm->next != NULL)
		itm->next->prev = *stack;
	itm->next = *stack;
	(*stack)->prev = itm;
	itm->prev = NULL;
	*stack = itm;
}
