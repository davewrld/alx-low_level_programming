#include "main.h"
#include <stdlib.h>

/**
 * create_array  - Creates an array of chars and intializes with char.
 * @size: The size of the array to be intialized.
 * @c: The specific char to iwntialize the array with
 *
 * Return: Pointer to newly crated array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsinged int index;


	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
