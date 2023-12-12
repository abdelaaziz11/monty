#include "monty.h"
/**
 * pall_fun - prints all the values on the stack,
 * starting from the top of the stack
 * @head: head of stack
 * @count: count
 * Return: no return
*/
void pall_fun(stack_t **head, __attribute__ ((unused))unsigned int count)
{
	stack_t *h;

	h = *head;
	if (!h)
		return;
	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
	}
}
