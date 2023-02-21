#include"main.h"
/**
 *print_sign - print sign of a number
 *@n: the number to check
 *Return: 1 and print + if n is greater tha 0
 *0 and print 0 if number is 0
 *-1 and print - if n is less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
