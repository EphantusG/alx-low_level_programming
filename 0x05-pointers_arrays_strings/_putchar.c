#include "main.h"
#include <stdio.h>

/**
*@c: the character to print
*Return: 1 Always
*If error, -1 is returned, and errno is set
*/
int _putchar(char c)
{
return (write(1,&c,1));
}
