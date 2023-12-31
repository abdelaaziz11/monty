#include "monty.h"
/**
 * print_str - Prints a string
 * @stack: Pointer to a pointer
 * @ln: Interger representing
 * Return: nothing
 */
void print_str(stack_t **stack, __attribute__ ((unused))unsigned int ln)
{
	int as_ii;
	stack_t *itm;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

	itm = *stack;
	while (itm)
	{
		as_ii = itm->n;
		if (as_ii <= 0 || as_ii > 127)
			break;
		printf("%c", as_ii);
		itm = itm->next;
	}
	printf("\n");
}
