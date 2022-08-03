#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: input integer array
 * @size of the array
 * @cmp: pointer to the function
 *
 * Returns: index of the first element for which the cmp function not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
