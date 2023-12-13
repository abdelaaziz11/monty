#include "monty.h"
/**
 * read_file - Reads files
 * @fd: pointer to file
 * Return: nothing
 */
void read_file(FILE *fd)
{
	int lin_num, format = 0;
	char *buf = NULL;
	size_t l = 0;

	for (lin_num = 1; getline(&buf, &l, fd) != -1; lin_num++)
	{
		format = parse_line(buf, lin_num, format);
	}
	free(buf);
}
