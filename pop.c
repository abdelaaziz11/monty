#include "monty.h"
/**
 * pop_fun - removes the top element of the stack
 * @head: stack head
 * @count: line_
 * Return: no return
*/
void pop_fun(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (!(*head))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(put.file);
		free(put.cont);
		stackFree(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
