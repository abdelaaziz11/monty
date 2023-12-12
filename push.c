#include "monty.h"
/**
 * push_fun - pushes an element to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void push_fun(stack_t **head, unsigned int count)
{
	int i = 0, n, fl = 0;

	if (put.ar)
	{
		if (put.ar[0] == '-')
			i++;
		for (; put.ar[i] != '\0'; i++)
		{
			if (put.ar[i] > 57 || put.ar[i] < 48)
			    fl = 1;
		}
		if (fl == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(put.file);
			free(put.cont);
			stackFree(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(put.file);
		free(put.cont);
		stackFree(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(put.ar);
	if (put.lil == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
