#include "main.h"
/**
 * print_last_digit - function
 * @r: input
 * Description: Task 7 0x02
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
int a;
if (r < 0)
a = -1 * (r % 10);
else
a = r % 10;
_putchar((a % 10) + '0');
return (a % 10);
}
