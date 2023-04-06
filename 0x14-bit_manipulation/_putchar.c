#include <stdio.h>
#include<unistd.h>
/**
 * _putchar - prints char c to std output(stdout)
 *@c: character to print
 * Return: 1 when success
 * -1 returned on error and errno set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
