#include "main.h"

/**
 * flip_bit - count bits to change
 * @n: number one
 * @m : number 2
 * Return: Number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, loc = 0;
	unsigned long int x = n ^ m;
	unsigned long int position;

	for (j = 63; j >= 0; j--)
	{
		position = x >> j;
		if (position & 1)
			loc++;
	}
	return (loc);
}
