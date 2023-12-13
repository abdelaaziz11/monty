#include "monty.h"
/**
 * rotl - Rotates the first node
 * @stack: Pointer to a pointer
 * @ln: Interger representing
 * Return: nothing
 */
void rotl(stack_t **stack, unsigned int ln)
{
	stack_t *itm;

	(void)ln;
	if (!stack || !(*stack) || !((*stack)->next))
		return;
	itm = *stack;
	while (itm->next)
		itm = itm->next;

	itm->next = *stack;
	(*stack)->prev = itm;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
