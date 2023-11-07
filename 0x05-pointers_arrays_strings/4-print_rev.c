#include "main.h"
#include <stdlib.h>

/**
 * print_rev - Print string in reverse and new line.
 * @s: A pointer to a string.
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
