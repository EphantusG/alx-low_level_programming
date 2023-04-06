#include "main.h"
/**
 * binary_to_uint.c - convert base 2 to unsigned int
 * @b ; str with bin number
 * Return : converted number
 */

unsigned int binary_to_uint(const char *d)
{
	/*assigning place holders*/
	int n;
	unsigned int d_n = 0;

	/*check that d is not NULL*/
	if (!d)
		return (0);
	for (n = 0; d[n]; n++)
	{
		if (d[n] < '0' || d[n] > '1')
			return (0);
		d_n = 2 * d_n + (d[n] - '0');
	}
	return (d_n);
}
