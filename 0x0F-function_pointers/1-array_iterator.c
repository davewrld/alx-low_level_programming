#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: The function pointer to the action to be performed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{

		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
