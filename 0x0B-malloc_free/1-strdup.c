#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns pointer to newly allocated space.
 * @str: Duplicate pointer.
 *
 * Return: new string of str duplicate.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= len; index++)
	{
		duplicate[index] = str[index];
	}

	return (duplicate);
}

