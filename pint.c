#include "monty.h"
/**
 * pint_fun - prints the value at the top of the stack,
 * followed by a new line
 * @head: head of stack
 * @count: line of number
 * Return: no return
*/
void pint_fun(stack_t **head, unsigned int count)
{
	if (!(*head))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(put.file);
		free(put.cont);
		stackFree(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
