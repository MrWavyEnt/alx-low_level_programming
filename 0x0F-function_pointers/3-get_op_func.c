#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the correct functions to perform
 * the operation asked by the user
 * @s: The operator passed as argument
 *
 * Return: A point to the function correspondinh to the operator as aparameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return ops[i].f;
		i++;
	}

	return NULL;
}
