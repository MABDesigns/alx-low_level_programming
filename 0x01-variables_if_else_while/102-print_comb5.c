#include <stdio.h>
/**
 * main - beginning
 * Description: task 12 0x01
 * Return: 0
 */
int main(void)
{
int n;
int m;
int a;
int b;
int c;
int d;
for (n = 0; n < 100; n++)
{
a = n / 10;
b = n % 10;
for (m = 0; m < 100; m++)
{
c = m / 10;
d = m % 10;
if (a < c || (a == c && b < d))
{
putchar(a + '0');
putchar(b + '0');
putchar(32);
putchar(c + '0');
putchar(d + '0');
if (!(a == 9 && b == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
