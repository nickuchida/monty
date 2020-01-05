#include "monty.h"

int main(int argc, char *argv)
{
	struct stack_s *head;
	char *filename = argv[1];
	FILE* file = fopen(filename, "r");
	char *linebuffer = NULL;
	size_t linebuffer_size = 0;
	int linenum = 0;

	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	if (argv != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	while (getline(&linebuffer, &linebuffer_size, file) != -1)
	{
		linenum++;
		tokenize(linebuffer, linenum);
	}

	free(linebuffer);
	linebuffer = NULL;

	fclose(file);
}
