#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @cont: line content
* Return: no return
*/
int execute(char *cont, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t com[] = {
		{"push", push_fun}, {"pall", pall_fun}, {"pint", pint_fun},
		{"pop", pop_fun}, {"swap", swap_fun}, {"add", add_fun},
		{"nop", nop_fun}, {NULL, NULL}
	};
	char *p;
	unsigned int item = 0;

	p = strtok(cont, " \n\t");
	if (p && p[0] == '#')
		return (0);
	put.arg = strtok(NULL, " \n\t");
	while (com[item].opcode && p)
	{
		if (strcmp(p, com[item].opcode) == 0)
		{	com[item].f(stack, count);
			return (0);
		}
		item++;
	}
	if (p && com[item].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, p);
		fclose(file);
		free(cont);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
