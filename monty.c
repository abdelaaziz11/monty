#include "monty.h"
put_t put = {NULL, NULL, NULL, 0};
/**
* main - monty code
* @argc: number of arguments
* @argv: arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	stack_t *st = NULL;
	char *cont;
	FILE *file;
	int ReadLine = 1;
	size_t size_of = 0;
	unsigned int cunt = 0;

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	file = fopen(argv[1], "r");
	put.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (; (ReadLine = getline(&cont, &size_of, file)) > 0; cunt++)
	{
		cont = NULL;
		put.cont = cont;
		if (ReadLine > 0)
			execute(cont, &st, cunt, file);
		free(cont);
	}
	stackFree(st);
	fclose(file);
	return (0);
}
