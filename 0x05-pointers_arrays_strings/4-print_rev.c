#include "main.h"
#include <stdlib.h>

/**
 * print_rev - Print string in reverse and new line.
 * @s: A pointer to a string.
 */
void print_rev(char *s)
{
	int len = 0, index;
	
	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
