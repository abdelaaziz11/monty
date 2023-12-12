#include "monty.h"
/**
 * swap_fun - swaps the top two elements of the stack
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/
void swap_fun(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0, x;

	h = *head;
	for (; h; h = h->next, length++)
	{
		;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(put.file);
		free(put.cont);
		stackFree(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n;
	h->n = h->next->n;
	h->next->n = x;
}
