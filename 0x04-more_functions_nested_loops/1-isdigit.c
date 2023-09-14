#include "main.h"

/**
 * _isdigit - function.
 * @c: input
 * Return: 1 if is a number from 0 to 9, 0 if not.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
