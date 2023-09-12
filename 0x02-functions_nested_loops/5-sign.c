#include "main.h"
/**
 * print_sign - function
 * Description: task 6 0x02
 * @a: input.
 * Return: 1 if > zero. 0 if zero.
 * -1 if < zero.
 */
int print_sign(int a)
{
if (a > 0)
{
_putchar(43);
return (1);
}
else if (a < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
