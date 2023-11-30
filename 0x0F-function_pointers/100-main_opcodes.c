#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @bytes: The number of bytes to print.
 */
void print_opcodes(int bytes)
{
	char *main_opcodes = (char *)print_opcodes;

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	printf("%02x", main_opcodes[0]);
	for (int i = 1; i < bytes; i++)
	{
		printf(" %02x", main_opcodes[i]);
	}
	printf("\n");
}
