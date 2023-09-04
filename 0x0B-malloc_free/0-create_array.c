#include "main.h"
#include <stdlib.h>

/**
 * create_array - of char and initialize it with a char.
 * @size: of the array.
 * @c: character to be initialized.
 *
 * Return: Pointer to created array else NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}