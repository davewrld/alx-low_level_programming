#include "main.h"

/*
 * get_bit- returns value of a bit given a index
 * @n: number given
 * @index: index of the bit to get
 *
 * Return: value of the bit aat index
 */
 int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return(-1);

	return ((n >> index) & 1);
}
