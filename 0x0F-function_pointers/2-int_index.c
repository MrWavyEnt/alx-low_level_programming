#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: the size of array
 * @array: the array to search in
 * @cmp: function pointer that compares integers
 *  Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
