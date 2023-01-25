#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
		}
	}

	return (-1);
}
