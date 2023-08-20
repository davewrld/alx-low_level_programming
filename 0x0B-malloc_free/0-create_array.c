#include "main.h"
#include <stdlib.h>

/**
 * create_array  - Creates an array of chars and intializzes it witha specific char.
 * @size: The size of the array to be intialized.
 * @c: The specific char to iwntialize the array with
 *
 * Return: If size == 0 or thr function fails - NULL. else - a pointer to the array.
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
	
	for(index = 0; index < size; index++)
		array[index] = c;
	
	return (array);
}
