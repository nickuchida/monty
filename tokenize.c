#include "monty.h"

/**
 *tokenize - will tokenize the opcode of each line of file
 *@buffer: current line of file
 *@linenum: current line number
 *Return: void
 */
void tokenize(char *buffer, int linenum)
{
	char *opcodes;
	int push_int;

	opcodes = strtok(buffer, " ");
	if (strcmp(opcodes, "push") == 0)
		{
			push_int = strtok(NULL, " ");
			if (isdigit(push_int) == 0)
			{
				printf("L%d: usage: push integer\n", linenum);
				exit(EXIT_FAILURE);
			}
			push(int push_int);
		}
	else
		execute(opcodes);
}
