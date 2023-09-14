#include "function_pointers.h"

/**
 * void array_iterator: executes function given as parameter.
 * @array: TO iterate.
 * @size: of the array.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NUll || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
