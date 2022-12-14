/*
 * File: 1-alphabet.c
 * By: David Mutuku Nzuki
 */

#include "main.h"

/**
 * print alphabet in lowercase
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
