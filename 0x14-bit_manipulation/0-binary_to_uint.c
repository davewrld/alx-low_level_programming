#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: pointer to string.
 * Return: if NULL or contanins char not o 0 or 1 else converted Number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; lemn >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}