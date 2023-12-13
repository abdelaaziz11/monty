#include "monty.h"
/**
 * rotl - Rotates the first node
 * @stack: Pointer to a pointer
 * @ln: Interger representing
 * Return: nothing
 */
void rotl(stack_t **stack, __attribute__ ((unused))unsigned int ln)
{
	stack_t *itm;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
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
