#include "main.h"

/**
 * clear_bit - set value to 0 for a given bit
 * @n : pointer for the number
 * @index - index to clear at
 * Return: if success 1 else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
