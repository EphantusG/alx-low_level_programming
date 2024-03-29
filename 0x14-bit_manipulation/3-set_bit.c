#include "main.h"

/**
 * set_bit - set bit at given index
 * @n: pointer t the number
 * @index: index
 *
 * Return: -1 if failure, 1 is success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
