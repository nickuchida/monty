#include "monty.h"

void execute(char *opcodes, unsigned int linenum, stack_t *head)
{
	stack_t stack = NULL;
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	while (ops[i].opcode)
	{
		if (strcmp(opcodes, ops[i].opcode) == 0)
			ops[i].f(head, linenum);
		i++;
	}
}
