#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 11; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}

	_putchar('\n');
}
