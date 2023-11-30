#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @f: The function pointer specifying the printing format.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
