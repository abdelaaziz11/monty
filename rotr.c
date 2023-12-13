#include "monty.h"
/**
 * rotr - Rotates the last node 
 * @stack: Pointer to a pointer
 * @ln: Interger representing
 * Return: nothing
 */
void rotr(stack_t **stack, __attribute__ ((unused))unsigned int ln)
{
	stack_t *itm;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	itm = *stack;
	while (itm->next != NULL)
		itm = itm->next;

	itm->next = *stack;
	itm->prev->next = NULL;
	itm->prev = NULL;
	(*stack)->prev = itm;
	(*stack) = itm;
}
