#include "monty.h"
/**
* stackFree - frees stack
* @head: head of the stack
* Return: nothing
*/
void stackFree(stack_t *head)
{
	stack_t *x;

	x = head;
	for (; head; head = x)
	{
		x = head->next;
		free(head);
	}
}
