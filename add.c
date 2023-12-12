#include "monty.h"
/**
 * add_fun - adds the top two elements of the stack
 * @head: head of stack
 * @count: line of number
 * Return: nothing
*/
void add_fun(stack_t **head, unsigned int count)
{
	stack_t *h;
	int l = 0, x;

	h = *head;
	for (; h; h = h->next, l++)
	{
		;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(put.file);
		free(put.cont);
		stackFree(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n + h->next->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
