#include "monty.h"
/**
 * rotr - Rotates the last node 
 * @stack: Pointer to a pointer
 * @ln: Interger representing
 * Return: nothing
 */
void rotr(stack_t **stack, unsigned int ln)
{
	stack_t *itm;

	(void)ln;
	if (!stack || !(*stac) || !((*stack)->next))
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
