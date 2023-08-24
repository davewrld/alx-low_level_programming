#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: String to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL on faiure.
 */
char *_strdup(char *str)
{
	int index = 0, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
