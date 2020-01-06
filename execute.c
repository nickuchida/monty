#include "monty.h"

void execute(char *opcodes, unsigned int linenum)
{
	stack_t stack = NULL;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	if (strcmp(opcodes, "push") == 0)
		push(stack, linenum);
	if (strcmp(opcodes, "pall") == 0)
		pall(stack, linenum);
}
