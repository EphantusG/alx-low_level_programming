#include "main.h"
/**
 * print_binary - converts a base 10 to base 2
 * @b : binary number to be printed
 */
void print_binary(unsigned long int b)
{
	int n, loc = 0;
	unsigned long int position;

	for (n = 63; n >= 0; n--)
	{
		position = b >> n;

		if (position & 1)
		{
			_putchar('1');
			loc++;
		}
		else if (loc)
			_putchar('0');
	}
		if (!loc)
			_putchar('0');
}
