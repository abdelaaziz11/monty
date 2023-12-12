#include "monty.h"
/**
 * queue_fun - sets the format of the data to a queue (FIFO)
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void queue_fun(__attribute__ ((unused))stack_t **head,
        __attribute__ ((unused))unsigned int count)
{
	put.lil = 1;
}

/**
 * add_queue - adds node to the tail of the stack
 * @n: new value
 * @head: head of the stack
 * Return: no return
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new, *x;

	x = *head;
	new = malloc(sizeof(stack_t));
	if (!new)
		printf("Error\n");
	new->n = n;
	new->next = NULL;
	if (x)
	{
		for (; x->next; x = x->next)
			;
	}
	if (x)
	{
		x->next = new;
		new->prev = x;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
}
