#include "monty.h"

int main(int argc, char *argv)
{
	int line_number = 0;
	char *filename = argv[1];
	FILE* file = fopen(filename, "r");
	char *linebuffer = NULL;
	size_t linebuffer_size = 0;
	ssize_t line_size;

	if (argv != 2)
	{
		printf("L%d: usage: push integer\n", line_number);
	}

	line_size = getline(&linebuffer, &linebuffer_size, file);

	while (line_size >= 0)
	{
		line_number ++;
		line_size = getline(&linebuffer, &linebuffer_size, file);
	}

	fclose(file);
}
