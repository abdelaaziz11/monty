#include "monty.h"
/**
 * add_node - add node to the head stack
 * @head: head
 * @n: new value
 * Return: nothing
*/
void add_node(stack_t **head, int n)
{
	stack_t *new, *x;

	x = *head;
	new = malloc(sizeof(stack_t));
	if (!new)
		printf("Error\n"), exit(0);
	if (x)
		x->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
