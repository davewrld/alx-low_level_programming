#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string and newline.
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
