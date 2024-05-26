#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value using binary search.
 * @array: Pointer to the first element of the array to be searched.
 * @size: Number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the value, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Value checked array[%ld] = [%d]\n", (unsigned long)mid, array[mid]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
