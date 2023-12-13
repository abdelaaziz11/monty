#include "monty.h"

/**
 * open_file - opens a file
 * @fileName: the file namepath
 * Return: Nothing
 */
void open_file(char *fileName)
{
	FILE *f = fopen(fileName, "r");

	if (fileName == NULL || f == NULL)
		err(2, fileName);

	read_file(f);
	fclose(f);
}
