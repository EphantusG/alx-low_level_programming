#include "main.h"
/**
*print_most_numbers- Print number 0 through 9, except 2 and 4
*
*Return: 0 Success .
*/

void print_most_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
{
if (c != 50)
{
if (c != 52)
{
_putchar(c);
}
}
}
_putchar('\n');
}
