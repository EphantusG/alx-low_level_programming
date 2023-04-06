#include "main.h"

/**
 * get_bit - get value of bit at and index i
 * @d ; number to search in
 * @index: index
 * Return: bit value 
 */

int get_bit(unsigned long int n,unsigned int index)
{
	int d_n;

	if (index >63)
		return (-1);

	d_n = (n >> index) & 1;

	return (d_n);
}
