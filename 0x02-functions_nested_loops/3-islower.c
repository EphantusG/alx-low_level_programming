#include"main.h"
/**
 *_islower - Check whether char is lowercase
 *@c: the character to check
 *Return: 1 if char is lowercase0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
