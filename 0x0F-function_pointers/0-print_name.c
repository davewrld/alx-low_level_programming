#include "main.h"
#include <stdio.h>

/**
 * print_name - prints name.
 * @f: pointer to function
 * @name: To be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
