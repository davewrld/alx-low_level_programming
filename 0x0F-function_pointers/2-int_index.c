#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array : To iterate through
 * @size : number of elements in array
 * @cmp: pointer to function
 *
 * Return: if no element matches or size <= 0 - -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}

