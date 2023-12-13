#include "monty.h"

/**
 * open_file - opens a file
 * @file_name: the file namepath
 * Return: Nothing
 */
void open_file(char *file_name)
{
	FILE *f = fopen(file_name, "r");

	if (file_name == NULL || f == NULL)
		err(2, file_name);

	read_file(f);
	fclose(f);
}
