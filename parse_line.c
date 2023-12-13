#include "monty.h"
/**
 * parse_line - Separates each line into tokens
 * @buffer: line from the file
 * @line_number: line number
 * @format: storage format
 * Return: 0 or 1
 */
int parse_line(char *buffer, int line_number, int format)
{
	char *op, *val;
	const char *del = "\n ";

	if (buffer == NULL)
		err(4);

	op = strtok(buffer, del);
	if (op == NULL)
		return (format);
	val = strtok(NULL, del);

	if (strcmp(op, "stack") == 0)
		return (0);
	if (strcmp(op, "queue") == 0)
		return (1);

	find_func(op, val, line_number, format);
	return (format);
}
