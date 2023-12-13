#include "monty.h"

/**
 * print_char - Prints the Ascii value
 * @stack: Pointer to a pointer
 * @line_number: Interger representing
 * Return: nothing
 */
void print_char(stack_t **stack, unsigned int line_number)
{
	int as_ii;

	if (!stack || !(*stack))
		string_err(11, line_number);
	as_ii = (*stack)->n;
	if (as_ii < 0 || as_ii > 127)
		string_err(10, line_number);
	printf("%c\n", as_ii);
}
