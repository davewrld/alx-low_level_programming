#include "main.h"
#include <stdio.h>

/**
 * _strlen - Return the length of as string.
 * @s: A pointer to a string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
