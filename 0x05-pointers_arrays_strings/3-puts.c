#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout;
 * @str: pointer to a string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
